// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_MULDIV_H_
#define VERILATED_VNPC_YSYX_22050598_MULDIV_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi11;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi12;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;


class Vnpc_ysyx_22050598_muldiv final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi7* __PVT__ysyx_22050598_muldiv_ctrl;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10* __PVT__ysyx_22050598_booth_set_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10* __PVT__ysyx_22050598_booth_inv_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi10* __PVT__ysyx_22050598_booth_mul_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi11* __PVT__ysyx_22050598_muldiv_cnt;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ysyx_22050598_div_rs1_sign_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ysyx_22050598_div_rs2_sign_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi6* __PVT__ysyx_22050598_div_cin_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi12* __PVT__ysyx_22050598_muldiv_res_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi12* __PVT__ysyx_22050598_muldiv_op2_reg;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__ysyx_22050598_div_q_reg;

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(__PVT__clk,0,0);
        VL_IN8(__PVT__rst,0,0);
        VL_IN8(__PVT__mul_valid,0,0);
        VL_IN8(__PVT__div_valid,0,0);
        VL_IN8(__PVT__muldiv_flush,0,0);
        VL_IN8(__PVT__muldivw,0,0);
        VL_IN8(__PVT__mul_signed,1,0);
        VL_IN8(__PVT__div_signed,0,0);
        VL_OUT8(__PVT__muldiv_ready,0,0);
        VL_OUT8(__PVT__out_valid,0,0);
        CData/*0:0*/ __PVT__mul_is_valid;
        CData/*0:0*/ __PVT__div_is_valid;
        CData/*6:0*/ __PVT__muldiv_cnt_r;
        CData/*1:0*/ __PVT__muldiv_state_r;
        CData/*0:0*/ __PVT__sta_is_idle;
        CData/*0:0*/ __PVT__sta_is_mul;
        CData/*0:0*/ __PVT__sta_is_div;
        CData/*0:0*/ __PVT__sta_is_done;
        CData/*0:0*/ __PVT__sta_is_idle_exit_ena;
        CData/*0:0*/ __PVT__sta_is_mul_exit_ena;
        CData/*0:0*/ __PVT__sta_is_div_exit_ena;
        CData/*0:0*/ __PVT__sta_is_done_exit_ena;
        CData/*1:0*/ __PVT__sta_is_idle_nxt;
        CData/*1:0*/ __PVT__sta_is_mul_nxt;
        CData/*1:0*/ __PVT__sta_is_div_nxt;
        CData/*1:0*/ __PVT__sta_is_done_nxt;
        CData/*1:0*/ __PVT__temp_muldiv_state_next;
        CData/*0:0*/ __PVT__muldiv_ena;
        CData/*1:0*/ __PVT__muldiv_state_next;
        CData/*0:0*/ __PVT__mul_rs1_sign;
        CData/*0:0*/ __PVT__mul_rs2_sign;
        CData/*0:0*/ __PVT__mul_start_ena;
        CData/*0:0*/ __PVT__booth_ena;
        CData/*0:0*/ __PVT__mul_cnt_ena;
        CData/*0:0*/ __PVT__mul_ena;
        CData/*6:0*/ __PVT__mul_cnt_next;
        CData/*0:0*/ __PVT__div_start_ena;
        CData/*0:0*/ __PVT__div_rs1_sign;
        CData/*0:0*/ __PVT__div_rs2_sign;
        CData/*0:0*/ __PVT__div_rs1_sign_r;
        CData/*0:0*/ __PVT__div_rs2_sign_r;
        CData/*0:0*/ __PVT__div_cin_r;
        CData/*0:0*/ __PVT__div_fix_ena;
        CData/*0:0*/ __PVT__add_sub_cin;
        CData/*0:0*/ __PVT__div_cin_ena;
        CData/*0:0*/ __PVT__div_cin;
        CData/*0:0*/ __PVT__muldiv_res_reg_ena;
        CData/*0:0*/ __PVT__muldiv_op2_reg_ena;
        CData/*0:0*/ __PVT__div_q_ena;
        CData/*0:0*/ __PVT__div_op_01;
        CData/*0:0*/ __PVT__div_op_10;
        CData/*0:0*/ __PVT__div_op_11;
        VlWide<3>/*64:0*/ __PVT__temp_multiplicand;
        VlWide<3>/*66:0*/ __PVT__temp_booth_multiplier;
        VlWide<5>/*129:0*/ __PVT__muldiv_res_r;
        VlWide<5>/*129:0*/ __PVT__muldiv_op2_r;
        VlWide<5>/*129:0*/ __PVT__mul_op1;
        VlWide<5>/*129:0*/ __PVT__mul_op2;
        VlWide<5>/*129:0*/ __PVT__divw_op1;
        VlWide<5>/*129:0*/ __PVT__div_op1;
        VlWide<5>/*129:0*/ __PVT__div_op2;
        VlWide<5>/*129:0*/ __PVT__adder_op1;
        VlWide<5>/*129:0*/ __PVT__adder_op2;
        VlWide<5>/*129:0*/ __PVT__add_sub_in_a;
    };
    struct {
        VlWide<5>/*129:0*/ __PVT__add_sub_in_b;
        VlWide<5>/*129:0*/ __PVT__sum_sub_data;
        VlWide<4>/*126:0*/ __PVT__temp_divw_res;
        VlWide<4>/*126:0*/ __PVT__temp_div_res;
        VlWide<5>/*129:0*/ __PVT__muldiv_res;
        VlWide<5>/*129:0*/ __PVT__temp_mul_op2;
        VlWide<5>/*129:0*/ __PVT__temp_muldiv_op2;
        VL_IN64(__PVT__muldiv_rs1,63,0);
        VL_IN64(__PVT__muldiv_rs2,63,0);
        VL_OUT64(__PVT__result_hi,63,0);
        VL_OUT64(__PVT__result_lo,63,0);
        VL_OUT64(__PVT__quotient,63,0);
        VL_OUT64(__PVT__remainder,63,0);
        QData/*32:0*/ __PVT__booth_set;
        QData/*32:0*/ __PVT__booth_inv;
        QData/*32:0*/ __PVT__booth_mul;
        QData/*32:0*/ __PVT__booth_set_r;
        QData/*32:0*/ __PVT__booth_inv_r;
        QData/*32:0*/ __PVT__booth_mul_r;
        QData/*63:0*/ __PVT__div_op1_sign;
        QData/*63:0*/ __PVT__div_op2_sign;
        QData/*63:0*/ __PVT__temp_div_op1;
        QData/*63:0*/ __PVT__temp_div_op2;
        QData/*63:0*/ __PVT__div_q_r;
        QData/*63:0*/ __PVT__divw_q;
        QData/*63:0*/ __PVT__div_q;
        QData/*63:0*/ __PVT__div_is_valid_q;
        QData/*63:0*/ __PVT__temp_div_rem;
        QData/*63:0*/ __PVT__div_is_valid_rem;
        VlUnpacked<CData/*2:0*/, 33> __PVT__booth_bits;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_muldiv(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_muldiv();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_muldiv);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
