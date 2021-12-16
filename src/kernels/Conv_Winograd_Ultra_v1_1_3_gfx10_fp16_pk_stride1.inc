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

s_version 0x2004
s_inst_prefetch 0x3
s_mov_b32 s0, 0
v_readfirstlane_b32 s4, v0
s_lshr_b32 s4, s4, 6
s_mov_b32 s64, s64
s_mov_b32 s5, 0x3c00bc00
s_inst_prefetch 0x3
v_lshlrev_b32_e32 v125, 7, v0
s_getpc_b64 s[68:69]
s_mov_b32 s70, 0x9dfc
s_mov_b32 s71, 0x31014000
buffer_load_dword v4, v125, s[68:71], 0 offen
s_getreg_b32 s10, hwreg(23, 0, 10)
s_lshr_b32 s11, s10, 7
s_and_b32 s65, 1, s10
s_xor_b32 s9, s11, s65
s_mulk_i32 s9, 0x4
s_addk_i32 s9, 0x3c
s_add_u32 s66, s68, s9
s_addc_u32 s67, s69, 0
s_setpc_b64 s[66:67]
s_branch 78
s_branch 3451
s_branch 3878
s_branch 4265
s_branch 4606
s_branch 5015
s_branch 5382
s_branch 5685
s_getpc_b64 s[68:69]
s_mov_b32 s70, -1
s_mov_b32 s71, 0x31014000
s_load_dwordx16 s[12:27], s[6:7], 0x0
s_load_dwordx2 s[28:29], s[6:7], 0x40
s_load_dwordx4 s[72:75], s[6:7], 0x48
s_load_dwordx2 s[30:31], s[6:7], 0x58
s_load_dwordx2 s[10:11], s[6:7], 0x60
s_mov_b32 s9, 0xa274
v_and_b32_e32 v1, 3, v0
v_mad_u32_u24 v1, v1, 4, s9
s_mov_b32 s9, 0xa26c
v_and_b32_e32 v2, 1, v0
v_mad_u32_u24 v2, v2, 4, s9
s_mov_b32 s9, 0xa264
v_and_b32_e32 v3, 1, v0
v_mad_u32_u24 v3, v3, 4, s9
s_mov_b32 s9, 0xa134
v_and_b32_e32 v132, 63, v0
v_mad_u32_u24 v132, v132, 4, s9
s_mov_b32 s9, 0xa034
v_and_b32_e32 v140, 63, v0
v_mad_u32_u24 v140, v140, 4, s9
s_mov_b32 s9, 0x9f34
v_and_b32_e32 v144, 63, v0
v_mad_u32_u24 v144, v144, 4, s9
s_mov_b32 s9, 0x9e34
v_and_b32_e32 v136, 63, v0
v_mad_u32_u24 v136, v136, 4, s9
s_mov_b32 s9, 0x9df4
v_and_b32_e32 v148, 15, v0
v_mad_u32_u24 v148, v148, 4, s9
buffer_load_dword v1, v1, s[68:71], 0 offen
buffer_load_dword v2, v2, s[68:71], 0 offen
buffer_load_dword v3, v3, s[68:71], 0 offen
buffer_load_dword v132, v132, s[68:71], 0 offen
buffer_load_dword v140, v140, s[68:71], 0 offen
buffer_load_dword v144, v144, s[68:71], 0 offen
buffer_load_dword v136, v136, s[68:71], 0 offen
buffer_load_dword v148, v148, s[68:71], 0 offen
s_mov_b32 null, 0xbf820bff
s_waitcnt lgkmcnt(0)
s_and_b32 s25, s25, 0xffff
s_and_b32 s27, s27, 0xffff
s_and_b32 s29, s29, 0xffff
s_and_b32 s73, s73, 0xffff
s_and_b32 s75, s75, 0xffff
s_bitcmp1_b32 s31, 6
s_cbranch_scc0 12
s_load_dwordx2 s[24:25], s[24:25], 0x0
s_load_dwordx2 s[26:27], s[26:27], 0x0
s_load_dwordx2 s[28:29], s[28:29], 0x0
s_load_dwordx2 s[72:73], s[72:73], 0x0
s_cmp_eq_u64 0, s[74:75]
s_cbranch_scc1 2
s_load_dwordx2 s[74:75], s[74:75], 0x0
s_waitcnt lgkmcnt(0)
s_bitcmp1_b32 s31, 13
s_cbranch_scc0 15
s_load_dwordx8 s[76:83], s[6:7], 0x68
s_load_dwordx2 s[84:85], s[6:7], 0x88
s_waitcnt lgkmcnt(0)
s_add_u32 s24, s24, s76
s_addc_u32 s25, s25, s77
s_add_u32 s26, s26, s78
s_addc_u32 s27, s27, s79
s_add_u32 s72, s72, s82
s_addc_u32 s73, s73, s83
s_cmp_eq_u64 0, s[74:75]
s_cselect_b64 s[84:85], 0, s[84:85]
s_add_u32 s74, s74, s84
s_addc_u32 s75, s75, s85
s_and_b32 s25, s25, 0xffff
s_and_b32 s27, s27, 0xffff
s_and_b32 s29, s29, 0xffff
s_and_b32 s73, s73, 0xffff
s_and_b32 s75, s75, 0xffff
v_cvt_f16_f32_e32 v125, s30
v_readfirstlane_b32 s30, v125
s_pack_ll_b32_b16 s30, s30, s30
s_getpc_b64 s[76:77]
s_mov_b32 s78, -1
s_mov_b32 s79, 0x31014000
s_mov_b32 s66, 0xa084
v_and_b32_e32 v126, 63, v0
v_mad_u32_u24 v126, v126, 4, s66
s_mov_b32 s66, 0xa054
v_and_b32_e32 v149, 3, v0
v_mad_u32_u24 v149, v149, 4, s66
s_mov_b32 s66, 0xa044
v_and_b32_e32 v150, 3, v0
v_mad_u32_u24 v150, v150, 4, s66
s_mov_b32 s66, 0xa034
v_and_b32_e32 v151, 3, v0
v_mad_u32_u24 v151, v151, 4, s66
buffer_load_dword v126, v126, s[76:79], 0 offen
buffer_load_dword v149, v149, s[76:79], 0 offen
buffer_load_dword v150, v150, s[76:79], 0 offen
buffer_load_dword v151, v151, s[76:79], 0 offen
s_mul_i32 s65, s10, s11
s_lshl_b32 s65, s65, 1
s_bitcmp1_b32 s31, 2
s_cselect_b32 s66, s13, s12
s_mul_i32 s9, s65, s66
s_cselect_b32 s66, s65, s9
s_cselect_b32 s65, s9, s65
s_mov_b32 s9, s66
s_mov_b64 s[80:81], s[74:75]
s_mov_b32 s82, 0x80000000
s_mov_b32 s83, 0x31014000
s_cmp_eq_u64 s[74:75], 0
s_cselect_b32 s83, 0, s83
v_and_b32_e32 v129, 7, v0
v_mad_u32_u24 v129, 4, v129, s4
v_cmp_lt_u32_e64 vcc, v129, s13
v_cndmask_b32_e32 v129, -1, v129, vcc
v_lshlrev_b32_e32 v129, 1, v129
buffer_load_short_d16 v127, v129, s[80:83], 0 offen
buffer_load_short_d16_hi v127, v129, s[80:83], 0 offen
v_bfe_u32 v129, v0, 2, 4
s_mul_i32 s67, s9, 4
v_xor_b32_dpp v131, v0, v0 quad_perm:[0,0,3,1] row_mask:0xf bank_mask:0xf
s_sub_u32 s81, s11, 1
s_bitcmp1_b32 s31, 1
s_cselect_b32 s81, s81, 0
s_cselect_b32 s80, -1, 1
s_sub_u32 s83, s10, 1
s_mul_i32 s83, s83, s11
s_bitcmp1_b32 s31, 0
s_cselect_b32 s83, s83, 0
s_cselect_b32 s82, -2, 2
s_add_u32 s81, s81, s83
v_mad_i32_i16 v130, v131, s80, s81
v_lshlrev_b32_e32 v133, 1, v130
v_mad_u32_u16 v133, v129, s65, v133
v_mad_u32_u16 v133, s9, s4, v133
v_cmp_lt_u32_e64 vcc, v131, s11
v_cndmask_b32_e32 v133, -2.0, v133, vcc
v_mad_i32_i24 v135, s11, s82, v133
v_cmp_lt_u32_e64 vcc, 1, s10
v_cndmask_b32_e32 v135, -2.0, v135, vcc
v_mad_i32_i24 v134, s11, s82, v135
v_cmp_lt_u32_e64 vcc, 2, s10
v_cndmask_b32_e32 v134, -2.0, v134, vcc
s_add_u32 s80, s12, 15
s_lshr_b32 s80, s80, 4
s_lshl_b32 s81, s80, 4
v_add_co_u32_e64 v129, vcc, v129, s81
s_getpc_b64 s[82:83]
s_sub_u32 s81, s80, 1
s_mul_i32 s81, s81, 4
s_add_u32 s81, s81, 32
s_add_u32 s82, s82, s81
s_addc_u32 s83, s83, 0
s_setpc_b64 s[82:83]
s_branch 1036
s_branch 962
s_branch 888
s_branch 814
s_branch 740
s_branch 666
s_branch 592
s_branch 518
s_branch 444
s_branch 370
s_branch 296
s_branch 222
s_branch 148
s_branch 74
s_branch 0
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v117, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v117, v138, s[84:87], 0 offen
buffer_load_short_d16 v118, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v118, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v119, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v119, v138, s[84:87], 0 offen
buffer_load_short_d16 v120, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v120, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v121, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v121, v138, s[84:87], 0 offen
buffer_load_short_d16 v122, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v122, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v123, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v123, v138, s[84:87], 0 offen
buffer_load_short_d16 v124, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v124, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v109, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v109, v138, s[84:87], 0 offen
buffer_load_short_d16 v110, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v110, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v111, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v111, v138, s[84:87], 0 offen
buffer_load_short_d16 v112, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v112, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v113, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v113, v138, s[84:87], 0 offen
buffer_load_short_d16 v114, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v114, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v115, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v115, v138, s[84:87], 0 offen
buffer_load_short_d16 v116, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v116, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v101, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v101, v138, s[84:87], 0 offen
buffer_load_short_d16 v102, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v102, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v103, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v103, v138, s[84:87], 0 offen
buffer_load_short_d16 v104, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v104, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v105, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v105, v138, s[84:87], 0 offen
buffer_load_short_d16 v106, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v106, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v107, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v107, v138, s[84:87], 0 offen
buffer_load_short_d16 v108, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v108, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v93, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v93, v138, s[84:87], 0 offen
buffer_load_short_d16 v94, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v94, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v95, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v95, v138, s[84:87], 0 offen
buffer_load_short_d16 v96, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v96, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v97, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v97, v138, s[84:87], 0 offen
buffer_load_short_d16 v98, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v98, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v99, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v99, v138, s[84:87], 0 offen
buffer_load_short_d16 v100, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v100, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v85, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v85, v138, s[84:87], 0 offen
buffer_load_short_d16 v86, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v86, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v87, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v87, v138, s[84:87], 0 offen
buffer_load_short_d16 v88, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v88, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v89, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v89, v138, s[84:87], 0 offen
buffer_load_short_d16 v90, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v90, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v91, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v91, v138, s[84:87], 0 offen
buffer_load_short_d16 v92, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v92, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v77, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v77, v138, s[84:87], 0 offen
buffer_load_short_d16 v78, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v78, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v79, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v79, v138, s[84:87], 0 offen
buffer_load_short_d16 v80, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v80, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v81, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v81, v138, s[84:87], 0 offen
buffer_load_short_d16 v82, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v82, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v83, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v83, v138, s[84:87], 0 offen
buffer_load_short_d16 v84, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v84, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v69, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v69, v138, s[84:87], 0 offen
buffer_load_short_d16 v70, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v70, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v71, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v71, v138, s[84:87], 0 offen
buffer_load_short_d16 v72, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v72, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v73, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v73, v138, s[84:87], 0 offen
buffer_load_short_d16 v74, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v74, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v75, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v75, v138, s[84:87], 0 offen
buffer_load_short_d16 v76, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v76, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v61, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v61, v138, s[84:87], 0 offen
buffer_load_short_d16 v62, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v62, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v63, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v63, v138, s[84:87], 0 offen
buffer_load_short_d16 v64, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v64, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v65, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v65, v138, s[84:87], 0 offen
buffer_load_short_d16 v66, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v66, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v67, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v67, v138, s[84:87], 0 offen
buffer_load_short_d16 v68, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v68, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v53, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v53, v138, s[84:87], 0 offen
buffer_load_short_d16 v54, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v54, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v55, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v55, v138, s[84:87], 0 offen
buffer_load_short_d16 v56, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v56, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v57, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v57, v138, s[84:87], 0 offen
buffer_load_short_d16 v58, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v58, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v59, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v59, v138, s[84:87], 0 offen
buffer_load_short_d16 v60, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v60, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v45, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v45, v138, s[84:87], 0 offen
buffer_load_short_d16 v46, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v46, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v47, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v47, v138, s[84:87], 0 offen
buffer_load_short_d16 v48, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v48, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v49, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v49, v138, s[84:87], 0 offen
buffer_load_short_d16 v50, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v50, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v51, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v51, v138, s[84:87], 0 offen
buffer_load_short_d16 v52, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v52, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v37, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v37, v138, s[84:87], 0 offen
buffer_load_short_d16 v38, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v38, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v39, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v39, v138, s[84:87], 0 offen
buffer_load_short_d16 v40, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v40, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v41, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v41, v138, s[84:87], 0 offen
buffer_load_short_d16 v42, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v42, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v43, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v43, v138, s[84:87], 0 offen
buffer_load_short_d16 v44, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v44, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v29, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v29, v138, s[84:87], 0 offen
buffer_load_short_d16 v30, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v30, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v31, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v31, v138, s[84:87], 0 offen
buffer_load_short_d16 v32, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v32, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v33, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v33, v138, s[84:87], 0 offen
buffer_load_short_d16 v34, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v34, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v35, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v35, v138, s[84:87], 0 offen
buffer_load_short_d16 v36, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v36, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v21, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v21, v138, s[84:87], 0 offen
buffer_load_short_d16 v22, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v22, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v23, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v23, v138, s[84:87], 0 offen
buffer_load_short_d16 v24, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v24, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v25, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v25, v138, s[84:87], 0 offen
buffer_load_short_d16 v26, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v26, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v27, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v27, v138, s[84:87], 0 offen
buffer_load_short_d16 v28, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v28, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v13, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v13, v138, s[84:87], 0 offen
buffer_load_short_d16 v14, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v14, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v15, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v15, v138, s[84:87], 0 offen
buffer_load_short_d16 v16, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v16, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v17, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v17, v138, s[84:87], 0 offen
buffer_load_short_d16 v18, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v18, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v19, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v19, v138, s[84:87], 0 offen
buffer_load_short_d16 v20, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v20, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
v_sub_co_u32_e64 v129, vcc, v129, 16
v_cmp_ge_u32_e64 vcc, v129, s12
v_cndmask_b32_e64 v137, v133, -1, vcc
v_cndmask_b32_e64 v138, v134, -1, vcc
v_cndmask_b32_e64 v139, v135, -1, vcc
v_readfirstlane_b32 s84, v129
s_mul_hi_u32 s85, s84, s65
s_mul_i32 s84, s84, s65
s_add_u32 s84, s84, s72
s_addc_u32 s85, s85, s73
s_mov_b32 s86, 0x80000000
s_sub_u32 s88, s13, 1
s_sub_u32 s88, s88, s4
s_cselect_b32 s87, 0, 0x31014000
buffer_load_short_d16 v5, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v5, v138, s[84:87], 0 offen
buffer_load_short_d16 v6, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v6, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v7, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v7, v138, s[84:87], 0 offen
buffer_load_short_d16 v8, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v8, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v9, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v9, v138, s[84:87], 0 offen
buffer_load_short_d16 v10, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v10, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
buffer_load_short_d16 v11, v137, s[84:87], 0 offen
buffer_load_short_d16_hi v11, v138, s[84:87], 0 offen
buffer_load_short_d16 v12, v139, s[84:87], 0 offen
buffer_load_short_d16_hi v12, v139, s[84:87], 0 offen
v_nop
s_add_u32 s84, s84, s67
s_addc_u32 s85, s85, 0
s_sub_u32 s88, s88, 4
s_cselect_b32 s87, 0, s87
s_getpc_b64 s[82:83]
s_sub_u32 s81, s80, 1
s_mul_i32 s81, s81, 4
s_add_u32 s81, s81, 32
s_add_u32 s82, s82, s81
s_addc_u32 s83, s83, 0
s_setpc_b64 s[82:83]
s_branch 1260
s_branch 1170
s_branch 1080
s_branch 990
s_branch 900
s_branch 810
s_branch 720
s_branch 630
s_branch 540
s_branch 450
s_branch 360
s_branch 270
s_branch 180
s_branch 90
s_branch 0
s_waitcnt 0xff7f
v_pk_fma_f16 v118, v118, s5, v117 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v120, v120, s5, v119 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v122, v122, s5, v121 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v124, v124, s5, v123 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v118, v118, v117 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v120, v120, v119 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v122, v122, v121 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v124, v124, v123 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x78eb2afa
.long 0xff00b175
.long 0x78ef2afa
.long 0xff00b177
.long 0x78f32afa
.long 0xff00b179
.long 0x78f72afa
.long 0xff00b17b
.long 0x78ed2afa
.long 0xff00b176
.long 0x78f12afa
.long 0xff00b178
.long 0x78f52afa
.long 0xff00b17a
.long 0x78f92afa
.long 0xff00b17c
.long 0x78eb2afa
.long 0xff004e75
.long 0x78ef2afa
.long 0xff004e77
.long 0x78f32afa
.long 0xff004e79
.long 0x78f72afa
.long 0xff004e7b
.long 0x78ed2afa
.long 0xff004e76
.long 0x78f12afa
.long 0xff004e78
.long 0x78f52afa
.long 0xff004e7a
.long 0x78f92afa
.long 0xff004e7c
v_pk_mul_f16 v117, v117, v150
v_pk_mul_f16 v119, v119, v150
v_pk_mul_f16 v121, v121, v150
v_pk_mul_f16 v123, v123, v150
v_pk_mul_f16 v118, v118, v151
v_pk_mul_f16 v120, v120, v151
v_pk_mul_f16 v122, v122, v151
v_pk_mul_f16 v124, v124, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[117:120]
ds_write_b128 v156, v[121:124] offset:4160
ds_read_b32 v117, v160
ds_read_b32 v118, v160 offset:128
ds_read_b32 v119, v160 offset:256
ds_read_b32 v120, v160 offset:384
ds_read_b32 v121, v160 offset:512
ds_read_b32 v122, v160 offset:640
ds_read_b32 v123, v160 offset:768
ds_read_b32 v124, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v110, v110, s5, v109 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v112, v112, s5, v111 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v114, v114, s5, v113 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v116, v116, s5, v115 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v110, v110, v109 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v112, v112, v111 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v114, v114, v113 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v116, v116, v115 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x78db2afa
.long 0xff00b16d
.long 0x78df2afa
.long 0xff00b16f
.long 0x78e32afa
.long 0xff00b171
.long 0x78e72afa
.long 0xff00b173
.long 0x78dd2afa
.long 0xff00b16e
.long 0x78e12afa
.long 0xff00b170
.long 0x78e52afa
.long 0xff00b172
.long 0x78e92afa
.long 0xff00b174
.long 0x78db2afa
.long 0xff004e6d
.long 0x78df2afa
.long 0xff004e6f
.long 0x78e32afa
.long 0xff004e71
.long 0x78e72afa
.long 0xff004e73
.long 0x78dd2afa
.long 0xff004e6e
.long 0x78e12afa
.long 0xff004e70
.long 0x78e52afa
.long 0xff004e72
.long 0x78e92afa
.long 0xff004e74
v_pk_mul_f16 v109, v109, v150
v_pk_mul_f16 v111, v111, v150
v_pk_mul_f16 v113, v113, v150
v_pk_mul_f16 v115, v115, v150
v_pk_mul_f16 v110, v110, v151
v_pk_mul_f16 v112, v112, v151
v_pk_mul_f16 v114, v114, v151
v_pk_mul_f16 v116, v116, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[109:112]
ds_write_b128 v156, v[113:116] offset:4160
ds_read_b32 v109, v160
ds_read_b32 v110, v160 offset:128
ds_read_b32 v111, v160 offset:256
ds_read_b32 v112, v160 offset:384
ds_read_b32 v113, v160 offset:512
ds_read_b32 v114, v160 offset:640
ds_read_b32 v115, v160 offset:768
ds_read_b32 v116, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v102, v102, s5, v101 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v104, v104, s5, v103 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v106, v106, s5, v105 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v108, v108, s5, v107 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v102, v102, v101 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v104, v104, v103 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v106, v106, v105 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v108, v108, v107 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x78cb2afa
.long 0xff00b165
.long 0x78cf2afa
.long 0xff00b167
.long 0x78d32afa
.long 0xff00b169
.long 0x78d72afa
.long 0xff00b16b
.long 0x78cd2afa
.long 0xff00b166
.long 0x78d12afa
.long 0xff00b168
.long 0x78d52afa
.long 0xff00b16a
.long 0x78d92afa
.long 0xff00b16c
.long 0x78cb2afa
.long 0xff004e65
.long 0x78cf2afa
.long 0xff004e67
.long 0x78d32afa
.long 0xff004e69
.long 0x78d72afa
.long 0xff004e6b
.long 0x78cd2afa
.long 0xff004e66
.long 0x78d12afa
.long 0xff004e68
.long 0x78d52afa
.long 0xff004e6a
.long 0x78d92afa
.long 0xff004e6c
v_pk_mul_f16 v101, v101, v150
v_pk_mul_f16 v103, v103, v150
v_pk_mul_f16 v105, v105, v150
v_pk_mul_f16 v107, v107, v150
v_pk_mul_f16 v102, v102, v151
v_pk_mul_f16 v104, v104, v151
v_pk_mul_f16 v106, v106, v151
v_pk_mul_f16 v108, v108, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[101:104]
ds_write_b128 v156, v[105:108] offset:4160
ds_read_b32 v101, v160
ds_read_b32 v102, v160 offset:128
ds_read_b32 v103, v160 offset:256
ds_read_b32 v104, v160 offset:384
ds_read_b32 v105, v160 offset:512
ds_read_b32 v106, v160 offset:640
ds_read_b32 v107, v160 offset:768
ds_read_b32 v108, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v94, v94, s5, v93 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v96, v96, s5, v95 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v98, v98, s5, v97 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v100, v100, s5, v99 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v94, v94, v93 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v96, v96, v95 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v98, v98, v97 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v100, v100, v99 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x78bb2afa
.long 0xff00b15d
.long 0x78bf2afa
.long 0xff00b15f
.long 0x78c32afa
.long 0xff00b161
.long 0x78c72afa
.long 0xff00b163
.long 0x78bd2afa
.long 0xff00b15e
.long 0x78c12afa
.long 0xff00b160
.long 0x78c52afa
.long 0xff00b162
.long 0x78c92afa
.long 0xff00b164
.long 0x78bb2afa
.long 0xff004e5d
.long 0x78bf2afa
.long 0xff004e5f
.long 0x78c32afa
.long 0xff004e61
.long 0x78c72afa
.long 0xff004e63
.long 0x78bd2afa
.long 0xff004e5e
.long 0x78c12afa
.long 0xff004e60
.long 0x78c52afa
.long 0xff004e62
.long 0x78c92afa
.long 0xff004e64
v_pk_mul_f16 v93, v93, v150
v_pk_mul_f16 v95, v95, v150
v_pk_mul_f16 v97, v97, v150
v_pk_mul_f16 v99, v99, v150
v_pk_mul_f16 v94, v94, v151
v_pk_mul_f16 v96, v96, v151
v_pk_mul_f16 v98, v98, v151
v_pk_mul_f16 v100, v100, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[93:96]
ds_write_b128 v156, v[97:100] offset:4160
ds_read_b32 v93, v160
ds_read_b32 v94, v160 offset:128
ds_read_b32 v95, v160 offset:256
ds_read_b32 v96, v160 offset:384
ds_read_b32 v97, v160 offset:512
ds_read_b32 v98, v160 offset:640
ds_read_b32 v99, v160 offset:768
ds_read_b32 v100, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v86, v86, s5, v85 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v88, v88, s5, v87 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v90, v90, s5, v89 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v92, v92, s5, v91 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v86, v86, v85 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v88, v88, v87 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v90, v90, v89 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v92, v92, v91 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x78ab2afa
.long 0xff00b155
.long 0x78af2afa
.long 0xff00b157
.long 0x78b32afa
.long 0xff00b159
.long 0x78b72afa
.long 0xff00b15b
.long 0x78ad2afa
.long 0xff00b156
.long 0x78b12afa
.long 0xff00b158
.long 0x78b52afa
.long 0xff00b15a
.long 0x78b92afa
.long 0xff00b15c
.long 0x78ab2afa
.long 0xff004e55
.long 0x78af2afa
.long 0xff004e57
.long 0x78b32afa
.long 0xff004e59
.long 0x78b72afa
.long 0xff004e5b
.long 0x78ad2afa
.long 0xff004e56
.long 0x78b12afa
.long 0xff004e58
.long 0x78b52afa
.long 0xff004e5a
.long 0x78b92afa
.long 0xff004e5c
v_pk_mul_f16 v85, v85, v150
v_pk_mul_f16 v87, v87, v150
v_pk_mul_f16 v89, v89, v150
v_pk_mul_f16 v91, v91, v150
v_pk_mul_f16 v86, v86, v151
v_pk_mul_f16 v88, v88, v151
v_pk_mul_f16 v90, v90, v151
v_pk_mul_f16 v92, v92, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[85:88]
ds_write_b128 v156, v[89:92] offset:4160
ds_read_b32 v85, v160
ds_read_b32 v86, v160 offset:128
ds_read_b32 v87, v160 offset:256
ds_read_b32 v88, v160 offset:384
ds_read_b32 v89, v160 offset:512
ds_read_b32 v90, v160 offset:640
ds_read_b32 v91, v160 offset:768
ds_read_b32 v92, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v78, v78, s5, v77 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v80, v80, s5, v79 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v82, v82, s5, v81 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v84, v84, s5, v83 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v78, v78, v77 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v80, v80, v79 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v82, v82, v81 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v84, v84, v83 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x789b2afa
.long 0xff00b14d
.long 0x789f2afa
.long 0xff00b14f
.long 0x78a32afa
.long 0xff00b151
.long 0x78a72afa
.long 0xff00b153
.long 0x789d2afa
.long 0xff00b14e
.long 0x78a12afa
.long 0xff00b150
.long 0x78a52afa
.long 0xff00b152
.long 0x78a92afa
.long 0xff00b154
.long 0x789b2afa
.long 0xff004e4d
.long 0x789f2afa
.long 0xff004e4f
.long 0x78a32afa
.long 0xff004e51
.long 0x78a72afa
.long 0xff004e53
.long 0x789d2afa
.long 0xff004e4e
.long 0x78a12afa
.long 0xff004e50
.long 0x78a52afa
.long 0xff004e52
.long 0x78a92afa
.long 0xff004e54
v_pk_mul_f16 v77, v77, v150
v_pk_mul_f16 v79, v79, v150
v_pk_mul_f16 v81, v81, v150
v_pk_mul_f16 v83, v83, v150
v_pk_mul_f16 v78, v78, v151
v_pk_mul_f16 v80, v80, v151
v_pk_mul_f16 v82, v82, v151
v_pk_mul_f16 v84, v84, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[77:80]
ds_write_b128 v156, v[81:84] offset:4160
ds_read_b32 v77, v160
ds_read_b32 v78, v160 offset:128
ds_read_b32 v79, v160 offset:256
ds_read_b32 v80, v160 offset:384
ds_read_b32 v81, v160 offset:512
ds_read_b32 v82, v160 offset:640
ds_read_b32 v83, v160 offset:768
ds_read_b32 v84, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v70, v70, s5, v69 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v72, v72, s5, v71 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v74, v74, s5, v73 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v76, v76, s5, v75 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v70, v70, v69 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v72, v72, v71 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v74, v74, v73 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v76, v76, v75 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x788b2afa
.long 0xff00b145
.long 0x788f2afa
.long 0xff00b147
.long 0x78932afa
.long 0xff00b149
.long 0x78972afa
.long 0xff00b14b
.long 0x788d2afa
.long 0xff00b146
.long 0x78912afa
.long 0xff00b148
.long 0x78952afa
.long 0xff00b14a
.long 0x78992afa
.long 0xff00b14c
.long 0x788b2afa
.long 0xff004e45
.long 0x788f2afa
.long 0xff004e47
.long 0x78932afa
.long 0xff004e49
.long 0x78972afa
.long 0xff004e4b
.long 0x788d2afa
.long 0xff004e46
.long 0x78912afa
.long 0xff004e48
.long 0x78952afa
.long 0xff004e4a
.long 0x78992afa
.long 0xff004e4c
v_pk_mul_f16 v69, v69, v150
v_pk_mul_f16 v71, v71, v150
v_pk_mul_f16 v73, v73, v150
v_pk_mul_f16 v75, v75, v150
v_pk_mul_f16 v70, v70, v151
v_pk_mul_f16 v72, v72, v151
v_pk_mul_f16 v74, v74, v151
v_pk_mul_f16 v76, v76, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[69:72]
ds_write_b128 v156, v[73:76] offset:4160
ds_read_b32 v69, v160
ds_read_b32 v70, v160 offset:128
ds_read_b32 v71, v160 offset:256
ds_read_b32 v72, v160 offset:384
ds_read_b32 v73, v160 offset:512
ds_read_b32 v74, v160 offset:640
ds_read_b32 v75, v160 offset:768
ds_read_b32 v76, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v62, v62, s5, v61 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v64, v64, s5, v63 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v66, v66, s5, v65 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v68, v68, s5, v67 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v62, v62, v61 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v64, v64, v63 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v66, v66, v65 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v68, v68, v67 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x787b2afa
.long 0xff00b13d
.long 0x787f2afa
.long 0xff00b13f
.long 0x78832afa
.long 0xff00b141
.long 0x78872afa
.long 0xff00b143
.long 0x787d2afa
.long 0xff00b13e
.long 0x78812afa
.long 0xff00b140
.long 0x78852afa
.long 0xff00b142
.long 0x78892afa
.long 0xff00b144
.long 0x787b2afa
.long 0xff004e3d
.long 0x787f2afa
.long 0xff004e3f
.long 0x78832afa
.long 0xff004e41
.long 0x78872afa
.long 0xff004e43
.long 0x787d2afa
.long 0xff004e3e
.long 0x78812afa
.long 0xff004e40
.long 0x78852afa
.long 0xff004e42
.long 0x78892afa
.long 0xff004e44
v_pk_mul_f16 v61, v61, v150
v_pk_mul_f16 v63, v63, v150
v_pk_mul_f16 v65, v65, v150
v_pk_mul_f16 v67, v67, v150
v_pk_mul_f16 v62, v62, v151
v_pk_mul_f16 v64, v64, v151
v_pk_mul_f16 v66, v66, v151
v_pk_mul_f16 v68, v68, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[61:64]
ds_write_b128 v156, v[65:68] offset:4160
ds_read_b32 v61, v160
ds_read_b32 v62, v160 offset:128
ds_read_b32 v63, v160 offset:256
ds_read_b32 v64, v160 offset:384
ds_read_b32 v65, v160 offset:512
ds_read_b32 v66, v160 offset:640
ds_read_b32 v67, v160 offset:768
ds_read_b32 v68, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v54, v54, s5, v53 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v56, v56, s5, v55 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v58, v58, s5, v57 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v60, v60, s5, v59 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v54, v54, v53 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v56, v56, v55 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v58, v58, v57 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v60, v60, v59 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x786b2afa
.long 0xff00b135
.long 0x786f2afa
.long 0xff00b137
.long 0x78732afa
.long 0xff00b139
.long 0x78772afa
.long 0xff00b13b
.long 0x786d2afa
.long 0xff00b136
.long 0x78712afa
.long 0xff00b138
.long 0x78752afa
.long 0xff00b13a
.long 0x78792afa
.long 0xff00b13c
.long 0x786b2afa
.long 0xff004e35
.long 0x786f2afa
.long 0xff004e37
.long 0x78732afa
.long 0xff004e39
.long 0x78772afa
.long 0xff004e3b
.long 0x786d2afa
.long 0xff004e36
.long 0x78712afa
.long 0xff004e38
.long 0x78752afa
.long 0xff004e3a
.long 0x78792afa
.long 0xff004e3c
v_pk_mul_f16 v53, v53, v150
v_pk_mul_f16 v55, v55, v150
v_pk_mul_f16 v57, v57, v150
v_pk_mul_f16 v59, v59, v150
v_pk_mul_f16 v54, v54, v151
v_pk_mul_f16 v56, v56, v151
v_pk_mul_f16 v58, v58, v151
v_pk_mul_f16 v60, v60, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[53:56]
ds_write_b128 v156, v[57:60] offset:4160
ds_read_b32 v53, v160
ds_read_b32 v54, v160 offset:128
ds_read_b32 v55, v160 offset:256
ds_read_b32 v56, v160 offset:384
ds_read_b32 v57, v160 offset:512
ds_read_b32 v58, v160 offset:640
ds_read_b32 v59, v160 offset:768
ds_read_b32 v60, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v46, v46, s5, v45 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v48, v48, s5, v47 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v50, v50, s5, v49 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v52, v52, s5, v51 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v46, v46, v45 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v48, v48, v47 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v50, v50, v49 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v52, v52, v51 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x785b2afa
.long 0xff00b12d
.long 0x785f2afa
.long 0xff00b12f
.long 0x78632afa
.long 0xff00b131
.long 0x78672afa
.long 0xff00b133
.long 0x785d2afa
.long 0xff00b12e
.long 0x78612afa
.long 0xff00b130
.long 0x78652afa
.long 0xff00b132
.long 0x78692afa
.long 0xff00b134
.long 0x785b2afa
.long 0xff004e2d
.long 0x785f2afa
.long 0xff004e2f
.long 0x78632afa
.long 0xff004e31
.long 0x78672afa
.long 0xff004e33
.long 0x785d2afa
.long 0xff004e2e
.long 0x78612afa
.long 0xff004e30
.long 0x78652afa
.long 0xff004e32
.long 0x78692afa
.long 0xff004e34
v_pk_mul_f16 v45, v45, v150
v_pk_mul_f16 v47, v47, v150
v_pk_mul_f16 v49, v49, v150
v_pk_mul_f16 v51, v51, v150
v_pk_mul_f16 v46, v46, v151
v_pk_mul_f16 v48, v48, v151
v_pk_mul_f16 v50, v50, v151
v_pk_mul_f16 v52, v52, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[45:48]
ds_write_b128 v156, v[49:52] offset:4160
ds_read_b32 v45, v160
ds_read_b32 v46, v160 offset:128
ds_read_b32 v47, v160 offset:256
ds_read_b32 v48, v160 offset:384
ds_read_b32 v49, v160 offset:512
ds_read_b32 v50, v160 offset:640
ds_read_b32 v51, v160 offset:768
ds_read_b32 v52, v160 offset:896
s_waitcnt 0xff7f
v_pk_fma_f16 v38, v38, s5, v37 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v40, v40, s5, v39 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v42, v42, s5, v41 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v44, v44, s5, v43 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v38, v38, v37 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v40, v40, v39 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v42, v42, v41 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v44, v44, v43 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x784b2afa
.long 0xff00b125
.long 0x784f2afa
.long 0xff00b127
.long 0x78532afa
.long 0xff00b129
.long 0x78572afa
.long 0xff00b12b
.long 0x784d2afa
.long 0xff00b126
.long 0x78512afa
.long 0xff00b128
.long 0x78552afa
.long 0xff00b12a
.long 0x78592afa
.long 0xff00b12c
.long 0x784b2afa
.long 0xff004e25
.long 0x784f2afa
.long 0xff004e27
.long 0x78532afa
.long 0xff004e29
.long 0x78572afa
.long 0xff004e2b
.long 0x784d2afa
.long 0xff004e26
.long 0x78512afa
.long 0xff004e28
.long 0x78552afa
.long 0xff004e2a
.long 0x78592afa
.long 0xff004e2c
v_pk_mul_f16 v37, v37, v150
v_pk_mul_f16 v39, v39, v150
v_pk_mul_f16 v41, v41, v150
v_pk_mul_f16 v43, v43, v150
v_pk_mul_f16 v38, v38, v151
v_pk_mul_f16 v40, v40, v151
v_pk_mul_f16 v42, v42, v151
v_pk_mul_f16 v44, v44, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[37:40]
ds_write_b128 v156, v[41:44] offset:4160
ds_read_b32 v37, v160
ds_read_b32 v38, v160 offset:128
ds_read_b32 v39, v160 offset:256
ds_read_b32 v40, v160 offset:384
ds_read_b32 v41, v160 offset:512
ds_read_b32 v42, v160 offset:640
ds_read_b32 v43, v160 offset:768
ds_read_b32 v44, v160 offset:896
s_waitcnt vmcnt(48)
v_pk_fma_f16 v30, v30, s5, v29 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v32, v32, s5, v31 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v34, v34, s5, v33 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v36, v36, s5, v35 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v30, v30, v29 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v32, v32, v31 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v34, v34, v33 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v36, v36, v35 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x783b2afa
.long 0xff00b11d
.long 0x783f2afa
.long 0xff00b11f
.long 0x78432afa
.long 0xff00b121
.long 0x78472afa
.long 0xff00b123
.long 0x783d2afa
.long 0xff00b11e
.long 0x78412afa
.long 0xff00b120
.long 0x78452afa
.long 0xff00b122
.long 0x78492afa
.long 0xff00b124
.long 0x783b2afa
.long 0xff004e1d
.long 0x783f2afa
.long 0xff004e1f
.long 0x78432afa
.long 0xff004e21
.long 0x78472afa
.long 0xff004e23
.long 0x783d2afa
.long 0xff004e1e
.long 0x78412afa
.long 0xff004e20
.long 0x78452afa
.long 0xff004e22
.long 0x78492afa
.long 0xff004e24
v_pk_mul_f16 v29, v29, v150
v_pk_mul_f16 v31, v31, v150
v_pk_mul_f16 v33, v33, v150
v_pk_mul_f16 v35, v35, v150
v_pk_mul_f16 v30, v30, v151
v_pk_mul_f16 v32, v32, v151
v_pk_mul_f16 v34, v34, v151
v_pk_mul_f16 v36, v36, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[29:32]
ds_write_b128 v156, v[33:36] offset:4160
ds_read_b32 v29, v160
ds_read_b32 v30, v160 offset:128
ds_read_b32 v31, v160 offset:256
ds_read_b32 v32, v160 offset:384
ds_read_b32 v33, v160 offset:512
ds_read_b32 v34, v160 offset:640
ds_read_b32 v35, v160 offset:768
ds_read_b32 v36, v160 offset:896
s_waitcnt vmcnt(32)
v_pk_fma_f16 v22, v22, s5, v21 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v24, v24, s5, v23 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v26, v26, s5, v25 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v28, v28, s5, v27 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v22, v22, v21 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v24, v24, v23 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v26, v26, v25 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v28, v28, v27 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x782b2afa
.long 0xff00b115
.long 0x782f2afa
.long 0xff00b117
.long 0x78332afa
.long 0xff00b119
.long 0x78372afa
.long 0xff00b11b
.long 0x782d2afa
.long 0xff00b116
.long 0x78312afa
.long 0xff00b118
.long 0x78352afa
.long 0xff00b11a
.long 0x78392afa
.long 0xff00b11c
.long 0x782b2afa
.long 0xff004e15
.long 0x782f2afa
.long 0xff004e17
.long 0x78332afa
.long 0xff004e19
.long 0x78372afa
.long 0xff004e1b
.long 0x782d2afa
.long 0xff004e16
.long 0x78312afa
.long 0xff004e18
.long 0x78352afa
.long 0xff004e1a
.long 0x78392afa
.long 0xff004e1c
v_pk_mul_f16 v21, v21, v150
v_pk_mul_f16 v23, v23, v150
v_pk_mul_f16 v25, v25, v150
v_pk_mul_f16 v27, v27, v150
v_pk_mul_f16 v22, v22, v151
v_pk_mul_f16 v24, v24, v151
v_pk_mul_f16 v26, v26, v151
v_pk_mul_f16 v28, v28, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[21:24]
ds_write_b128 v156, v[25:28] offset:4160
ds_read_b32 v21, v160
ds_read_b32 v22, v160 offset:128
ds_read_b32 v23, v160 offset:256
ds_read_b32 v24, v160 offset:384
ds_read_b32 v25, v160 offset:512
ds_read_b32 v26, v160 offset:640
ds_read_b32 v27, v160 offset:768
ds_read_b32 v28, v160 offset:896
s_waitcnt vmcnt(16)
v_pk_fma_f16 v14, v14, s5, v13 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v16, v16, s5, v15 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v18, v18, s5, v17 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v20, v20, s5, v19 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v14, v14, v13 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v16, v16, v15 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v18, v18, v17 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v20, v20, v19 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x781b2afa
.long 0xff00b10d
.long 0x781f2afa
.long 0xff00b10f
.long 0x78232afa
.long 0xff00b111
.long 0x78272afa
.long 0xff00b113
.long 0x781d2afa
.long 0xff00b10e
.long 0x78212afa
.long 0xff00b110
.long 0x78252afa
.long 0xff00b112
.long 0x78292afa
.long 0xff00b114
.long 0x781b2afa
.long 0xff004e0d
.long 0x781f2afa
.long 0xff004e0f
.long 0x78232afa
.long 0xff004e11
.long 0x78272afa
.long 0xff004e13
.long 0x781d2afa
.long 0xff004e0e
.long 0x78212afa
.long 0xff004e10
.long 0x78252afa
.long 0xff004e12
.long 0x78292afa
.long 0xff004e14
v_pk_mul_f16 v13, v13, v150
v_pk_mul_f16 v15, v15, v150
v_pk_mul_f16 v17, v17, v150
v_pk_mul_f16 v19, v19, v150
v_pk_mul_f16 v14, v14, v151
v_pk_mul_f16 v16, v16, v151
v_pk_mul_f16 v18, v18, v151
v_pk_mul_f16 v20, v20, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[13:16]
ds_write_b128 v156, v[17:20] offset:4160
ds_read_b32 v13, v160
ds_read_b32 v14, v160 offset:128
ds_read_b32 v15, v160 offset:256
ds_read_b32 v16, v160 offset:384
ds_read_b32 v17, v160 offset:512
ds_read_b32 v18, v160 offset:640
ds_read_b32 v19, v160 offset:768
ds_read_b32 v20, v160 offset:896
s_waitcnt vmcnt(0)
v_pk_fma_f16 v6, v6, s5, v5 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v8, v8, s5, v7 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v10, v10, s5, v9 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_fma_f16 v12, v12, s5, v11 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_pk_add_f16 v6, v6, v5 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v8, v8, v7 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v10, v10, v9 op_sel:[0,1] op_sel_hi:[1,0]
v_pk_add_f16 v12, v12, v11 op_sel:[0,1] op_sel_hi:[1,0]
.long 0x780b2afa
.long 0xff00b105
.long 0x780f2afa
.long 0xff00b107
.long 0x78132afa
.long 0xff00b109
.long 0x78172afa
.long 0xff00b10b
.long 0x780d2afa
.long 0xff00b106
.long 0x78112afa
.long 0xff00b108
.long 0x78152afa
.long 0xff00b10a
.long 0x78192afa
.long 0xff00b10c
.long 0x780b2afa
.long 0xff004e05
.long 0x780f2afa
.long 0xff004e07
.long 0x78132afa
.long 0xff004e09
.long 0x78172afa
.long 0xff004e0b
.long 0x780d2afa
.long 0xff004e06
.long 0x78112afa
.long 0xff004e08
.long 0x78152afa
.long 0xff004e0a
.long 0x78192afa
.long 0xff004e0c
v_pk_mul_f16 v5, v5, v150
v_pk_mul_f16 v7, v7, v150
v_pk_mul_f16 v9, v9, v150
v_pk_mul_f16 v11, v11, v150
v_pk_mul_f16 v6, v6, v151
v_pk_mul_f16 v8, v8, v151
v_pk_mul_f16 v10, v10, v151
v_pk_mul_f16 v12, v12, v151
v_mul_u32_u24_e32 v156, 16, v0
v_mad_u32_u24 v160, 0x400, s4, v126
ds_write_b128 v156, v[5:8]
ds_write_b128 v156, v[9:12] offset:4160
ds_read_b32 v5, v160
ds_read_b32 v6, v160 offset:128
ds_read_b32 v7, v160 offset:256
ds_read_b32 v8, v160 offset:384
ds_read_b32 v9, v160 offset:512
ds_read_b32 v10, v160 offset:640
ds_read_b32 v11, v160 offset:768
ds_read_b32 v12, v160 offset:896
s_waitcnt vmcnt(0) expcnt(0) lgkmcnt(0)
v_readlane_b32 s61, v127, 0
v_readlane_b32 s62, v127, 1
v_readlane_b32 s63, v127, 2
v_readlane_b32 s64, v127, 3
v_mad_u32_u24 v136, s4, 0x100, v136
v_mad_u32_u24 v148, s4, 0x100, v148
v_mad_u32_u24 v132, s4, 0x200, v132
s_mul_i32 s9, s20, s4
s_add_u32 s26, s26, s9
s_addc_u32 s27, s27, 0
v_and_b32_e32 v196, 3, v0
v_lshrrev_b32_e32 v200, 2, v0
v_mad_i32_i24 v152, v200, 2, v196
v_mul_i32_i24_e64 v152, v152, 2
v_and_b32_e32 v156, 63, v0
v_mul_i32_i24_e64 v156, v156, 2
v_mad_i32_i24 v160, 64, 2, v156
s_min_u32 s9, s24, 2.0
s_cmp_eq_u32 s25, 0
s_cselect_b32 s9, s9, 2.0
s_sub_u32 s24, s24, s9
s_subb_u32 s25, s25, 0
v_add_co_u32_e64 v152, vcc, v152, s9
s_min_u32 s9, s26, 2.0
s_cmp_eq_u32 s27, 0
s_cselect_b32 s9, s9, 2.0
s_sub_u32 s26, s26, s9
s_subb_u32 s27, s27, 0
v_add_co_u32_e64 v156, vcc, v156, s9
v_add_co_u32_e64 v160, vcc, v160, s9
s_mov_b32 s60, 0
v_lshlrev_b32_e32 v215, 2, v0
v_add_co_u32_e64 v215, vcc, 0xc400, v215
v_cmp_ge_u32_e32 vcc, 12, v0
s_cbranch_vccz 4
v_mov_b32_e32 v214, 0
v_cndmask_b32_e32 v215, -1, v215, vcc
ds_write_b32 v215, v214
s_add_u32 s70, s12, 1
s_and_b32 s70, s70, -2
s_mul_i32 s68, s16, s70
s_mul_hi_u32 s69, s16, s70
s_add_u32 s24, s24, s68
s_addc_u32 s25, s25, s69
s_lshl_b32 s16, s16, 1
s_sub_u32 s68, s14, s8
s_mul_i32 s68, s68, 0x100
s_sub_u32 s28, s28, s68
s_subb_u32 s29, s29, 0
s_mov_b32 s9, 0x1500
s_mov_b32 s10, 0x1500
s_mov_b32 s11, 0x1500
s_sub_u32 s15, s15, 1
s_sub_u32 s15, s15, s8
s_cbranch_scc1 7301
s_add_u32 s65, s15, s14
s_add_u32 s66, s15, s14
s_mov_b64 s[56:57], s[28:29]
s_mov_b32 s58, -1
s_mov_b32 s59, 0x31014000
s_sub_u32 s68, 6, 1
v_lshlrev_b32_e32 v196, 2, v0
s_mul_i32 s69, s14, 0x100
s_add_u32 m0, s11, 0xc438
s_add_u32 s56, s56, s69
s_addc_u32 s57, s57, 0
v_and_b32_e64 v196, v196, 0xff
buffer_load_dword v196, v196, s[56:59], 0 offen lds
s_sub_u32 s11, s11, 0x100
s_cselect_b32 s11, 0x1500, s11
s_sub_u32 s15, s15, s14
s_cselect_b32 s59, 0, s59
s_sub_u32 s68, s68, 1
s_cbranch_scc0 65516
s_add_u32 s82, s12, 1
s_lshr_b32 s82, s82, 1
s_sub_u32 s81, 8, s82
s_cbranch_scc1 2
s_sub_u32 s81, s81, s82
s_cbranch_scc0 65534
s_add_u32 s81, s81, s82
s_sub_u32 s82, s82, 1
s_getpc_b64 s[72:73]
s_add_u32 s72, s72, 0x2de8
s_addc_u32 s73, s73, 0
s_getpc_b64 s[70:71]
s_add_u32 s70, s70, 0x2fd8
s_addc_u32 s71, s71, 0
s_getpc_b64 s[74:75]
s_add_u32 s74, s74, 0x7164
s_addc_u32 s75, s75, 0
s_mov_b32 s34, 0x80000000
s_mov_b32 s38, 0x80000000
s_mov_b32 s35, 0x31014000
s_mov_b32 s39, 0x31014000
s_sub_u32 s84, s13, 1
s_sub_u32 s84, s84, s4
s_mov_b32 s42, 0x80000000
s_cselect_b32 s43, 0, 0x31014000
s_sub_u32 s84, s84, 4
s_mov_b32 s46, 0x80000000
s_cselect_b32 s47, 0, 0x31014000
s_sub_u32 s84, s84, 4
s_mov_b32 s50, 0x80000000
s_cselect_b32 s51, 0, 0x31014000
s_sub_u32 s84, s84, 4
s_mov_b32 s54, 0x80000000
s_cselect_b32 s55, 0, 0x31014000
s_add_u32 s84, s13, 3
s_and_b32 s84, s84, -4
s_sub_u32 s84, s13, 1
s_cbranch_scc1 7221
s_bitcmp1_b32 s31, 8
s_cbranch_scc1 28
v_cmp_gt_f16_e64 vcc, s30, 1.0
s_cbranch_vccnz 12
s_mov_b32 s83, 0x280
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x3680, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x2880, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x1680, s83
s_branch 23
s_mov_b32 s83, 0x880
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x3a80, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x2c80, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x1c80, s83
s_branch 11
s_mov_b32 s83, 0xe80
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x3e80, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x3080, s83
s_sub_u32 s84, s84, 4
s_cselect_b32 s83, 0x2280, s83
s_waitcnt vmcnt(5)
s_add_u32 m0, s9, 0xc438
ds_read_addtid_b32 v200
s_sub_u32 s9, s9, 0x100
s_cselect_b32 s9, 0x1500, s9
s_getpc_b64 s[76:77]
s_add_u32 s76, s76, 0x554
s_addc_u32 s77, s77, 0
s_mov_b32 s80, 22
s_waitcnt vmcnt(0) expcnt(0) lgkmcnt(0)
s_waitcnt lgkmcnt(0)
s_barrier
s_branch 2835
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v174, v175, s5, v174 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v178, v179, s5, v178 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v175, v175, s5, v175 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v179, v179, s5, v179 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x795c02fa
.long 0xff005aae
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x796402fa
.long 0xff005ab2
.long 0x79b336e9
.long 0xffffffa2
.long 0x795e02fa
.long 0xff005aaf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x796602fa
.long 0xff005ab3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820016
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v166, v164, s[32:35], 0 offen
buffer_load_short_d16 v167, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v167, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v166, v176, s[32:35], 0 offen
buffer_load_short_d16 v170, v164, s[36:39], 0 offen
buffer_load_short_d16 v171, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v171, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v170, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:28672
ds_read_b64 v[130:131], v144 offset:28672
ds_read_b64 v[134:135], v140 offset:29696
ds_read_b64 v[138:139], v144 offset:29696
ds_read_b64 v[142:143], v140 offset:30720
ds_read_b64 v[146:147], v144 offset:30720
ds_read_b64 v[150:151], v140 offset:31744
ds_read_b64 v[154:155], v144 offset:31744
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[174:175]
ds_write_b64 v132, v[178:179] offset:2048
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820038
v_pk_fma_f16 v182, v183, s5, v182 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v186, v187, s5, v186 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v183, v183, s5, v183 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v187, v187, s5, v187 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x796c02fa
.long 0xff005ab6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x797402fa
.long 0xff005aba
.long 0x79b336e9
.long 0xffffffa2
.long 0x796e02fa
.long 0xff005ab7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x797602fa
.long 0xff005abb
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_add_u32 s60, s60, 0x100
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf821a08
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v174, v164, s[32:35], 0 offen
buffer_load_short_d16 v175, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v175, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v174, v176, s[32:35], 0 offen
buffer_load_short_d16 v178, v164, s[36:39], 0 offen
buffer_load_short_d16 v179, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v179, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v178, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:32768
ds_read_b64 v[130:131], v144 offset:32768
ds_read_b64 v[134:135], v140 offset:33792
ds_read_b64 v[138:139], v144 offset:33792
ds_read_b64 v[142:143], v140 offset:34816
ds_read_b64 v[146:147], v144 offset:34816
ds_read_b64 v[150:151], v140 offset:35840
ds_read_b64 v[154:155], v144 offset:35840
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[182:183] offset:4096
ds_write_b64 v132, v[186:187] offset:6144
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v190, v191, s5, v190 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v194, v195, s5, v194 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v191, v191, s5, v191 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v195, v195, s5, v195 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x797c02fa
.long 0xff005abe
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x798402fa
.long 0xff005ac2
.long 0x79b336e9
.long 0xffffffa2
.long 0x797e02fa
.long 0xff005abf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x798602fa
.long 0xff005ac3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820016
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v182, v164, s[32:35], 0 offen
buffer_load_short_d16 v183, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v183, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v182, v176, s[32:35], 0 offen
buffer_load_short_d16 v186, v164, s[36:39], 0 offen
buffer_load_short_d16 v187, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v187, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v186, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820027
s_clause 0xd
ds_append v4 offset:50176
ds_read_b64 v[126:127], v140 offset:36864
ds_read_b64 v[130:131], v144 offset:36864
ds_read_b64 v[134:135], v140 offset:37888
ds_read_b64 v[138:139], v144 offset:37888
ds_read_b64 v[142:143], v140 offset:38912
ds_read_b64 v[146:147], v144 offset:38912
ds_read_b64 v[150:151], v140 offset:39936
ds_read_b64 v[154:155], v144 offset:39936
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[190:191] offset:8192
ds_write_b64 v132, v[194:195] offset:10240
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf821881
v_pk_fma_f16 v198, v199, s5, v198 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v202, v203, s5, v202 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v199, v199, s5, v199 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v203, v203, s5, v203 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x798c02fa
.long 0xff005ac6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x799402fa
.long 0xff005aca
.long 0x79b336e9
.long 0xffffffa2
.long 0x798e02fa
.long 0xff005ac7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x799602fa
.long 0xff005acb
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_mov_b32 m0, 0x2c400
s_nop 0
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
v_cmp_eq_u32_e64 vcc, src_lds_direct, s60
s_cbranch_vccz 65533
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820013
s_nop 0
s_clause 0x7
buffer_load_short_d16 v190, v164, s[32:35], 0 offen
buffer_load_short_d16 v191, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v191, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v190, v176, s[32:35], 0 offen
buffer_load_short_d16 v194, v164, s[36:39], 0 offen
buffer_load_short_d16 v195, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v195, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v194, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:40960
ds_read_b64 v[130:131], v144 offset:40960
ds_read_b64 v[134:135], v140 offset:41984
ds_read_b64 v[138:139], v144 offset:41984
ds_read_b64 v[142:143], v140 offset:43008
ds_read_b64 v[146:147], v144 offset:43008
ds_read_b64 v[150:151], v140 offset:44032
ds_read_b64 v[154:155], v144 offset:44032
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[198:199] offset:12288
ds_write_b64 v132, v[202:203] offset:14336
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v206, v207, s5, v206 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v210, v211, s5, v210 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v207, v207, s5, v207 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v211, v211, s5, v211 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x799c02fa
.long 0xff005ace
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x79a402fa
.long 0xff005ad2
.long 0x79b336e9
.long 0xffffffa2
.long 0x799e02fa
.long 0xff005acf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x79a602fa
.long 0xff005ad3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820018
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v198, v164, s[32:35], 0 offen
buffer_load_short_d16 v199, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v199, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v198, v176, s[32:35], 0 offen
buffer_load_short_d16 v202, v164, s[36:39], 0 offen
buffer_load_short_d16 v203, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v203, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v202, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:45056
ds_read_b64 v[130:131], v144 offset:45056
ds_read_b64 v[134:135], v140 offset:46080
ds_read_b64 v[138:139], v144 offset:46080
ds_read_b64 v[142:143], v140 offset:47104
ds_read_b64 v[146:147], v144 offset:47104
ds_read_b64 v[150:151], v140 offset:48128
ds_read_b64 v[154:155], v144 offset:48128
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[206:207] offset:16384
ds_write_b64 v132, v[210:211] offset:18432
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf82172b
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v166, v167, s5, v166 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v170, v171, s5, v170 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v167, v167, s5, v167 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v171, v171, s5, v171 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x794c02fa
.long 0xff005aa6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x795402fa
.long 0xff005aaa
.long 0x79b336e9
.long 0xffffffa2
.long 0x794e02fa
.long 0xff005aa7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x795602fa
.long 0xff005aab
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820018
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v206, v164, s[32:35], 0 offen
buffer_load_short_d16 v207, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v207, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v206, v176, s[32:35], 0 offen
buffer_load_short_d16 v210, v164, s[36:39], 0 offen
buffer_load_short_d16 v211, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v211, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v210, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140
ds_read_b64 v[130:131], v144
ds_read_b64 v[134:135], v140 offset:1024
ds_read_b64 v[138:139], v144 offset:1024
ds_read_b64 v[142:143], v140 offset:2048
ds_read_b64 v[146:147], v144 offset:2048
ds_read_b64 v[150:151], v140 offset:3072
ds_read_b64 v[154:155], v144 offset:3072
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[166:167] offset:20480
ds_write_b64 v132, v[170:171] offset:22528
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v174, v175, s5, v174 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v178, v179, s5, v178 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v175, v175, s5, v175 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v179, v179, s5, v179 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x795c02fa
.long 0xff005aae
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x796402fa
.long 0xff005ab2
.long 0x79b336e9
.long 0xffffffa2
.long 0x795e02fa
.long 0xff005aaf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x796602fa
.long 0xff005ab3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820016
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v166, v164, s[32:35], 0 offen
buffer_load_short_d16 v167, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v167, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v166, v176, s[32:35], 0 offen
buffer_load_short_d16 v170, v164, s[36:39], 0 offen
buffer_load_short_d16 v171, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v171, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v170, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf821593
s_clause 0xd
ds_append v4 offset:50180
ds_read_b64 v[126:127], v140 offset:4096
ds_read_b64 v[130:131], v144 offset:4096
ds_read_b64 v[134:135], v140 offset:5120
ds_read_b64 v[138:139], v144 offset:5120
ds_read_b64 v[142:143], v140 offset:6144
ds_read_b64 v[146:147], v144 offset:6144
ds_read_b64 v[150:151], v140 offset:7168
ds_read_b64 v[154:155], v144 offset:7168
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[174:175] offset:24576
ds_write_b64 v132, v[178:179] offset:26624
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf82003b
v_pk_fma_f16 v182, v183, s5, v182 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v186, v187, s5, v186 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v183, v183, s5, v183 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v187, v187, s5, v187 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x796c02fa
.long 0xff005ab6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x797402fa
.long 0xff005aba
.long 0x79b336e9
.long 0xffffffa2
.long 0x796e02fa
.long 0xff005ab7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x797602fa
.long 0xff005abb
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_mov_b32 m0, 0x2c404
s_nop 0
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
v_cmp_eq_u32_e64 vcc, src_lds_direct, s60
s_cbranch_vccz 65533
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820013
s_nop 0
s_clause 0x7
buffer_load_short_d16 v174, v164, s[32:35], 0 offen
buffer_load_short_d16 v175, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v175, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v174, v176, s[32:35], 0 offen
buffer_load_short_d16 v178, v164, s[36:39], 0 offen
buffer_load_short_d16 v179, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v179, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v178, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:8192
ds_read_b64 v[130:131], v144 offset:8192
ds_read_b64 v[134:135], v140 offset:9216
ds_read_b64 v[138:139], v144 offset:9216
ds_read_b64 v[142:143], v140 offset:10240
ds_read_b64 v[146:147], v144 offset:10240
ds_read_b64 v[150:151], v140 offset:11264
ds_read_b64 v[154:155], v144 offset:11264
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[182:183] offset:28672
ds_write_b64 v132, v[186:187] offset:30720
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v190, v191, s5, v190 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v194, v195, s5, v194 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v191, v191, s5, v191 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v195, v195, s5, v195 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x797c02fa
.long 0xff005abe
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x798402fa
.long 0xff005ac2
.long 0x79b336e9
.long 0xffffffa2
.long 0x797e02fa
.long 0xff005abf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x798602fa
.long 0xff005ac3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf8213ea
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v182, v164, s[32:35], 0 offen
buffer_load_short_d16 v183, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v183, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v182, v176, s[32:35], 0 offen
buffer_load_short_d16 v186, v164, s[36:39], 0 offen
buffer_load_short_d16 v187, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v187, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v186, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:12288
ds_read_b64 v[130:131], v144 offset:12288
ds_read_b64 v[134:135], v140 offset:13312
ds_read_b64 v[138:139], v144 offset:13312
ds_read_b64 v[142:143], v140 offset:14336
ds_read_b64 v[146:147], v144 offset:14336
ds_read_b64 v[150:151], v140 offset:15360
ds_read_b64 v[154:155], v144 offset:15360
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[190:191] offset:32768
ds_write_b64 v132, v[194:195] offset:34816
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v198, v199, s5, v198 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v202, v203, s5, v202 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v199, v199, s5, v199 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v203, v203, s5, v203 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x798c02fa
.long 0xff005ac6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x799402fa
.long 0xff005aca
.long 0x79b336e9
.long 0xffffffa2
.long 0x798e02fa
.long 0xff005ac7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x799602fa
.long 0xff005acb
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820018
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v190, v164, s[32:35], 0 offen
buffer_load_short_d16 v191, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v191, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v190, v176, s[32:35], 0 offen
buffer_load_short_d16 v194, v164, s[36:39], 0 offen
buffer_load_short_d16 v195, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v195, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v194, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:16384
ds_read_b64 v[130:131], v144 offset:16384
ds_read_b64 v[134:135], v140 offset:17408
ds_read_b64 v[138:139], v144 offset:17408
ds_read_b64 v[142:143], v140 offset:18432
ds_read_b64 v[146:147], v144 offset:18432
ds_read_b64 v[150:151], v140 offset:19456
ds_read_b64 v[154:155], v144 offset:19456
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[198:199] offset:36864
ds_write_b64 v132, v[202:203] offset:38912
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf8212cb
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf820036
v_pk_fma_f16 v206, v207, s5, v206 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v210, v211, s5, v210 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v207, v207, s5, v207 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v211, v211, s5, v211 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x799c02fa
.long 0xff005ace
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x79a402fa
.long 0xff005ad2
.long 0x79b336e9
.long 0xffffffa2
.long 0x799e02fa
.long 0xff005acf
.long 0x79bb2ce9
.long 0x000000a3
.long 0x79a602fa
.long 0xff005ad3
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_nop 2
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf820016
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_clause 0x7
buffer_load_short_d16 v198, v164, s[32:35], 0 offen
buffer_load_short_d16 v199, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v199, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v198, v176, s[32:35], 0 offen
buffer_load_short_d16 v202, v164, s[36:39], 0 offen
buffer_load_short_d16 v203, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v203, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v202, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820027
s_clause 0xd
ds_append v4 offset:50184
ds_read_b64 v[126:127], v140 offset:20480
ds_read_b64 v[130:131], v144 offset:20480
ds_read_b64 v[134:135], v140 offset:21504
ds_read_b64 v[138:139], v144 offset:21504
ds_read_b64 v[142:143], v140 offset:22528
ds_read_b64 v[146:147], v144 offset:22528
ds_read_b64 v[150:151], v140 offset:23552
ds_read_b64 v[154:155], v144 offset:23552
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[206:207] offset:40960
ds_write_b64 v132, v[210:211] offset:43008
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 5
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820069
s_mov_b32 null, 0xf0f0f0
s_waitcnt vmcnt(32) lgkmcnt(3)
.long 0x78fafce9
.long 0x0000009e
.long 0x7902fee9
v_max_i32_e32 v73, v158, v36
s_setprio 1
.long 0x790b04e9
.long 0x4924929e
.long 0x791306e9
v_fmac_f16_e32 v219, v158, v109
.long 0x791afce9
s_bfm_b32 s73, 30, s36
.long 0x7922fee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x792b04e9
.long 0xdb6db69e
.long 0x793306e9
.long 0xffffff9e
.long 0x793afce9
.long 0x0000009f
.long 0x7942fee9
v_max_i32_e32 v73, v159, v36
.long 0x794b04e9
.long 0x4924929f
.long 0x795306e9
v_fmac_f16_e32 v219, v159, v109
.long 0x795afce9
s_bfm_b32 s73, 31, s36
.long 0x7962fee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x796b04e9
.long 0xdb6db69f
.long 0x797306e9
.long 0xffffff9f
.long 0x797b0ce9
.long 0x0000009e
.long 0x79830ee9
v_max_i32_e32 v73, v158, v36
.long 0x798b14e9
.long 0x4924929e
.long 0x799316e9
v_fmac_f16_e32 v219, v158, v109
.long 0x799b0ce9
s_bfm_b32 s73, 30, s36
.long 0x79a30ee9
s_cmpk_lt_u32 s91, 0x6d9e
.long 0x79ab14e9
.long 0xdb6db69e
.long 0x79b316e9
.long 0xffffff9e
.long 0x79bb0ce9
.long 0x0000009f
.long 0x79c30ee9
v_max_i32_e32 v73, v159, v36
.long 0x79cb14e9
.long 0x4924929f
.long 0x79d316e9
v_fmac_f16_e32 v219, v159, v109
.long 0x79db0ce9
s_bfm_b32 s73, 31, s36
.long 0x79e30ee9
s_cmpk_lt_u32 s91, 0x6d9f
.long 0x79eb14e9
.long 0xdb6db69f
.long 0x79f316e9
.long 0xffffff9f
.long 0x78fb1ce9
.long 0x000000a2
.long 0x79031ee9
v_max_i32_e32 v73, v162, v36
.long 0x790b24e9
.long 0x492492a2
.long 0x791326e9
v_fmac_f16_e32 v219, v162, v109
.long 0x791b1ce9
s_bfm_b32 s73, 34, s36
.long 0x79231ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x792b24e9
.long 0xdb6db6a2
.long 0x793326e9
.long 0xffffffa2
.long 0x793b1ce9
.long 0x000000a3
.long 0x79431ee9
v_max_i32_e32 v73, v163, v36
.long 0x794b24e9
.long 0x492492a3
.long 0x795326e9
v_fmac_f16_e32 v219, v163, v109
.long 0x795b1ce9
s_bfm_b32 s73, 35, s36
.long 0x79631ee9
s_cmpk_lt_u32 s91, 0x6da3
.long 0x796b24e9
.long 0xdb6db6a3
.long 0x797326e9
.long 0xffffffa3
.long 0x797b2ce9
.long 0x000000a2
.long 0x79832ee9
v_max_i32_e32 v73, v162, v36
s_mov_b32 null, 0xbf82003b
v_pk_fma_f16 v166, v167, s5, v166 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x798b34e9
.long 0x492492a2
v_pk_fma_f16 v170, v171, s5, v170 op_sel:[1,0,0] op_sel_hi:[0,0,1]
.long 0x799336e9
v_fmac_f16_e32 v219, v162, v109
v_pk_fma_f16 v167, v167, s5, v167 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x799b2ce9
s_bfm_b32 s73, 34, s36
v_pk_fma_f16 v171, v171, s5, v171 op_sel:[1,1,0] op_sel_hi:[0,0,1]
.long 0x79a32ee9
s_cmpk_lt_u32 s91, 0x6da2
.long 0x794c02fa
.long 0xff005aa6
.long 0x79ab34e9
.long 0xdb6db6a2
.long 0x795402fa
.long 0xff005aaa
.long 0x79b336e9
.long 0xffffffa2
.long 0x794e02fa
.long 0xff005aa7
.long 0x79bb2ce9
.long 0x000000a3
.long 0x795602fa
.long 0xff005aab
.long 0x79c32ee9
v_max_i32_e32 v73, v163, v36
v_movrels_b32_e32 v128, v5
.long 0x79cb34e9
.long 0x492492a3
.long 0x79d336e9
v_fmac_f16_e32 v219, v163, v109
.long 0x79db2ce9
s_bfm_b32 s73, 35, s36
.long 0x79e32ee9
s_cmpk_lt_u32 s91, 0x6da3
s_mov_b32 m0, 0x2c408
s_nop 0
.long 0x79eb34e9
.long 0xdb6db6a3
.long 0x79f336e9
.long 0xffffffa3
v_cmp_eq_u32_e64 vcc, src_lds_direct, s60
s_cbranch_vccz 65533
s_waitcnt lgkmcnt(0)
s_setprio 0
s_sub_u32 s32, s32, s16
s_subb_u32 s33, s33, 0
s_sub_u32 s36, s36, s16
s_subb_u32 s37, s37, 0
s_mov_b32 s39, s67
s_mov_b32 null, 0xbf821145
s_nop 0
s_clause 0x7
buffer_load_short_d16 v206, v164, s[32:35], 0 offen
buffer_load_short_d16 v207, v168, s[32:35], 0 offen
buffer_load_short_d16_hi v207, v172, s[32:35], 0 offen
buffer_load_short_d16_hi v206, v176, s[32:35], 0 offen
buffer_load_short_d16 v210, v164, s[36:39], 0 offen
buffer_load_short_d16 v211, v168, s[36:39], 0 offen
buffer_load_short_d16_hi v211, v172, s[36:39], 0 offen
buffer_load_short_d16_hi v210, v176, s[36:39], 0 offen
s_mov_b32 null, 0xbf820025
s_clause 0xc
ds_read_b64 v[126:127], v140 offset:24576
ds_read_b64 v[130:131], v144 offset:24576
ds_read_b64 v[134:135], v140 offset:25600
ds_read_b64 v[138:139], v144 offset:25600
ds_read_b64 v[142:143], v140 offset:26624
ds_read_b64 v[146:147], v144 offset:26624
ds_read_b64 v[150:151], v140 offset:27648
ds_read_b64 v[154:155], v144 offset:27648
ds_read_b64 v[158:159], v148 offset:49152
ds_read_b64 v[162:163], v148 offset:49280
ds_write_b64 v132, v[166:167] offset:45056
ds_write_b64 v132, v[170:171] offset:47104
ds_write_b32 v136, v128 offset:49152
s_mov_b32 s67, s35
s_sub_u32 s81, s81, 1
s_cselect_b32 s81, s82, s81
s_mov_b32 m0, s81
s_sub_u32 s78, s78, 2
s_cbranch_scc0 62855
s_swappc_b64 s[76:77], s[68:69]
s_nop 0
s_mov_b32 m0, s81
s_mov_b32 null, 0xbf820021
s_branch 62849
s_branch 4359
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_mov_b32 null, 0xbf82007f
s_and_b32 null, 1, s12
s_addc_u32 s79, s12, 0
s_sub_u32 s65, s65, s14
s_cselect_b32 s35, 0, s35
s_cselect_b32 s39, 0, s39
s_cselect_b32 s79, 0x1000, s79
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_setprio 2
s_lshl2_add_u32 s88, s4, 4
v_add_co_u32_e64 v253, s[94:95], v200, v200
v_lshlrev_b32_e32 v204, 2, v200
v_lshlrev_b32_e32 v253, s88, v200
v_add_co_u32_e64 v204, s[90:91], v204, v204
v_add_co_u32_e64 v204, s[92:93], v204, v204
s_lshr_b32 s98, s16, 1
s_add_u32 s32, s24, s94
s_addc_u32 s33, s25, s95
s_add_u32 s36, s32, s98
s_addc_u32 s37, s33, 0
s_and_b32 null, 1, s12
s_cselect_b32 s67, 0, s35
s_lshl_b32 s84, s4, 4
s_lshl_b32 s86, s4, 4
s_bcnt1_i32_b64 s85, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
s_lshr_b64 s[90:91], s[90:91], s84
s_lshr_b64 s[92:93], s[92:93], s86
s_bcnt1_i32_b64 s84, s[90:91]
s_bcnt1_i32_b64 s86, s[92:93]
s_bitreplicate_b64_b32 s[90:91], s90
s_bitreplicate_b64_b32 s[92:93], s92
s_sub_u32 s85, s85, s84
s_sub_u32 s87, s87, s86
s_bitreplicate_b64_b32 s[90:91], s90
s_bitreplicate_b64_b32 s[92:93], s92
s_lshl_b32 s85, s85, 2
s_lshl_b32 s87, s87, 2
v_mbcnt_lo_u32_b32_e64 v214, s90, s85
v_mbcnt_lo_u32_b32_e64 v215, s92, s87
v_mbcnt_hi_u32_b32_e64 v214, s91, v214
v_mbcnt_hi_u32_b32_e64 v215, s93, v215
v_lshrrev_b32_e32 v214, 2, v214
v_lshrrev_b32_e32 v215, 2, v215
v_mad_i32_i24 v164, v214, s18, v152
v_mad_i32_i24 v164, v215, s19, v164
v_add_co_u32_e64 v168, vcc, v164, s17
v_add_co_u32_e64 v253, vcc, v253, v253
v_cndmask_b32_e64 v164, v164, -1, vcc
v_add_co_u32_e64 v172, vcc, v168, s17
v_add_co_u32_e64 v253, vcc, v253, v253
v_cndmask_b32_e64 v168, v168, -1, vcc
v_add_co_u32_e64 v176, vcc, v172, s17
v_add_co_u32_e64 v253, vcc, v253, v253
v_cndmask_b32_e64 v172, v172, -1, vcc
v_add_co_u32_e64 v253, vcc, v253, v253
v_cndmask_b32_e64 v176, v176, -1, vcc
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_add_u32 m0, s9, 0xc438
ds_read_addtid_b32 v200
s_sub_u32 s9, s9, 0x100
s_cselect_b32 s9, 0x1500, s9
v_lshlrev_b32_e32 v204, 2, v0
s_mul_i32 s86, s14, 0x100
s_add_u32 m0, s11, 0xc438
s_add_u32 s56, s56, s86
s_addc_u32 s57, s57, 0
v_and_b32_e64 v204, v204, 0xff
buffer_load_dword v204, v204, s[56:59], 0 offen lds
s_sub_u32 s11, s11, 0x100
s_cselect_b32 s11, 0x1500, s11
s_sub_u32 s15, s15, s14
s_cselect_b32 s59, 0, s59
s_setprio 0
s_setpc_b64 s[76:77]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_mov_b32 null, 0xbf821069
s_add_u32 s70, s70, s83
s_addc_u32 s71, s71, 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
v_mov_b32_e32 v125, 0
v_mov_b32_e32 v129, 0
v_mov_b32_e32 v133, 0
v_mov_b32_e32 v137, 0
v_mov_b32_e32 v141, 0
v_mov_b32_e32 v145, 0
v_mov_b32_e32 v149, 0
v_mov_b32_e32 v153, 0
v_mov_b32_e32 v157, 0
v_mov_b32_e32 v161, 0
v_mov_b32_e32 v165, 0
v_mov_b32_e32 v169, 0
v_mov_b32_e32 v173, 0
v_mov_b32_e32 v177, 0
v_mov_b32_e32 v181, 0
v_mov_b32_e32 v185, 0
v_mov_b32_e32 v189, 0
v_mov_b32_e32 v193, 0
v_mov_b32_e32 v197, 0
v_mov_b32_e32 v201, 0
v_mov_b32_e32 v205, 0
v_mov_b32_e32 v209, 0
v_mov_b32_e32 v213, 0
v_mov_b32_e32 v217, 0
v_mov_b32_e32 v221, 0
v_mov_b32_e32 v225, 0
v_mov_b32_e32 v229, 0
v_mov_b32_e32 v233, 0
v_mov_b32_e32 v237, 0
v_mov_b32_e32 v241, 0
v_mov_b32_e32 v245, 0
v_mov_b32_e32 v249, 0
s_setprio 2
v_lshlrev_b32_e32 v204, 1, v196
v_lshlrev_b32_e32 v208, 20, v196
v_add_co_u32_e64 v204, s[98:99], v204, v204
v_add_co_u32_e64 v204, s[94:95], v204, v204
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v204, s[96:97], v204, v204
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v212, s90, 0
v_mbcnt_lo_u32_b32_e64 v214, s92, 0
v_mbcnt_lo_u32_b32_e64 v215, s94, s86
v_mbcnt_lo_u32_b32_e64 v216, s96, s87
v_mbcnt_hi_u32_b32_e64 v212, s91, v212
v_mbcnt_hi_u32_b32_e64 v214, s93, v214
v_mbcnt_hi_u32_b32_e64 v215, s95, v215
v_mbcnt_hi_u32_b32_e64 v216, s97, v216
v_lshrrev_b32_e32 v212, 1, v212
v_lshrrev_b32_e32 v214, 1, v214
v_lshrrev_b32_e32 v215, 1, v215
v_lshrrev_b32_e32 v216, 1, v216
v_mad_i32_i24 v180, v212, s22, v156
v_mad_i32_i24 v188, v215, s22, v160
v_mad_i32_i24 v180, v214, s23, v180
v_mad_i32_i24 v188, v216, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v208, vcc, v208, v208
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v208, vcc, v208, v208
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v208, vcc, v208, v208
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v208, vcc, v208, v208
v_cndmask_b32_e64 v192, v192, -1, vcc
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v222, v177, s5, v173 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v173, 0
v_pk_fma_f16 v212, v185, s5, v181 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v181, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v231, v241, s5, v237 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v237, 0
v_pk_fma_f16 v234, v249, s5, v245 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v245, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v222, v177, s5, v222 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v177, 0
v_pk_fma_f16 v212, v185, s5, v212 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v185, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
v_pk_fma_f16 v231, v241, s5, v231 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v241, 0
v_pk_fma_f16 v234, v249, s5, v234 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v249, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79bc06fa
.long 0xff00b1d4
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
.long 0x79ce06fa
.long 0xff00b1ea
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v222, v212, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_fmac_f16_e32 v231, v234, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v222, s64, v222
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_add_f16 v231, s64, v231
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v219, s30, v208
v_pk_mul_f16 v212, s30, v222
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_mul_f16 v220, s30, v230
v_pk_mul_f16 v234, s30, v231
v_pk_max_f16 v214, v214, v204
v_pk_max_f16 v215, v215, v218
v_pk_max_f16 v208, v208, v219
v_pk_max_f16 v222, v222, v212
v_pk_max_f16 v223, v223, v226
v_pk_max_f16 v216, v216, v227
v_pk_max_f16 v230, v230, v220
v_pk_max_f16 v231, v231, v234
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
buffer_store_short v222, v180, s[52:55], 0 offen
buffer_store_short_d16_hi v222, v184, s[52:55], 0 offen
buffer_store_short v231, v188, s[52:55], 0 offen
buffer_store_short_d16_hi v231, v192, s[52:55], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v222, v177, s5, v173 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v173, 0
v_pk_fma_f16 v212, v185, s5, v181 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v181, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v231, v241, s5, v237 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v237, 0
v_pk_fma_f16 v234, v249, s5, v245 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v245, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v222, v177, s5, v222 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v177, 0
v_pk_fma_f16 v212, v185, s5, v212 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v185, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
v_pk_fma_f16 v231, v241, s5, v231 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v241, 0
v_pk_fma_f16 v234, v249, s5, v234 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v249, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79bc06fa
.long 0xff00b1d4
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
.long 0x79ce06fa
.long 0xff00b1ea
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v222, v212, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_fmac_f16_e32 v231, v234, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v222, s64, v222
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_add_f16 v231, s64, v231
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v219, s30, v208
v_pk_mul_f16 v212, s30, v222
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_mul_f16 v220, s30, v230
v_pk_mul_f16 v234, s30, v231
v_pk_min_f16 v214, v214, v204
v_pk_min_f16 v215, v215, v218
v_pk_min_f16 v208, v208, v219
v_pk_min_f16 v222, v222, v212
v_pk_min_f16 v223, v223, v226
v_pk_min_f16 v216, v216, v227
v_pk_min_f16 v230, v230, v220
v_pk_min_f16 v231, v231, v234
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
buffer_store_short v222, v180, s[52:55], 0 offen
buffer_store_short_d16_hi v222, v184, s[52:55], 0 offen
buffer_store_short v231, v188, s[52:55], 0 offen
buffer_store_short_d16_hi v231, v192, s[52:55], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v222, v177, s5, v173 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v173, 0
v_pk_fma_f16 v212, v185, s5, v181 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v181, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v231, v241, s5, v237 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v237, 0
v_pk_fma_f16 v234, v249, s5, v245 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v245, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v222, v177, s5, v222 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v177, 0
v_pk_fma_f16 v212, v185, s5, v212 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v185, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
v_pk_fma_f16 v231, v241, s5, v231 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v241, 0
v_pk_fma_f16 v234, v249, s5, v234 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v249, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79bc06fa
.long 0xff00b1d4
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
.long 0x79ce06fa
.long 0xff00b1ea
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v222, v212, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_fmac_f16_e32 v231, v234, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v222, s64, v222
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_add_f16 v231, s64, v231
v_pk_mul_f16 v214, 0xbdc5bdc5, v214 op_sel_hi:[0,1]
v_pk_mul_f16 v215, 0xbdc5bdc5, v215 op_sel_hi:[0,1]
v_pk_mul_f16 v208, 0xbdc5bdc5, v208 op_sel_hi:[0,1]
v_pk_mul_f16 v222, 0xbdc5bdc5, v222 op_sel_hi:[0,1]
v_pk_mul_f16 v223, 0xbdc5bdc5, v223 op_sel_hi:[0,1]
v_pk_mul_f16 v216, 0xbdc5bdc5, v216 op_sel_hi:[0,1]
v_pk_mul_f16 v230, 0xbdc5bdc5, v230 op_sel_hi:[0,1]
v_pk_mul_f16 v231, 0xbdc5bdc5, v231 op_sel_hi:[0,1]
.long 0x7facb0f9
.long 0x060414d6
.long 0x7faeb0f9
.long 0x060414d7
.long 0x7fa0b0f9
v_add_f32_e32 v2, -16, v10
.long 0x7fbcb0f9
.long 0x060414de
.long 0x7fbeb0f9
.long 0x060414df
.long 0x7fb0b0f9
.long 0x060414d8
.long 0x7fccb0f9
.long 0x060414e6
.long 0x7fceb0f9
.long 0x060414e7
.long 0x7facb0f9
v_add_f32_e32 v2, v214, v138
.long 0x7faeb0f9
v_add_f32_e32 v2, v215, v138
.long 0x7fa0b0f9
v_add_f32_e32 v2, v208, v138
.long 0x7fbcb0f9
v_add_f32_e32 v2, v222, v138
.long 0x7fbeb0f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0b0f9
v_add_f32_e32 v2, v216, v138
.long 0x7fccb0f9
v_add_f32_e32 v2, v230, v138
.long 0x7fceb0f9
v_add_f32_e32 v2, v231, v138
v_pk_add_f16 v214, 0x3c003c00, v214 op_sel_hi:[0,1]
v_pk_add_f16 v215, 0x3c003c00, v215 op_sel_hi:[0,1]
v_pk_add_f16 v208, 0x3c003c00, v208 op_sel_hi:[0,1]
v_pk_add_f16 v222, 0x3c003c00, v222 op_sel_hi:[0,1]
v_pk_add_f16 v223, 0x3c003c00, v223 op_sel_hi:[0,1]
v_pk_add_f16 v216, 0x3c003c00, v216 op_sel_hi:[0,1]
v_pk_add_f16 v230, 0x3c003c00, v230 op_sel_hi:[0,1]
v_pk_add_f16 v231, 0x3c003c00, v231 op_sel_hi:[0,1]
.long 0x7faca8f9
.long 0x060414d6
.long 0x7faea8f9
.long 0x060414d7
.long 0x7fa0a8f9
v_add_f32_e32 v2, -16, v10
.long 0x7fbca8f9
.long 0x060414de
.long 0x7fbea8f9
.long 0x060414df
.long 0x7fb0a8f9
.long 0x060414d8
.long 0x7fcca8f9
.long 0x060414e6
.long 0x7fcea8f9
.long 0x060414e7
.long 0x7faca8f9
v_add_f32_e32 v2, v214, v138
.long 0x7faea8f9
v_add_f32_e32 v2, v215, v138
.long 0x7fa0a8f9
v_add_f32_e32 v2, v208, v138
.long 0x7fbca8f9
v_add_f32_e32 v2, v222, v138
.long 0x7fbea8f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0a8f9
v_add_f32_e32 v2, v216, v138
.long 0x7fcca8f9
v_add_f32_e32 v2, v230, v138
.long 0x7fcea8f9
v_add_f32_e32 v2, v231, v138
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
buffer_store_short v222, v180, s[52:55], 0 offen
buffer_store_short_d16_hi v222, v184, s[52:55], 0 offen
buffer_store_short v231, v188, s[52:55], 0 offen
buffer_store_short_d16_hi v231, v192, s[52:55], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v219, s30, v208
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_mul_f16 v220, s30, v230
v_pk_max_f16 v214, v214, v204
v_pk_max_f16 v215, v215, v218
v_pk_max_f16 v208, v208, v219
v_pk_max_f16 v223, v223, v226
v_pk_max_f16 v216, v216, v227
v_pk_max_f16 v230, v230, v220
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v219, s30, v208
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_mul_f16 v220, s30, v230
v_pk_min_f16 v214, v214, v204
v_pk_min_f16 v215, v215, v218
v_pk_min_f16 v208, v208, v219
v_pk_min_f16 v223, v223, v226
v_pk_min_f16 v216, v216, v227
v_pk_min_f16 v230, v230, v220
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v208, v161, s5, v157 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v157, 0
v_pk_fma_f16 v219, v169, s5, v165 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v165, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v230, v225, s5, v221 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v221, 0
v_pk_fma_f16 v220, v233, s5, v229 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v229, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v208, v161, s5, v208 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v161, 0
v_pk_fma_f16 v219, v169, s5, v219 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v169, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
v_pk_fma_f16 v230, v225, s5, v230 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v225, 0
v_pk_fma_f16 v220, v233, s5, v220 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v233, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79a006fa
.long 0xff00b1db
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
.long 0x79cc06fa
.long 0xff00b1dc
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v208, v219, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_fmac_f16_e32 v230, v220, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v208, s63, v208
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_add_f16 v230, s63, v230
v_pk_mul_f16 v214, 0xbdc5bdc5, v214 op_sel_hi:[0,1]
v_pk_mul_f16 v215, 0xbdc5bdc5, v215 op_sel_hi:[0,1]
v_pk_mul_f16 v208, 0xbdc5bdc5, v208 op_sel_hi:[0,1]
v_pk_mul_f16 v223, 0xbdc5bdc5, v223 op_sel_hi:[0,1]
v_pk_mul_f16 v216, 0xbdc5bdc5, v216 op_sel_hi:[0,1]
v_pk_mul_f16 v230, 0xbdc5bdc5, v230 op_sel_hi:[0,1]
.long 0x7facb0f9
.long 0x060414d6
.long 0x7faeb0f9
.long 0x060414d7
.long 0x7fa0b0f9
v_add_f32_e32 v2, -16, v10
.long 0x7fbeb0f9
.long 0x060414df
.long 0x7fb0b0f9
.long 0x060414d8
.long 0x7fccb0f9
.long 0x060414e6
.long 0x7facb0f9
v_add_f32_e32 v2, v214, v138
.long 0x7faeb0f9
v_add_f32_e32 v2, v215, v138
.long 0x7fa0b0f9
v_add_f32_e32 v2, v208, v138
.long 0x7fbeb0f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0b0f9
v_add_f32_e32 v2, v216, v138
.long 0x7fccb0f9
v_add_f32_e32 v2, v230, v138
v_pk_add_f16 v214, 0x3c003c00, v214 op_sel_hi:[0,1]
v_pk_add_f16 v215, 0x3c003c00, v215 op_sel_hi:[0,1]
v_pk_add_f16 v208, 0x3c003c00, v208 op_sel_hi:[0,1]
v_pk_add_f16 v223, 0x3c003c00, v223 op_sel_hi:[0,1]
v_pk_add_f16 v216, 0x3c003c00, v216 op_sel_hi:[0,1]
v_pk_add_f16 v230, 0x3c003c00, v230 op_sel_hi:[0,1]
.long 0x7faca8f9
.long 0x060414d6
.long 0x7faea8f9
.long 0x060414d7
.long 0x7fa0a8f9
v_add_f32_e32 v2, -16, v10
.long 0x7fbea8f9
.long 0x060414df
.long 0x7fb0a8f9
.long 0x060414d8
.long 0x7fcca8f9
.long 0x060414e6
.long 0x7faca8f9
v_add_f32_e32 v2, v214, v138
.long 0x7faea8f9
v_add_f32_e32 v2, v215, v138
.long 0x7fa0a8f9
v_add_f32_e32 v2, v208, v138
.long 0x7fbea8f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0a8f9
v_add_f32_e32 v2, v216, v138
.long 0x7fcca8f9
v_add_f32_e32 v2, v230, v138
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
buffer_store_short v208, v180, s[48:51], 0 offen
buffer_store_short_d16_hi v208, v184, s[48:51], 0 offen
buffer_store_short v230, v188, s[48:51], 0 offen
buffer_store_short_d16_hi v230, v192, s[48:51], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_max_f16 v214, v214, v204
v_pk_max_f16 v215, v215, v218
v_pk_max_f16 v223, v223, v226
v_pk_max_f16 v216, v216, v227
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v218, s30, v215
v_pk_mul_f16 v226, s30, v223
v_pk_mul_f16 v227, s30, v216
v_pk_min_f16 v214, v214, v204
v_pk_min_f16 v215, v215, v218
v_pk_min_f16 v223, v223, v226
v_pk_min_f16 v216, v216, v227
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v215, v145, s5, v141 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v141, 0
v_pk_fma_f16 v218, v153, s5, v149 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v149, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v216, v209, s5, v205 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v205, 0
v_pk_fma_f16 v227, v217, s5, v213 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v213, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v215, v145, s5, v215 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v145, 0
v_pk_fma_f16 v218, v153, s5, v218 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v153, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
v_pk_fma_f16 v216, v209, s5, v216 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v209, 0
v_pk_fma_f16 v227, v217, s5, v227 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v217, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79ae06fa
.long 0xff00b1da
.long 0x79be06fa
.long 0xff00b1e2
.long 0x79b006fa
.long 0xff00b1e3
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v215, v218, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_fmac_f16_e32 v216, v227, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v215, s62, v215
v_pk_add_f16 v223, s61, v223
v_pk_add_f16 v216, s62, v216
v_pk_mul_f16 v214, 0xbdc5bdc5, v214 op_sel_hi:[0,1]
v_pk_mul_f16 v215, 0xbdc5bdc5, v215 op_sel_hi:[0,1]
v_pk_mul_f16 v223, 0xbdc5bdc5, v223 op_sel_hi:[0,1]
v_pk_mul_f16 v216, 0xbdc5bdc5, v216 op_sel_hi:[0,1]
.long 0x7facb0f9
.long 0x060414d6
.long 0x7faeb0f9
.long 0x060414d7
.long 0x7fbeb0f9
.long 0x060414df
.long 0x7fb0b0f9
.long 0x060414d8
.long 0x7facb0f9
v_add_f32_e32 v2, v214, v138
.long 0x7faeb0f9
v_add_f32_e32 v2, v215, v138
.long 0x7fbeb0f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0b0f9
v_add_f32_e32 v2, v216, v138
v_pk_add_f16 v214, 0x3c003c00, v214 op_sel_hi:[0,1]
v_pk_add_f16 v215, 0x3c003c00, v215 op_sel_hi:[0,1]
v_pk_add_f16 v223, 0x3c003c00, v223 op_sel_hi:[0,1]
v_pk_add_f16 v216, 0x3c003c00, v216 op_sel_hi:[0,1]
.long 0x7faca8f9
.long 0x060414d6
.long 0x7faea8f9
.long 0x060414d7
.long 0x7fbea8f9
.long 0x060414df
.long 0x7fb0a8f9
.long 0x060414d8
.long 0x7faca8f9
v_add_f32_e32 v2, v214, v138
.long 0x7faea8f9
v_add_f32_e32 v2, v215, v138
.long 0x7fbea8f9
v_add_f32_e32 v2, v223, v138
.long 0x7fb0a8f9
v_add_f32_e32 v2, v216, v138
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
buffer_store_short v215, v180, s[44:47], 0 offen
buffer_store_short_d16_hi v215, v184, s[44:47], 0 offen
buffer_store_short v216, v188, s[44:47], 0 offen
buffer_store_short_d16_hi v216, v192, s[44:47], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_nop 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79be06fa
.long 0xff00b1e2
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v223, s61, v223
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v226, s30, v223
v_pk_max_f16 v214, v214, v204
v_pk_max_f16 v223, v223, v226
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79be06fa
.long 0xff00b1e2
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v223, s61, v223
v_pk_mul_f16 v204, s30, v214
v_pk_mul_f16 v226, s30, v223
v_pk_min_f16 v214, v214, v204
v_pk_min_f16 v223, v223, v226
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_sub_u32 s66, s66, s14
s_cselect_b64 s[76:77], s[74:75], s[76:77]
s_and_b32 null, 1, s12
s_addc_u32 s80, s12, 0
s_cmp_ge_u32 s79, s80
s_cselect_b32 s78, s80, s79
s_cselect_b64 s[68:69], s[70:71], s[72:73]
s_cmp_eq_u32 s79, 0
s_cselect_b64 s[84:85], s[72:73], s[76:77]
s_sub_u32 s79, s79, s78
s_sub_u32 s80, s80, s78
s_sub_u32 s78, s78, 1
s_setprio 3
v_pk_fma_f16 v214, v129, s5, v125 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v125, 0
v_pk_fma_f16 v204, v137, s5, v133 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v133, 0
v_pk_fma_f16 v223, v193, s5, v189 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v189, 0
v_pk_fma_f16 v226, v201, s5, v197 op_sel:[0,1,0] op_sel_hi:[1,0,1]
v_mov_b32_e32 v197, 0
v_pk_fma_f16 v214, v129, s5, v214 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v129, 0
v_pk_fma_f16 v204, v137, s5, v204 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v137, 0
v_pk_fma_f16 v223, v193, s5, v223 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v193, 0
v_pk_fma_f16 v226, v201, s5, v226 op_sel:[1,1,0] op_sel_hi:[0,1,1]
v_mov_b32_e32 v201, 0
s_clause 0xf
ds_swizzle_b32 v214, v214 offset:57360
ds_swizzle_b32 v204, v204 offset:57360
ds_swizzle_b32 v215, v215 offset:57360
ds_swizzle_b32 v218, v218 offset:57360
ds_swizzle_b32 v208, v208 offset:57360
ds_swizzle_b32 v219, v219 offset:57360
ds_swizzle_b32 v222, v222 offset:57360
ds_swizzle_b32 v212, v212 offset:57360
ds_swizzle_b32 v223, v223 offset:57360
ds_swizzle_b32 v226, v226 offset:57360
ds_swizzle_b32 v216, v216 offset:57360
ds_swizzle_b32 v227, v227 offset:57360
ds_swizzle_b32 v230, v230 offset:57360
ds_swizzle_b32 v220, v220 offset:57360
ds_swizzle_b32 v231, v231 offset:57360
ds_swizzle_b32 v234, v234 offset:57360
v_lshlrev_b32_e32 v224, 1, v196
v_lshlrev_b32_e32 v228, 20, v196
v_add_co_u32_e64 v224, s[98:99], v224, v224
v_add_co_u32_e64 v224, s[94:95], v224, v224
s_add_u32 s40, s26, s98
s_addc_u32 s41, s27, s99
v_add_co_u32_e64 v224, s[96:97], v224, v224
s_lshl2_add_u32 s44, s20, s40
s_addc_u32 s45, 0, s41
s_lshl2_add_u32 s48, s20, s44
s_addc_u32 s49, 0, s45
s_lshl2_add_u32 s52, s20, s48
s_addc_u32 s53, 0, s49
s_setprio 2
s_bitreplicate_b64_b32 s[90:91], s94
s_bitreplicate_b64_b32 s[92:93], s96
s_bitreplicate_b64_b32 s[94:95], s95
s_bitreplicate_b64_b32 s[96:97], s97
s_bcnt1_i32_b64 s86, s[90:91]
s_bcnt1_i32_b64 s87, s[92:93]
v_mbcnt_lo_u32_b32_e64 v232, s90, 0
v_mbcnt_lo_u32_b32_e64 v235, s92, 0
v_mbcnt_lo_u32_b32_e64 v236, s94, s86
v_mbcnt_lo_u32_b32_e64 v238, s96, s87
v_mbcnt_hi_u32_b32_e64 v232, s91, v232
v_mbcnt_hi_u32_b32_e64 v235, s93, v235
v_mbcnt_hi_u32_b32_e64 v236, s95, v236
v_mbcnt_hi_u32_b32_e64 v238, s97, v238
v_lshrrev_b32_e32 v232, 1, v232
v_lshrrev_b32_e32 v235, 1, v235
v_lshrrev_b32_e32 v236, 1, v236
v_lshrrev_b32_e32 v238, 1, v238
v_mad_i32_i24 v180, v232, s22, v156
v_mad_i32_i24 v188, v236, s22, v160
v_mad_i32_i24 v180, v235, s23, v180
v_mad_i32_i24 v188, v238, s23, v188
v_add_co_u32_e64 v184, vcc, v180, s21
v_add_co_u32_e64 v192, vcc, v188, s21
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v180, v180, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v184, v184, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v188, v188, -1, vcc
v_add_co_u32_e64 v228, vcc, v228, v228
v_cndmask_b32_e64 v192, v192, -1, vcc
s_waitcnt lgkmcnt(0)
.long 0x79ac06fa
.long 0xff00b1cc
.long 0x79be06fa
.long 0xff00b1e2
v_pk_fmac_f16_e32 v214, v204, v2
v_pk_fmac_f16_e32 v223, v226, v2
v_pk_add_f16 v214, s61, v214
v_pk_add_f16 v223, s61, v223
v_pk_mul_f16 v214, 0xbdc5bdc5, v214 op_sel_hi:[0,1]
v_pk_mul_f16 v223, 0xbdc5bdc5, v223 op_sel_hi:[0,1]
.long 0x7facb0f9
.long 0x060414d6
.long 0x7fbeb0f9
.long 0x060414df
.long 0x7facb0f9
v_add_f32_e32 v2, v214, v138
.long 0x7fbeb0f9
v_add_f32_e32 v2, v223, v138
v_pk_add_f16 v214, 0x3c003c00, v214 op_sel_hi:[0,1]
v_pk_add_f16 v223, 0x3c003c00, v223 op_sel_hi:[0,1]
.long 0x7faca8f9
.long 0x060414d6
.long 0x7fbea8f9
.long 0x060414df
.long 0x7faca8f9
v_add_f32_e32 v2, v214, v138
.long 0x7fbea8f9
v_add_f32_e32 v2, v223, v138
buffer_store_short v214, v180, s[40:43], 0 offen
buffer_store_short_d16_hi v214, v184, s[40:43], 0 offen
buffer_store_short v223, v188, s[40:43], 0 offen
buffer_store_short_d16_hi v223, v192, s[40:43], 0 offen
s_add_u32 m0, s10, 0xc438
ds_read_addtid_b32 v196
s_sub_u32 s10, s10, 0x100
s_cselect_b32 s10, 0x1500, s10
s_setprio 0
s_nop 0
s_setpc_b64 s[84:85]
s_branch 380
s_branch 1
s_branch 55448
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
.long 0x00000000
.long 0x00000008
.long 0x00000010
.long 0x00000018
.long 0x00000040
.long 0x00000048
.long 0x00000050
.long 0x00000058
.long 0x00000020
.long 0x00000028
.long 0x00000030
.long 0x00000038
.long 0x00000060
.long 0x00000068
.long 0x00000070
.long 0x00000078
.long 0x00000000
.long 0x00000008
.long 0x00000010
.long 0x00000018
.long 0x00000020
.long 0x00000028
.long 0x00000030
.long 0x00000038
.long 0x00000040
.long 0x00000048
.long 0x00000050
.long 0x00000058
.long 0x00000060
.long 0x00000068
.long 0x00000070
.long 0x00000078
.long 0x00000004
.long 0x0000000c
.long 0x00000014
.long 0x0000001c
.long 0x00000024
.long 0x0000002c
.long 0x00000034
.long 0x0000003c
.long 0x00000044
.long 0x0000004c
.long 0x00000054
.long 0x0000005c
.long 0x00000064
.long 0x0000006c
.long 0x00000074
.long 0x0000007c
.long 0x00000080
.long 0x00000088
.long 0x00000090
.long 0x00000098
.long 0x000000a0
.long 0x000000a8
.long 0x000000b0
.long 0x000000b8
.long 0x000000c0
.long 0x000000c8
.long 0x000000d0
.long 0x000000d8
.long 0x000000e0
.long 0x000000e8
.long 0x000000f0
.long 0x000000f8
.long 0x00000084
.long 0x0000008c
.long 0x00000094
.long 0x0000009c
.long 0x000000a4
.long 0x000000ac
.long 0x000000b4
.long 0x000000bc
.long 0x000000c4
.long 0x000000cc
.long 0x000000d4
.long 0x000000dc
.long 0x000000e4
.long 0x000000ec
.long 0x000000f4
.long 0x000000fc
.long 0x000000a0
.long 0x00000080
.long 0x000000b0
.long 0x00000090
.long 0x000000a8
.long 0x00000088
.long 0x000000b8
.long 0x00000098
.long 0x000000e0
.long 0x000000c0
.long 0x000000f0
.long 0x000000d0
.long 0x000000e8
.long 0x000000c8
.long 0x000000f8
.long 0x000000d8
.long 0x000001a0
.long 0x00000180
.long 0x000001b0
.long 0x00000190
.long 0x000001a8
.long 0x00000188
.long 0x000001b8
.long 0x00000198
.long 0x000001e0
.long 0x000001c0
.long 0x000001f0
.long 0x000001d0
.long 0x000001e8
.long 0x000001c8
.long 0x000001f8
.long 0x000001d8
.long 0x000002a0
.long 0x00000280
.long 0x000002b0
.long 0x00000290
.long 0x000002a8
.long 0x00000288
.long 0x000002b8
.long 0x00000298
.long 0x000002e0
.long 0x000002c0
.long 0x000002f0
.long 0x000002d0
.long 0x000002e8
.long 0x000002c8
.long 0x000002f8
.long 0x000002d8
.long 0x000003a0
.long 0x00000380
.long 0x000003b0
.long 0x00000390
.long 0x000003a8
.long 0x00000388
.long 0x000003b8
.long 0x00000398
.long 0x000003e0
.long 0x000003c0
.long 0x000003f0
.long 0x000003d0
.long 0x000003e8
.long 0x000003c8
.long 0x000003f8
.long 0x000003d8
.long 0x00000000
.long 0x00000020
.long 0x00000010
.long 0x00000030
.long 0x00000008
.long 0x00000028
.long 0x00000018
.long 0x00000038
.long 0x00000040
.long 0x00000060
.long 0x00000050
.long 0x00000070
.long 0x00000048
.long 0x00000068
.long 0x00000058
.long 0x00000078
.long 0x00000100
.long 0x00000120
.long 0x00000110
.long 0x00000130
.long 0x00000108
.long 0x00000128
.long 0x00000118
.long 0x00000138
.long 0x00000140
.long 0x00000160
.long 0x00000150
.long 0x00000170
.long 0x00000148
.long 0x00000168
.long 0x00000158
.long 0x00000178
.long 0x00000200
.long 0x00000220
.long 0x00000210
.long 0x00000230
.long 0x00000208
.long 0x00000228
.long 0x00000218
.long 0x00000238
.long 0x00000240
.long 0x00000260
.long 0x00000250
.long 0x00000270
.long 0x00000248
.long 0x00000268
.long 0x00000258
.long 0x00000278
.long 0x00000300
.long 0x00000320
.long 0x00000310
.long 0x00000330
.long 0x00000308
.long 0x00000328
.long 0x00000318
.long 0x00000338
.long 0x00000340
.long 0x00000360
.long 0x00000350
.long 0x00000370
.long 0x00000348
.long 0x00000368
.long 0x00000358
.long 0x00000378
.long 0x00000000
.long 0x000000a0
.long 0x000000e0
.long 0x00000040
.long 0x00000008
.long 0x000000a8
.long 0x000000e8
.long 0x00000048
.long 0x00000010
.long 0x000000b0
.long 0x000000f0
.long 0x00000050
.long 0x00000018
.long 0x000000b8
.long 0x000000f8
.long 0x00000058
.long 0x00000020
.long 0x00000080
.long 0x000000c0
.long 0x00000060
.long 0x00000028
.long 0x00000088
.long 0x000000c8
.long 0x00000068
.long 0x00000030
.long 0x00000090
.long 0x000000d0
.long 0x00000070
.long 0x00000038
.long 0x00000098
.long 0x000000d8
.long 0x00000078
.long 0x00000100
.long 0x000001a0
.long 0x000001e0
.long 0x00000140
.long 0x00000108
.long 0x000001a8
.long 0x000001e8
.long 0x00000148
.long 0x00000110
.long 0x000001b0
.long 0x000001f0
.long 0x00000150
.long 0x00000118
.long 0x000001b8
.long 0x000001f8
.long 0x00000158
.long 0x00000120
.long 0x00000180
.long 0x000001c0
.long 0x00000160
.long 0x00000128
.long 0x00000188
.long 0x000001c8
.long 0x00000168
.long 0x00000130
.long 0x00000190
.long 0x000001d0
.long 0x00000170
.long 0x00000138
.long 0x00000198
.long 0x000001d8
.long 0x00000178
v_or_b32_e32 v0, s0, v28
v_lshlrev_b32_e32 v0, s0, v26
s_cmpk_le_i32 s0, 0xb400
v_or_b32_e32 v0, s0, v28
v_xnor_b32_e32 v0, s0, v30
v_or_b32_e32 v0, s0, v28
s_mulk_i32 s0, 0xb800
v_xnor_b32_e32 v0, s0, v30
.long 0x00000000
v_xnor_b32_e32 v0, s0, v30
s_waitcnt_vmcnt s0, 0xbc00
.long 0x00000000
v_xnor_b32_e32 v0, s0, v30
v_xnor_b32_e32 v0, s0, v30
v_xnor_b32_e32 v0, s0, v30
s_waitcnt_vmcnt s0, 0xbc00
s_waitcnt_vmcnt s0, 0xbc00
v_xnor_b32_e32 v0, s0, v30
s_waitcnt_vmcnt s0, 0xbc00
s_waitcnt_vmcnt s0, 0xbc00
.long 0x00000000
.long 0x00000004
.long 0x00000010
.long 0x00000014
.long 0x00000030
.long 0x00000034
.long 0x00000020
.long 0x00000024
.long 0x00000008
.long 0x0000000c
.long 0x00000018
.long 0x0000001c
.long 0x00000038
.long 0x0000003c
.long 0x00000028
.long 0x0000002c
.long 0x00001040
.long 0x00001044
.long 0x00001050
.long 0x00001054
.long 0x00001070
.long 0x00001074
.long 0x00001060
.long 0x00001064
.long 0x00001048
.long 0x0000104c
.long 0x00001058
.long 0x0000105c
.long 0x00001078
.long 0x0000107c
.long 0x00001068
.long 0x0000106c
.long 0x00000040
.long 0x00000044
.long 0x00000050
.long 0x00000054
.long 0x00000070
.long 0x00000074
.long 0x00000060
.long 0x00000064
.long 0x00000048
.long 0x0000004c
.long 0x00000058
.long 0x0000005c
.long 0x00000078
.long 0x0000007c
.long 0x00000068
.long 0x0000006c
.long 0x00001080
.long 0x00001084
.long 0x00001090
.long 0x00001094
.long 0x000010b0
.long 0x000010b4
.long 0x000010a0
.long 0x000010a4
.long 0x00001088
.long 0x0000108c
.long 0x00001098
.long 0x0000109c
.long 0x000010b8
.long 0x000010bc
.long 0x000010a8
.long 0x000010ac
s_endpgm
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_nop 0
s_code_end
s_code_end
s_code_end
s_code_end
s_code_end
