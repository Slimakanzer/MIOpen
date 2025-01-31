/*******************************************************************************
 *
 * MIT License
 *
 * Copyright (c) 2021 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 *
 *******************************************************************************/

#include <miopen/batchnorm/solvers.hpp>

#include <miopen/batchnorm/invoke_params.hpp>
#include <miopen/batchnorm/problem_description.hpp>
#include <miopen/visit_float.hpp>
#include <miopen/kernel_build_params.hpp>

#define WORKAROUND_ISSUE_1146 1 // check asm solver applicability for gfx90a

namespace miopen {

namespace solver {

namespace batchnorm {

bool BnBwdTrainingSpatialSingle::IsApplicable(
    const ExecutionContext&, const miopen::batchnorm::ProblemDescription& problem) const
{
    if(problem.GetDirection() != miopen::batchnorm::Direction::Backward ||
       problem.GetMode() != miopenBNSpatial)
        return false;

    int n, c, h, w;
    std::tie(n, c, h, w) = tien<4>(problem.GetXDesc().GetLengths());

    unsigned int in_cstride = h * w;
    unsigned int in_nhw     = n * in_cstride;

    return (in_cstride > 1024 && in_nhw < (32 * 1024 * 1024)) ||
           (in_cstride > 512 && in_nhw < (32 * 1024 * 1024)) || in_cstride <= 512;
}

ConvSolution
BnBwdTrainingSpatialSingle::GetSolution(const ExecutionContext& context,
                                        const miopen::batchnorm::ProblemDescription& problem) const
{
    const auto& handle = context.GetStream();

    bool bfpmixparm = false;
    bool bfp16parm  = false;
    bool bfp32parm  = true;

    if(problem.GetXDesc().GetType() == miopenHalf &&
       problem.GetScaleBiasDiffDesc().GetType() == miopenHalf)
    {
        bfp16parm = true;
        bfp32parm = false;
    }
    else if(problem.GetXDesc().GetType() == miopenHalf &&
            problem.GetScaleBiasDiffDesc().GetType() == miopenFloat)
    {
        bfpmixparm = true;
        bfp32parm  = false;
    }

    int n, c, h, w;
    std::tie(n, c, h, w) = tien<4>(problem.GetXDesc().GetLengths());

    unsigned int in_cstride = h * w;
    unsigned int in_nstride = c * in_cstride;
    unsigned int in_nhw     = n * in_cstride;
    unsigned int in_nchw    = n * in_nstride;

    auto inhw = float(1.0 / in_nhw);

    size_t xlocalsize = 1;
    size_t ylocalsize = 1;

    size_t xgridsize = 1;
    size_t ygridsize = 1;

    unsigned int ldsgcn   = 0;
    unsigned int ldsnogcn = 0;
    int variant           = 1;

    //*************************************************************************************************
    // N*H*W < 32M and H*W > 1024, use batchnorm variant#1 implementation which parallelize
    // work groups over channels and loop through NHW.
    //*************************************************************************************************
    if((in_nhw < (32 * 1024 * 1024) && in_cstride > 1024))
    {
        variant    = 1;
        xlocalsize = 1024;
        xgridsize  = c * xlocalsize;
        ldsgcn     = xlocalsize / 64;
        ldsnogcn   = xlocalsize;
    }
    //*************************************************************************************************
    // N*H*W < 32M and H*W > 512  use batchnorm variant#1 or variant#3 implementation which
    // parallelize
    // work groups over channels and loop through N.
    //*************************************************************************************************
    else if(in_nhw < (32 * 1024 * 1024) && in_cstride > 512)
    {
        variant    = (n >= 32) ? 1 : 3;
        xlocalsize = std::min(64 * ((in_cstride + 63) / 64), static_cast<unsigned int>(1024));
        xgridsize  = c * xlocalsize;
        ldsgcn     = xlocalsize / 64;
        ldsnogcn   = xlocalsize;
    }
    //*************************************************************************************************
    // H*W < 512  use batchnorm variant#0 or variant#3 implementation based on batch size and
    // H*W
    //*************************************************************************************************
    else if(in_cstride <= 512)
    {
        if((n > 64) && (in_cstride > 160))
        {
            variant    = 3;
            xlocalsize = std::min(64 * ((in_cstride + 63) / 64), static_cast<unsigned int>(1024));
            xgridsize  = c * xlocalsize;
            ldsgcn     = xlocalsize / 64;
            ldsnogcn   = xlocalsize;
        }
        else
        {
            variant = 0;
            if(bfp32parm)
            {
                xlocalsize = 1024;
                xgridsize  = 1024 * c;
            }
            else
            {
                xlocalsize = 256;
                xgridsize  = 256 * c;
            }
            ldsgcn   = xlocalsize / 64;
            ldsnogcn = xlocalsize;
        }
    }
    //*************************************************************************************************
    // N*H*W > 32M, use batchnorm variant#2 implementation which parallelize
    // work groups over channels and data segments.
    //*************************************************************************************************
    else
    {
        variant      = 2;
        ylocalsize   = 1024;
        auto segment = int(std::ceil(double(in_cstride) / double(ylocalsize)));
        xgridsize    = c;
        ygridsize    = segment * ylocalsize;
        ldsgcn       = ylocalsize / 64;
        ldsnogcn     = ylocalsize;
    }
    if((in_cstride < 200) && (in_cstride > 60) && bfpmixparm)
    {
        variant    = 1;
        xlocalsize = 1024;
        xgridsize  = c * xlocalsize;
        ldsgcn     = xlocalsize / 64;
        ldsnogcn   = xlocalsize;
    }

    auto result = ConvSolution{miopenStatusSuccess};

    {
        size_t zlocalsize = 1;
        size_t zgridsize  = 1;

        auto kernel = KernelInfo{};

        auto build_params = KernelBuildParameters{
            {"MIOPEN_USE_FP16", static_cast<int>(bfp16parm)},
            {"MIOPEN_USE_FP32", static_cast<int>(bfp32parm)},
            {"MIOPEN_USE_FPMIX", static_cast<int>(bfpmixparm)},
            {"MIO_BN_USESAVED", static_cast<int>(problem.UseSaved())},
            {"MIO_BN_N", static_cast<int>(n)},
            {"MIO_BN_C", static_cast<int>(c)},
            {"MIO_BN_HW", static_cast<int>(in_cstride)},
            {"MIO_BN_NHW", static_cast<int>(in_nhw)},
            {"MIO_BN_CHW", in_nstride},
            {"MIO_BN_NCHW", in_nchw},
            {"MIO_BN_LDS_SIZE", ldsnogcn},
            {"MIO_BN_LDSGCN_SIZE", ldsgcn},
            {"MIO_BN_VARIANT", variant},
            {"MIO_BN_GRP0", xlocalsize},
            {"MIO_BN_GRP1", ylocalsize},
            {"MIO_BN_GRP2", zlocalsize},
        };

        if((n > 64) && (n % 2 == 0) && (variant == 3) && (bfpmixparm) && (problem.UseSaved()) &&
           context.use_asm_kernels && context.rmv.IsV2orV3() &&
           (StartsWith(handle.GetDeviceName(), "gfx8") ||
            (StartsWith(handle.GetDeviceName(), "gfx9")
#if WORKAROUND_ISSUE_1146
             && (handle.GetDeviceName() != "gfx90a")
#endif
                 )) &&
           (!handle.GetTargetProperties().Xnack() || !*handle.GetTargetProperties().Xnack()))
        {
            kernel.kernel_file = "gcnAsmBNBwdTrainSpatial.s";
            kernel.kernel_name = "miopenGcnAsmBNBwdTrainSpatial";

            union
            {
                unsigned u32;
                float f32 = 0;
            } NHW_value;

            NHW_value.f32 = static_cast<float>(in_nhw);

            build_params << KernelBuildParameters{
                {"ROCM_METADATA_VERSION", context.rmv.UseV3() ? "5" : "4"},
                {"MIO_BN_NHW_FLOAT", NHW_value.u32},
            };

            kernel.comp_options = build_params.GenerateFor(kbp::GcnAsm{});
        }
        else
        {
            kernel.kernel_file = "MIOpenBatchNormBwdSpatial.cl";
            kernel.kernel_name = "MIOpenBatchNormBwdSpatial";

            build_params << KernelBuildParameters{
                {"MIO_BN_GFX1030", (handle.GetDeviceName() == "gfx1030") ? "1" : "0"},
            };

            kernel.comp_options = build_params.GenerateFor(kbp::OpenCL{});
        }

        kernel.l_wk.push_back(xlocalsize);
        kernel.l_wk.push_back(ylocalsize);
        kernel.l_wk.push_back(zlocalsize);

        kernel.g_wk.push_back(xgridsize);
        kernel.g_wk.push_back(ygridsize);
        kernel.g_wk.push_back(zgridsize);

        result.construction_params.push_back(kernel);
    }

    const auto dtype    = problem.GetScaleBiasDiffDesc().GetType();
    const auto useSaved = problem.UseSaved();

    result.invoker_factory = [=](const std::vector<Kernel>& kernels) {
        return [=](const Handle& handle_, const AnyInvokeParams& raw_params) {
            decltype(auto) kernel = handle_.Run(kernels.front());
            decltype(auto) params = raw_params.CastTo<miopen::batchnorm::BwdInvokeParams>();

            visit_float(dtype, [&](auto as_float) {
                if(useSaved)
                {
                    kernel(params.x,
                           params.dy,
                           params.dx,
                           params.bnScale,
                           params.resultBnScaleDiff,
                           params.resultBnBiasDiff,
                           params.savedMean,
                           params.savedInvVariance,
                           as_float(inhw));
                }
                else
                {
                    kernel(params.x,
                           params.dy,
                           params.dx,
                           params.bnScale,
                           params.resultBnScaleDiff,
                           params.resultBnBiasDiff,
                           params.epsilon,
                           inhw);
                }
            });
        };
    };

    return result;
}

} // namespace batchnorm

} // namespace solver

} // namespace miopen
