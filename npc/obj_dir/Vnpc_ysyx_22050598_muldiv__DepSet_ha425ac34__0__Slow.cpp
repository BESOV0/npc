// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_muldiv.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__0(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__0\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hf90f8fcb__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e800197__0;
    VlWide<5>/*159:0*/ __Vtemp_h67e2311d__0;
    VlWide<5>/*159:0*/ __Vtemp_h9dade861__0;
    VlWide<5>/*159:0*/ __Vtemp_h7046690f__0;
    CData/*31:0*/ __Vtemp_h6e032526__0;
    VlWide<5>/*159:0*/ __Vtemp_hecf3255e__0;
    CData/*31:0*/ __Vtemp_h2356b545__0;
    VlWide<5>/*159:0*/ __Vtemp_h2ed98308__0;
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__0;
    VlWide<5>/*159:0*/ __Vtemp_he014438f__0;
    VlWide<5>/*159:0*/ __Vtemp_h449c6b6b__0;
    VlWide<5>/*159:0*/ __Vtemp_hea5e3ed7__0;
    VlWide<5>/*159:0*/ __Vtemp_h5fe0d5e4__0;
    VlWide<5>/*159:0*/ __Vtemp_h8bb75469__0;
    VlWide<5>/*159:0*/ __Vtemp_hd7ab6a1e__0;
    VlWide<5>/*159:0*/ __Vtemp_h4a4c2b2d__0;
    VlWide<5>/*159:0*/ __Vtemp_hca90bdac__0;
    VlWide<5>/*159:0*/ __Vtemp_hbacb55b7__0;
    VlWide<5>/*159:0*/ __Vtemp_h412f88f5__0;
    VlWide<5>/*159:0*/ __Vtemp_hb289c961__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e800112__0;
    VlWide<5>/*159:0*/ __Vtemp_h994cd1ca__0;
    VlWide<5>/*159:0*/ __Vtemp_he027fe47__0;
    VlWide<5>/*159:0*/ __Vtemp_hd067e2b8__0;
    // Body
    vlSelf->__PVT__div_q_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_q_reg.__PVT__qout;
    vlSelf->__PVT__booth_set_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_set_reg.__PVT__qout;
    vlSelf->__PVT__booth_mul_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_mul_reg.__PVT__qout;
    vlSelf->__PVT__booth_inv_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_inv_reg.__PVT__qout;
    VL_ASSIGN_W(130,vlSelf->__PVT__muldiv_op2_r, vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_op2_reg.__PVT__qout);
    vlSelf->__PVT__div_rs1_sign_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs1_sign_reg.__PVT__qout;
    vlSelf->__PVT__div_rs2_sign_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs2_sign_reg.__PVT__qout;
    vlSelf->__PVT__muldiv_cnt_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_cnt.__PVT__qout;
    VL_ASSIGN_W(130,vlSelf->__PVT__muldiv_res_r, vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_res_reg.__PVT__qout);
    vlSelf->__PVT__div_cin_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_cin_reg.__PVT__qout;
    vlSelf->__PVT__muldiv_state_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_ctrl.__PVT__qout;
    VL_ASSIGN_W(130,vlSelf->__PVT__div_op2, vlSelf->__PVT__muldiv_op2_r);
    vlSelf->__PVT__div_op_01 = ((~ (IData)(vlSelf->__PVT__div_rs1_sign_r)) 
                                & (IData)(vlSelf->__PVT__div_rs2_sign_r));
    vlSelf->__PVT__div_op_11 = ((IData)(vlSelf->__PVT__div_rs1_sign_r) 
                                & (IData)(vlSelf->__PVT__div_rs2_sign_r));
    vlSelf->__PVT__div_op_10 = ((IData)(vlSelf->__PVT__div_rs1_sign_r) 
                                & (~ (IData)(vlSelf->__PVT__div_rs2_sign_r)));
    VL_CONST_W_1X(130,__Vtemp_hf90f8fcb__0,0x00000000);
    VL_CONST_W_5X(160,__Vtemp_h0e800197__0,0x00000001,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_SEL_WWII(129,130, __Vtemp_h67e2311d__0, vlSelf->__PVT__muldiv_op2_r, 0U, 0x81U);
    VL_AND_W(5, __Vtemp_h9dade861__0, __Vtemp_h0e800197__0, __Vtemp_h67e2311d__0);
    VL_CONCAT_WWI(130,129,1, __Vtemp_h7046690f__0, __Vtemp_h9dade861__0, 0U);
    __Vtemp_h6e032526__0 = ((0x20U >= (0x3fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))) 
                            & VL_BITSEL_IQII(33, vlSelf->__PVT__booth_mul_r, 
                                             (0x3fU 
                                              & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))));
    VL_COND_WIWW(130, __Vtemp_hecf3255e__0, __Vtemp_h6e032526__0, __Vtemp_h7046690f__0, vlSelf->__PVT__muldiv_op2_r);
    __Vtemp_h2356b545__0 = ((0x20U >= (0x3fU & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))) 
                            & VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set_r, 
                                             (0x3fU 
                                              & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))));
    VL_COND_WIWW(130, __Vtemp_h2ed98308__0, __Vtemp_h2356b545__0, __Vtemp_hf90f8fcb__0, __Vtemp_hecf3255e__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_op2, __Vtemp_h2ed98308__0);
    vlSelf->__PVT__result_hi = VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x40U, 0x40U);
    vlSelf->__PVT__result_lo = VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0U, 0x40U);
    VL_ASSIGN_W(130,vlSelf->__PVT__mul_op1, vlSelf->__PVT__muldiv_res_r);
    vlSelf->__PVT__sta_is_mul = (1U == (IData)(vlSelf->__PVT__muldiv_state_r));
    vlSelf->__PVT__sta_is_div = (2U == (IData)(vlSelf->__PVT__muldiv_state_r));
    vlSelf->__PVT__sta_is_done = (3U == (IData)(vlSelf->__PVT__muldiv_state_r));
    vlSelf->__PVT__sta_is_idle = (0U == (IData)(vlSelf->__PVT__muldiv_state_r));
    vlSelf->__PVT__mul_cnt_next = (0x7fU & (VL_REPLICATE_IOI(1,
                                                             ((IData)(vlSelf->__PVT__sta_is_mul) 
                                                              | (IData)(vlSelf->__PVT__sta_is_div)), 7U) 
                                            & ((IData)(1U) 
                                               + (IData)(vlSelf->__PVT__muldiv_cnt_r))));
    vlSelf->__PVT__add_sub_cin = ((((0x20U >= (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))) 
                                    & VL_BITSEL_IQII(33, vlSelf->__PVT__booth_inv_r, 
                                                     (0x3fU 
                                                      & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U)))) 
                                   & (IData)(vlSelf->__PVT__sta_is_mul)) 
                                  | ((~ (IData)(vlSelf->__PVT__div_cin_r)) 
                                     & (IData)(vlSelf->__PVT__sta_is_div)));
    vlSelf->__PVT__sta_is_done_exit_ena = vlSelf->__PVT__sta_is_done;
    vlSelf->__PVT__div_is_valid_q = (vlSelf->__PVT__div_q_r 
                                     & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__sta_is_done), 0x40U));
    vlSelf->__PVT__out_valid = vlSelf->__PVT__sta_is_done;
    vlSelf->__PVT__div_fix_ena = ((IData)(vlSelf->__PVT__div_cin_r) 
                                  & (IData)(vlSelf->__PVT__sta_is_done));
    vlSelf->__PVT__div_cin_ena = ((IData)(vlSelf->__PVT__sta_is_div) 
                                  | (IData)(vlSelf->__PVT__sta_is_idle));
    vlSelf->__PVT__mul_cnt_ena = (((IData)(vlSelf->__PVT__sta_is_mul) 
                                   | (IData)(vlSelf->__PVT__sta_is_idle)) 
                                  | (IData)(vlSelf->__PVT__sta_is_div));
    vlSelf->__PVT__muldiv_ready = vlSelf->__PVT__sta_is_idle;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_cnt.__PVT__dnxt 
        = vlSelf->__PVT__mul_cnt_next;
    vlSelf->__PVT__quotient = (((IData)(vlSelf->__PVT__div_op_01) 
                                | (IData)(vlSelf->__PVT__div_op_10))
                                ? (1ULL + (~ vlSelf->__PVT__div_is_valid_q))
                                : vlSelf->__PVT__div_is_valid_q);
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__0, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_AND_W(5, __Vtemp_he014438f__0, vlSelf->__PVT__mul_op2, __Vtemp_h8ffe3643__0);
    VL_REPLICATE_WII(1, __Vtemp_h449c6b6b__0, ((IData)(vlSelf->__PVT__sta_is_div) 
                                               | (IData)(vlSelf->__PVT__div_fix_ena)), 0x82U);
    VL_AND_W(5, __Vtemp_hea5e3ed7__0, vlSelf->__PVT__div_op2, __Vtemp_h449c6b6b__0);
    VL_OR_W(5, __Vtemp_h5fe0d5e4__0, __Vtemp_he014438f__0, __Vtemp_hea5e3ed7__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__adder_op2, __Vtemp_h5fe0d5e4__0);
    VL_EXTEND_WQ(130,33, __Vtemp_h8bb75469__0, (0x1ffffffffULL 
                                                & VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x1fU, 0x21U)));
    VL_REPLICATE_WII(1, __Vtemp_hd7ab6a1e__0, (IData)(vlSelf->__PVT__sta_is_div), 0x82U);
    VL_AND_W(5, __Vtemp_h4a4c2b2d__0, __Vtemp_h8bb75469__0, __Vtemp_hd7ab6a1e__0);
    VL_EXTEND_WI(130,32, __Vtemp_hca90bdac__0, VL_SEL_IWII(130, vlSelf->__PVT__muldiv_res_r, 0x20U, 0x20U));
    VL_REPLICATE_WII(1, __Vtemp_hbacb55b7__0, (IData)(vlSelf->__PVT__div_fix_ena), 0x82U);
    VL_AND_W(5, __Vtemp_h412f88f5__0, __Vtemp_hca90bdac__0, __Vtemp_hbacb55b7__0);
    VL_OR_W(5, __Vtemp_hb289c961__0, __Vtemp_h4a4c2b2d__0, __Vtemp_h412f88f5__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__divw_op1, __Vtemp_hb289c961__0);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_cin_reg.__PVT__lden 
        = vlSelf->__PVT__div_cin_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_cnt.__PVT__lden 
        = vlSelf->__PVT__mul_cnt_ena;
    VL_CONST_W_5X(160,__Vtemp_h0e800112__0,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_NOT_W(5, __Vtemp_h994cd1ca__0, vlSelf->__PVT__adder_op2);
    VL_COND_WIWW(130, __Vtemp_he027fe47__0, (IData)(vlSelf->__PVT__add_sub_cin), __Vtemp_h994cd1ca__0, vlSelf->__PVT__adder_op2);
    VL_AND_W(5, __Vtemp_hd067e2b8__0, __Vtemp_h0e800112__0, __Vtemp_he027fe47__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__add_sub_in_b, __Vtemp_hd067e2b8__0);
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__1(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__1\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h84fca685__0;
    VlWide<3>/*95:0*/ __Vtemp_h5f0671cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h32a3dadb__0;
    VlWide<5>/*159:0*/ __Vtemp_ha7f0f0b4__0;
    VlWide<5>/*159:0*/ __Vtemp_hd7ab6a1e__0;
    VlWide<5>/*159:0*/ __Vtemp_hd3cbc198__0;
    VlWide<5>/*159:0*/ __Vtemp_h3962d6f0__0;
    VlWide<5>/*159:0*/ __Vtemp_hbacb55b7__0;
    VlWide<5>/*159:0*/ __Vtemp_h74d87cdf__0;
    VlWide<5>/*159:0*/ __Vtemp_h8195ca8e__0;
    VlWide<5>/*159:0*/ __Vtemp_h6a8afb16__0;
    VlWide<3>/*95:0*/ __Vtemp_ha52bc9ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hc80b4773__0;
    VlWide<3>/*95:0*/ __Vtemp_h99399293__0;
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__0;
    VlWide<5>/*159:0*/ __Vtemp_h8bc74492__0;
    VlWide<5>/*159:0*/ __Vtemp_h449c6b6b__0;
    VlWide<5>/*159:0*/ __Vtemp_hbcd3108f__0;
    VlWide<5>/*159:0*/ __Vtemp_h359543b9__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e800112__0;
    VlWide<5>/*159:0*/ __Vtemp_h3ba248c9__0;
    VlWide<5>/*159:0*/ __Vtemp_h50bebd4c__0;
    VlWide<5>/*159:0*/ __Vtemp_h74320afb__0;
    VlWide<5>/*159:0*/ __Vtemp_hba95cf1f__0;
    VlWide<3>/*95:0*/ __Vtemp_h142314f4__0;
    VlWide<4>/*127:0*/ __Vtemp_hc9bc0720__0;
    VlWide<4>/*127:0*/ __Vtemp_h03e90d35__0;
    VlWide<4>/*127:0*/ __Vtemp_h5f4542bc__0;
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_ctrl.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_set_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_inv_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_mul_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_cnt.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs1_sign_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs2_sign_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_cin_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_res_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_op2_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_q_reg.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_ctrl.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_set_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_inv_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_mul_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_cnt.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs1_sign_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs2_sign_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_cin_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_res_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_op2_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_q_reg.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSelf->__PVT__mul_rs1_sign = (VL_REDOR_I((IData)(vlSelf->__PVT__mul_signed)) 
                                   & ((VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x3fU) 
                                       & (~ (IData)(vlSelf->__PVT__muldivw))) 
                                      | (VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x1fU) 
                                         & (IData)(vlSelf->__PVT__muldivw))));
    vlSelf->__PVT__sta_is_mul_exit_ena = ((IData)(vlSelf->__PVT__muldivw)
                                           ? ((IData)(vlSelf->__PVT__sta_is_mul) 
                                              & (0x10U 
                                                 == (IData)(vlSelf->__PVT__muldiv_cnt_r)))
                                           : ((IData)(vlSelf->__PVT__sta_is_mul) 
                                              & (0x20U 
                                                 == (IData)(vlSelf->__PVT__muldiv_cnt_r))));
    vlSelf->__PVT__sta_is_div_exit_ena = ((IData)(vlSelf->__PVT__muldivw)
                                           ? ((IData)(vlSelf->__PVT__sta_is_div) 
                                              & (0x1fU 
                                                 == (IData)(vlSelf->__PVT__muldiv_cnt_r)))
                                           : ((IData)(vlSelf->__PVT__sta_is_div) 
                                              & (0x3fU 
                                                 == (IData)(vlSelf->__PVT__muldiv_cnt_r))));
    vlSelf->__PVT__div_rs2_sign = ((((~ (IData)(vlSelf->__PVT__muldivw)) 
                                     & (IData)(vlSelf->__PVT__div_signed)) 
                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x3fU)) 
                                   | (((IData)(vlSelf->__PVT__muldivw) 
                                       & (IData)(vlSelf->__PVT__div_signed)) 
                                      & VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x1fU)));
    vlSelf->__PVT__div_rs1_sign = ((((~ (IData)(vlSelf->__PVT__muldivw)) 
                                     & (IData)(vlSelf->__PVT__div_signed)) 
                                    & VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x3fU)) 
                                   | (((IData)(vlSelf->__PVT__muldivw) 
                                       & (IData)(vlSelf->__PVT__div_signed)) 
                                      & VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x1fU)));
    vlSelf->__PVT__temp_div_rem = ((VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x40U, 0x40U) 
                                    & VL_REPLICATE_QOI(1,
                                                       ((IData)(vlSelf->__PVT__sta_is_done) 
                                                        & (~ (IData)(vlSelf->__PVT__muldivw))), 0x40U)) 
                                   | (VL_EXTEND_QI(64,32, 
                                                   VL_SEL_IWII(130, vlSelf->__PVT__muldiv_res_r, 0x20U, 0x20U)) 
                                      & VL_REPLICATE_QOI(1,
                                                         ((IData)(vlSelf->__PVT__sta_is_done) 
                                                          & (IData)(vlSelf->__PVT__muldivw)), 0x40U)));
    VL_CONST_W_3X(96,__Vtemp_h84fca685__0,0x00000001,0xffffffff,0xffffffff);
    VL_SEL_WWII(65,130, __Vtemp_h5f0671cb__0, vlSelf->__PVT__muldiv_res_r, 0x3fU, 0x41U);
    VL_AND_W(3, __Vtemp_h32a3dadb__0, __Vtemp_h84fca685__0, __Vtemp_h5f0671cb__0);
    VL_EXTEND_WW(130,65, __Vtemp_ha7f0f0b4__0, __Vtemp_h32a3dadb__0);
    VL_REPLICATE_WII(1, __Vtemp_hd7ab6a1e__0, (IData)(vlSelf->__PVT__sta_is_div), 0x82U);
    VL_AND_W(5, __Vtemp_hd3cbc198__0, __Vtemp_ha7f0f0b4__0, __Vtemp_hd7ab6a1e__0);
    VL_EXTEND_WQ(130,64, __Vtemp_h3962d6f0__0, VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x40U, 0x40U));
    VL_REPLICATE_WII(1, __Vtemp_hbacb55b7__0, (IData)(vlSelf->__PVT__div_fix_ena), 0x82U);
    VL_AND_W(5, __Vtemp_h74d87cdf__0, __Vtemp_h3962d6f0__0, __Vtemp_hbacb55b7__0);
    VL_OR_W(5, __Vtemp_h8195ca8e__0, __Vtemp_hd3cbc198__0, __Vtemp_h74d87cdf__0);
    VL_COND_WIWW(130, __Vtemp_h6a8afb16__0, (IData)(vlSelf->__PVT__muldivw), vlSelf->__PVT__divw_op1, __Vtemp_h8195ca8e__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__div_op1, __Vtemp_h6a8afb16__0);
    vlSelf->__PVT__mul_rs2_sign = (1U & ((~ ((~ VL_REDOR_I((IData)(vlSelf->__PVT__mul_signed))) 
                                             | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mul_signed), 1U) 
                                                & (~ 
                                                   VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mul_signed), 0U))))) 
                                         & ((VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x3fU) 
                                             & (~ (IData)(vlSelf->__PVT__muldivw))) 
                                            | (VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x1fU) 
                                               & (IData)(vlSelf->__PVT__muldivw)))));
    VL_CONCAT_WQI(65,33,32, __Vtemp_ha52bc9ed__0, (0x1ffffffffULL 
                                                   & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__mul_rs1_sign), 0x21U)), 
                  VL_SEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0U, 0x20U));
    VL_CONCAT_WIQ(65,1,64, __Vtemp_hc80b4773__0, (IData)(vlSelf->__PVT__mul_rs1_sign), vlSelf->__PVT__muldiv_rs1);
    VL_COND_WIWW(65, __Vtemp_h99399293__0, (IData)(vlSelf->__PVT__muldivw), __Vtemp_ha52bc9ed__0, __Vtemp_hc80b4773__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__temp_multiplicand, __Vtemp_h99399293__0);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs2_sign_reg.__PVT__dnxt 
        = vlSelf->__PVT__div_rs2_sign;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs1_sign_reg.__PVT__dnxt 
        = vlSelf->__PVT__div_rs1_sign;
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__0, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_AND_W(5, __Vtemp_h8bc74492__0, vlSelf->__PVT__mul_op1, __Vtemp_h8ffe3643__0);
    VL_REPLICATE_WII(1, __Vtemp_h449c6b6b__0, ((IData)(vlSelf->__PVT__sta_is_div) 
                                               | (IData)(vlSelf->__PVT__div_fix_ena)), 0x82U);
    VL_AND_W(5, __Vtemp_hbcd3108f__0, vlSelf->__PVT__div_op1, __Vtemp_h449c6b6b__0);
    VL_OR_W(5, __Vtemp_h359543b9__0, __Vtemp_h8bc74492__0, __Vtemp_hbcd3108f__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__adder_op1, __Vtemp_h359543b9__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__add_sub_in_a, vlSelf->__PVT__adder_op1);
    VL_CONST_W_5X(160,__Vtemp_h0e800112__0,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_ADD_W(5, __Vtemp_h3ba248c9__0, vlSelf->__PVT__add_sub_in_a, vlSelf->__PVT__add_sub_in_b);
    VL_EXTEND_WI(130,1, __Vtemp_h50bebd4c__0, (IData)(vlSelf->__PVT__add_sub_cin));
    VL_ADD_W(5, __Vtemp_h74320afb__0, __Vtemp_h3ba248c9__0, __Vtemp_h50bebd4c__0);
    VL_AND_W(5, __Vtemp_hba95cf1f__0, __Vtemp_h0e800112__0, __Vtemp_h74320afb__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__sum_sub_data, __Vtemp_hba95cf1f__0);
    vlSelf->__PVT__div_cin = ((((IData)(vlSelf->__PVT__sta_is_div) 
                                & VL_BITSEL_IWII(130, vlSelf->__PVT__sum_sub_data, 0x40U)) 
                               & (~ (IData)(vlSelf->__PVT__muldivw))) 
                              | (((IData)(vlSelf->__PVT__sta_is_div) 
                                  & VL_BITSEL_IWII(130, vlSelf->__PVT__sum_sub_data, 0x20U)) 
                                 & (IData)(vlSelf->__PVT__muldivw)));
    vlSelf->__PVT__divw_q = (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__sta_is_div), 0x40U) 
                             & VL_CONCAT_QQI(64,63,1, 
                                             VL_EXTEND_QI(63,31, 
                                                          (0x7fffffffU 
                                                           & VL_SEL_IQII(64, vlSelf->__PVT__div_q_r, 0U, 0x1fU))), 
                                             (1U & 
                                              (~ VL_BITSEL_IWII(130, vlSelf->__PVT__sum_sub_data, 0x20U)))));
    VL_EXTEND_WI(96,32, __Vtemp_h142314f4__0, VL_SEL_IWII(130, vlSelf->__PVT__sum_sub_data, 0U, 0x20U));
    VL_CONCAT_WWI(127,96,31, __Vtemp_hc9bc0720__0, __Vtemp_h142314f4__0, 
                  (0x7fffffffU & VL_SEL_IWII(130, vlSelf->__PVT__muldiv_res_r, 0U, 0x1fU)));
    VL_ASSIGN_W(127,vlSelf->__PVT__temp_divw_res, __Vtemp_hc9bc0720__0);
    vlSelf->__PVT__div_is_valid_rem = ((IData)(vlSelf->__PVT__div_fix_ena)
                                        ? VL_SEL_QWII(130, vlSelf->__PVT__sum_sub_data, 0U, 0x40U)
                                        : vlSelf->__PVT__temp_div_rem);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_cin_reg.__PVT__dnxt 
        = vlSelf->__PVT__div_cin;
    vlSelf->__PVT__div_q = ((IData)(vlSelf->__PVT__muldivw)
                             ? vlSelf->__PVT__divw_q
                             : (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__sta_is_div), 0x40U) 
                                & VL_CONCAT_QQI(64,63,1, 
                                                (0x7fffffffffffffffULL 
                                                 & VL_SEL_QQII(64, vlSelf->__PVT__div_q_r, 0U, 0x3fU)), 
                                                (1U 
                                                 & (~ 
                                                    VL_BITSEL_IWII(130, vlSelf->__PVT__sum_sub_data, 0x40U))))));
    VL_CONCAT_WQQ(127,64,63, __Vtemp_h03e90d35__0, 
                  VL_SEL_QWII(130, vlSelf->__PVT__sum_sub_data, 0U, 0x40U), 
                  (0x7fffffffffffffffULL & VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0U, 0x3fU)));
    VL_COND_WIWW(127, __Vtemp_h5f4542bc__0, (IData)(vlSelf->__PVT__muldivw), vlSelf->__PVT__temp_divw_res, __Vtemp_h03e90d35__0);
    VL_ASSIGN_W(127,vlSelf->__PVT__temp_div_res, __Vtemp_h5f4542bc__0);
    vlSelf->__PVT__remainder = (((IData)(vlSelf->__PVT__div_op_10) 
                                 | (IData)(vlSelf->__PVT__div_op_11))
                                 ? (1ULL + (~ vlSelf->__PVT__div_is_valid_rem))
                                 : vlSelf->__PVT__div_is_valid_rem);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_q_reg.__PVT__dnxt 
        = vlSelf->__PVT__div_q;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__2(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___stl_sequent__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__2\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h24fa9146__0;
    VlWide<3>/*95:0*/ __Vtemp_h84fca685__0;
    VlWide<3>/*95:0*/ __Vtemp_h2449f3ff__0;
    VlWide<3>/*95:0*/ __Vtemp_h5a7221bd__0;
    VlWide<5>/*159:0*/ __Vtemp_h43f0d9ed__0;
    VlWide<5>/*159:0*/ __Vtemp_h0e587d9c__0;
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__0;
    VlWide<4>/*127:0*/ __Vtemp_h6d446f85__0;
    VlWide<5>/*159:0*/ __Vtemp_h25738a3c__0;
    VlWide<5>/*159:0*/ __Vtemp_hcd3fcad1__0;
    VlWide<5>/*159:0*/ __Vtemp_h7759a7c1__0;
    VlWide<3>/*95:0*/ __Vtemp_h32a52cdb__0;
    VlWide<3>/*95:0*/ __Vtemp_h241323e6__0;
    VlWide<3>/*95:0*/ __Vtemp_hab526e88__0;
    VlWide<3>/*95:0*/ __Vtemp_hb7304129__0;
    VlWide<3>/*95:0*/ __Vtemp_h79e3ce45__0;
    VlWide<3>/*95:0*/ __Vtemp_h241323e6__1;
    VlWide<3>/*95:0*/ __Vtemp_h8f740410__0;
    VlWide<3>/*95:0*/ __Vtemp_hb42e4fd1__0;
    VlWide<5>/*159:0*/ __Vtemp_hfaa6fc8a__0;
    VlWide<5>/*159:0*/ __Vtemp_heb301e2c__0;
    VlWide<5>/*159:0*/ __Vtemp_h57a7246d__0;
    VlWide<5>/*159:0*/ __Vtemp_he649d2a2__0;
    VlWide<5>/*159:0*/ __Vtemp_h156d0f29__0;
    VlWide<5>/*159:0*/ __Vtemp_h48628ca9__0;
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__1;
    VlWide<5>/*159:0*/ __Vtemp_h4a471511__0;
    VlWide<5>/*159:0*/ __Vtemp_hfaa6fc8a__1;
    VlWide<5>/*159:0*/ __Vtemp_h01ede4fe__0;
    VlWide<5>/*159:0*/ __Vtemp_h1f9c7e2e__0;
    VlWide<5>/*159:0*/ __Vtemp_h3150a026__0;
    VlWide<5>/*159:0*/ __Vtemp_hd7ab6a1e__0;
    VlWide<5>/*159:0*/ __Vtemp_hee58a6a6__0;
    VlWide<5>/*159:0*/ __Vtemp_h94725da2__0;
    VlWide<5>/*159:0*/ __Vtemp_ha6c5caf9__0;
    VlWide<5>/*159:0*/ __Vtemp_h67e3189d__0;
    // Body
    vlSelf->__PVT__div_is_valid = ((IData)(vlSelf->__PVT__div_valid) 
                                   & (~ (IData)(vlSelf->__PVT__muldiv_flush)));
    vlSelf->__PVT__mul_is_valid = ((IData)(vlSelf->__PVT__mul_valid) 
                                   & (~ (IData)(vlSelf->__PVT__muldiv_flush)));
    vlSelf->__PVT__div_start_ena = ((IData)(vlSelf->__PVT__sta_is_idle) 
                                    & (IData)(vlSelf->__PVT__div_is_valid));
    vlSelf->__PVT__sta_is_idle_nxt = ((1U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__mul_is_valid), 2U)) 
                                      | (2U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__div_is_valid), 2U)));
    vlSelf->__PVT__sta_is_idle_exit_ena = ((IData)(vlSelf->__PVT__sta_is_idle) 
                                           & ((IData)(vlSelf->__PVT__mul_is_valid) 
                                              | (IData)(vlSelf->__PVT__div_is_valid)));
    vlSelf->__PVT__mul_start_ena = ((IData)(vlSelf->__PVT__sta_is_idle) 
                                    & (IData)(vlSelf->__PVT__mul_is_valid));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs1_sign_reg.__PVT__lden 
        = vlSelf->__PVT__div_start_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_rs2_sign_reg.__PVT__lden 
        = vlSelf->__PVT__div_start_ena;
    vlSelf->__PVT__div_q_ena = ((IData)(vlSelf->__PVT__div_start_ena) 
                                | (IData)(vlSelf->__PVT__sta_is_div));
    vlSelf->__PVT__div_op2_sign = ((IData)(vlSelf->__PVT__muldivw)
                                    ? (VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__div_rs2_sign), 0x20U), 
                                                     VL_SEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0U, 0x20U)) 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__div_start_ena), 0x40U))
                                    : (vlSelf->__PVT__muldiv_rs2 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__div_start_ena), 0x40U)));
    vlSelf->__PVT__div_op1_sign = ((IData)(vlSelf->__PVT__muldivw)
                                    ? (VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__div_rs1_sign), 0x20U), 
                                                     VL_SEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0U, 0x20U)) 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__div_start_ena), 0x40U))
                                    : (vlSelf->__PVT__muldiv_rs1 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__div_start_ena), 0x40U)));
    vlSelf->__PVT__muldiv_ena = (((((IData)(vlSelf->__PVT__sta_is_idle_exit_ena) 
                                    | (IData)(vlSelf->__PVT__sta_is_mul_exit_ena)) 
                                   | (IData)(vlSelf->__PVT__sta_is_div_exit_ena)) 
                                  | (IData)(vlSelf->__PVT__sta_is_done_exit_ena)) 
                                 | (IData)(vlSelf->__PVT__muldiv_flush));
    vlSelf->__PVT__temp_muldiv_state_next = ((((VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__sta_is_idle_exit_ena), 2U) 
                                                & (IData)(vlSelf->__PVT__sta_is_idle_nxt)) 
                                               | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__sta_is_mul_exit_ena), 2U) 
                                                  & (IData)(vlSelf->__PVT__sta_is_mul_nxt))) 
                                              | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__sta_is_div_exit_ena), 2U) 
                                                 & (IData)(vlSelf->__PVT__sta_is_div_nxt))) 
                                             | (VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__sta_is_done_exit_ena), 2U) 
                                                & (IData)(vlSelf->__PVT__sta_is_done_nxt)));
    vlSelf->__PVT__booth_ena = vlSelf->__PVT__mul_start_ena;
    VL_REPLICATE_WII(1, __Vtemp_h24fa9146__0, (IData)(vlSelf->__PVT__mul_start_ena), 0x82U);
    VL_CONST_W_3X(96,__Vtemp_h84fca685__0,0x00000001,0xffffffff,0xffffffff);
    VL_REPLICATE_WII(1, __Vtemp_h2449f3ff__0, (1U & 
                                               VL_BITSEL_IWII(65, vlSelf->__PVT__temp_multiplicand, 0x40U)), 0x41U);
    VL_AND_W(3, __Vtemp_h5a7221bd__0, __Vtemp_h84fca685__0, __Vtemp_h2449f3ff__0);
    VL_CONCAT_WWW(130,65,65, __Vtemp_h43f0d9ed__0, __Vtemp_h5a7221bd__0, vlSelf->__PVT__temp_multiplicand);
    VL_AND_W(5, __Vtemp_h0e587d9c__0, __Vtemp_h24fa9146__0, __Vtemp_h43f0d9ed__0);
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__0, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_SEL_WWII(128,130, __Vtemp_h6d446f85__0, vlSelf->__PVT__muldiv_op2_r, 0U, 0x80U);
    VL_CONCAT_WWI(130,128,2, __Vtemp_h25738a3c__0, __Vtemp_h6d446f85__0, 0U);
    VL_AND_W(5, __Vtemp_hcd3fcad1__0, __Vtemp_h8ffe3643__0, __Vtemp_h25738a3c__0);
    VL_OR_W(5, __Vtemp_h7759a7c1__0, __Vtemp_h0e587d9c__0, __Vtemp_hcd3fcad1__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__temp_mul_op2, __Vtemp_h7759a7c1__0);
    vlSelf->__PVT__mul_ena = ((IData)(vlSelf->__PVT__sta_is_mul) 
                              | (IData)(vlSelf->__PVT__mul_start_ena));
    VL_CONCAT_WQQ(67,34,33, __Vtemp_h32a52cdb__0, (0x3ffffffffULL 
                                                   & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__mul_rs2_sign), 0x22U)), 
                  VL_CONCAT_QII(33,32,1, VL_SEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0U, 0x20U), 0U));
    VL_REPLICATE_WII(1, __Vtemp_h241323e6__0, (IData)(vlSelf->__PVT__mul_start_ena), 0x43U);
    VL_AND_W(3, __Vtemp_hab526e88__0, __Vtemp_h32a52cdb__0, __Vtemp_h241323e6__0);
    VL_CONCAT_WQI(65,64,1, __Vtemp_hb7304129__0, vlSelf->__PVT__muldiv_rs2, 0U);
    VL_CONCAT_WIW(67,2,65, __Vtemp_h79e3ce45__0, (3U 
                                                  & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__mul_rs2_sign), 2U)), __Vtemp_hb7304129__0);
    VL_REPLICATE_WII(1, __Vtemp_h241323e6__1, (IData)(vlSelf->__PVT__mul_start_ena), 0x43U);
    VL_AND_W(3, __Vtemp_h8f740410__0, __Vtemp_h79e3ce45__0, __Vtemp_h241323e6__1);
    VL_COND_WIWW(67, __Vtemp_hb42e4fd1__0, (IData)(vlSelf->__PVT__muldivw), __Vtemp_hab526e88__0, __Vtemp_h8f740410__0);
    VL_ASSIGN_W(67,vlSelf->__PVT__temp_booth_multiplier, __Vtemp_hb42e4fd1__0);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_div_q_reg.__PVT__lden 
        = vlSelf->__PVT__div_q_ena;
    vlSelf->__PVT__temp_div_op2 = ((IData)(vlSelf->__PVT__div_rs2_sign)
                                    ? (1ULL + (~ vlSelf->__PVT__div_op2_sign))
                                    : vlSelf->__PVT__div_op2_sign);
    vlSelf->__PVT__temp_div_op1 = ((IData)(vlSelf->__PVT__div_rs1_sign)
                                    ? (1ULL + (~ vlSelf->__PVT__div_op1_sign))
                                    : vlSelf->__PVT__div_op1_sign);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_ctrl.__PVT__lden 
        = vlSelf->__PVT__muldiv_ena;
    vlSelf->__PVT__muldiv_state_next = ((IData)(vlSelf->__PVT__muldiv_flush)
                                         ? 0U : (IData)(vlSelf->__PVT__temp_muldiv_state_next));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_set_reg.__PVT__lden 
        = vlSelf->__PVT__booth_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_inv_reg.__PVT__lden 
        = vlSelf->__PVT__booth_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_mul_reg.__PVT__lden 
        = vlSelf->__PVT__booth_ena;
    vlSelf->__PVT__muldiv_op2_reg_ena = ((IData)(vlSelf->__PVT__div_start_ena) 
                                         | (IData)(vlSelf->__PVT__mul_ena));
    vlSelf->__PVT__muldiv_res_reg_ena = (((IData)(vlSelf->__PVT__div_start_ena) 
                                          | (IData)(vlSelf->__PVT__mul_ena)) 
                                         | (IData)(vlSelf->__PVT__sta_is_div));
    vlSelf->__PVT__booth_bits[0U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0U, 3U));
    vlSelf->__PVT__booth_bits[1U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 2U, 3U));
    vlSelf->__PVT__booth_bits[2U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 4U, 3U));
    vlSelf->__PVT__booth_bits[3U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 6U, 3U));
    vlSelf->__PVT__booth_bits[4U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 8U, 3U));
    vlSelf->__PVT__booth_bits[5U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0xaU, 3U));
    vlSelf->__PVT__booth_bits[6U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0xcU, 3U));
    vlSelf->__PVT__booth_bits[7U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0xeU, 3U));
    vlSelf->__PVT__booth_bits[8U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x10U, 3U));
    vlSelf->__PVT__booth_bits[9U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x12U, 3U));
    vlSelf->__PVT__booth_bits[0xaU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x14U, 3U));
    vlSelf->__PVT__booth_bits[0xbU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x16U, 3U));
    vlSelf->__PVT__booth_bits[0xcU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x18U, 3U));
    vlSelf->__PVT__booth_bits[0xdU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x1aU, 3U));
    vlSelf->__PVT__booth_bits[0xeU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x1cU, 3U));
    vlSelf->__PVT__booth_bits[0xfU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x1eU, 3U));
    vlSelf->__PVT__booth_bits[0x10U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x20U, 3U));
    vlSelf->__PVT__booth_bits[0x11U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x22U, 3U));
    vlSelf->__PVT__booth_bits[0x12U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x24U, 3U));
    vlSelf->__PVT__booth_bits[0x13U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x26U, 3U));
    vlSelf->__PVT__booth_bits[0x14U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x28U, 3U));
    vlSelf->__PVT__booth_bits[0x15U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x2aU, 3U));
    vlSelf->__PVT__booth_bits[0x16U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x2cU, 3U));
    vlSelf->__PVT__booth_bits[0x17U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x2eU, 3U));
    vlSelf->__PVT__booth_bits[0x18U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x30U, 3U));
    vlSelf->__PVT__booth_bits[0x19U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x32U, 3U));
    vlSelf->__PVT__booth_bits[0x1aU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x34U, 3U));
    vlSelf->__PVT__booth_bits[0x1bU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x36U, 3U));
    vlSelf->__PVT__booth_bits[0x1cU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x38U, 3U));
    vlSelf->__PVT__booth_bits[0x1dU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x3aU, 3U));
    vlSelf->__PVT__booth_bits[0x1eU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x3cU, 3U));
    vlSelf->__PVT__booth_bits[0x1fU] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x3eU, 3U));
    vlSelf->__PVT__booth_bits[0x20U] = (7U & VL_SEL_IWII(67, vlSelf->__PVT__temp_booth_multiplier, 0x40U, 3U));
    VL_REPLICATE_WII(1, __Vtemp_hfaa6fc8a__0, (IData)(vlSelf->__PVT__div_start_ena), 0x82U);
    VL_EXTEND_WQ(130,64, __Vtemp_heb301e2c__0, vlSelf->__PVT__temp_div_op2);
    VL_AND_W(5, __Vtemp_h57a7246d__0, __Vtemp_hfaa6fc8a__0, __Vtemp_heb301e2c__0);
    VL_REPLICATE_WII(1, __Vtemp_he649d2a2__0, (IData)(vlSelf->__PVT__mul_ena), 0x82U);
    VL_AND_W(5, __Vtemp_h156d0f29__0, __Vtemp_he649d2a2__0, vlSelf->__PVT__temp_mul_op2);
    VL_OR_W(5, __Vtemp_h48628ca9__0, __Vtemp_h57a7246d__0, __Vtemp_h156d0f29__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__temp_muldiv_op2, __Vtemp_h48628ca9__0);
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__1, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_AND_W(5, __Vtemp_h4a471511__0, __Vtemp_h8ffe3643__1, vlSelf->__PVT__sum_sub_data);
    VL_REPLICATE_WII(1, __Vtemp_hfaa6fc8a__1, (IData)(vlSelf->__PVT__div_start_ena), 0x82U);
    VL_EXTEND_WQ(130,64, __Vtemp_h01ede4fe__0, vlSelf->__PVT__temp_div_op1);
    VL_AND_W(5, __Vtemp_h1f9c7e2e__0, __Vtemp_hfaa6fc8a__1, __Vtemp_h01ede4fe__0);
    VL_OR_W(5, __Vtemp_h3150a026__0, __Vtemp_h4a471511__0, __Vtemp_h1f9c7e2e__0);
    VL_REPLICATE_WII(1, __Vtemp_hd7ab6a1e__0, (IData)(vlSelf->__PVT__sta_is_div), 0x82U);
    VL_EXTEND_WW(129,127, __Vtemp_hee58a6a6__0, vlSelf->__PVT__temp_div_res);
    VL_CONCAT_WWI(130,129,1, __Vtemp_h94725da2__0, __Vtemp_hee58a6a6__0, 0U);
    VL_AND_W(5, __Vtemp_ha6c5caf9__0, __Vtemp_hd7ab6a1e__0, __Vtemp_h94725da2__0);
    VL_OR_W(5, __Vtemp_h67e3189d__0, __Vtemp_h3150a026__0, __Vtemp_ha6c5caf9__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__muldiv_res, __Vtemp_h67e3189d__0);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_ctrl.__PVT__dnxt 
        = vlSelf->__PVT__muldiv_state_next;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_op2_reg.__PVT__lden 
        = vlSelf->__PVT__muldiv_op2_reg_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_res_reg.__PVT__lden 
        = vlSelf->__PVT__muldiv_res_reg_ena;
    VL_ASSIGNBIT_QI(0U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [0U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [0U]))));
    VL_ASSIGNBIT_QI(1U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [1U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [1U]))));
    VL_ASSIGNBIT_QI(2U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [2U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [2U]))));
    VL_ASSIGNBIT_QI(3U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [3U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [3U]))));
    VL_ASSIGNBIT_QI(4U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [4U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [4U]))));
    VL_ASSIGNBIT_QI(5U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [5U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [5U]))));
    VL_ASSIGNBIT_QI(6U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [6U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [6U]))));
    VL_ASSIGNBIT_QI(7U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [7U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [7U]))));
    VL_ASSIGNBIT_QI(8U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [8U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [8U]))));
    VL_ASSIGNBIT_QI(9U, vlSelf->__PVT__booth_set, (1U 
                                                   & ((~ 
                                                       VL_REDOR_I(
                                                                  vlSelf->__PVT__booth_bits
                                                                  [9U])) 
                                                      | VL_REDAND_II(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [9U]))));
    VL_ASSIGNBIT_QI(0xaU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xaU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xaU]))));
    VL_ASSIGNBIT_QI(0xbU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xbU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xbU]))));
    VL_ASSIGNBIT_QI(0xcU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xcU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xcU]))));
    VL_ASSIGNBIT_QI(0xdU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xdU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xdU]))));
    VL_ASSIGNBIT_QI(0xeU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xeU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xeU]))));
    VL_ASSIGNBIT_QI(0xfU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0xfU])) | 
                           VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                        [0xfU]))));
    VL_ASSIGNBIT_QI(0x10U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x10U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x10U]))));
    VL_ASSIGNBIT_QI(0x11U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x11U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x11U]))));
    VL_ASSIGNBIT_QI(0x12U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x12U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x12U]))));
    VL_ASSIGNBIT_QI(0x13U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x13U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x13U]))));
    VL_ASSIGNBIT_QI(0x14U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x14U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x14U]))));
    VL_ASSIGNBIT_QI(0x15U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x15U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x15U]))));
    VL_ASSIGNBIT_QI(0x16U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x16U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x16U]))));
    VL_ASSIGNBIT_QI(0x17U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x17U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x17U]))));
    VL_ASSIGNBIT_QI(0x18U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x18U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x18U]))));
    VL_ASSIGNBIT_QI(0x19U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x19U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x19U]))));
    VL_ASSIGNBIT_QI(0x1aU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1aU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1aU]))));
    VL_ASSIGNBIT_QI(0x1bU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1bU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1bU]))));
    VL_ASSIGNBIT_QI(0x1cU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1cU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1cU]))));
    VL_ASSIGNBIT_QI(0x1dU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1dU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1dU]))));
    VL_ASSIGNBIT_QI(0x1eU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1eU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1eU]))));
    VL_ASSIGNBIT_QI(0x1fU, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x1fU])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x1fU]))));
    VL_ASSIGNBIT_QI(0x20U, vlSelf->__PVT__booth_set, 
                    (1U & ((~ VL_REDOR_I(vlSelf->__PVT__booth_bits
                                         [0x20U])) 
                           | VL_REDAND_II(3, vlSelf->__PVT__booth_bits
                                          [0x20U]))));
    VL_ASSIGN_W(130,vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_op2_reg.__PVT__dnxt, vlSelf->__PVT__temp_muldiv_op2);
    VL_ASSIGN_W(130,vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_muldiv_res_reg.__PVT__dnxt, vlSelf->__PVT__muldiv_res);
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_set_reg.__PVT__dnxt 
        = vlSelf->__PVT__booth_set;
    VL_ASSIGNBIT_QI(0U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [0U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0U)))));
    VL_ASSIGNBIT_QI(0U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [0U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [0U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0U)))));
    VL_ASSIGNBIT_QI(1U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [1U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 1U)))));
    VL_ASSIGNBIT_QI(1U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [1U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [1U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 1U)))));
    VL_ASSIGNBIT_QI(2U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [2U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 2U)))));
    VL_ASSIGNBIT_QI(2U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [2U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [2U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 2U)))));
    VL_ASSIGNBIT_QI(3U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [3U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 3U)))));
    VL_ASSIGNBIT_QI(3U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [3U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [3U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 3U)))));
    VL_ASSIGNBIT_QI(4U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [4U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 4U)))));
    VL_ASSIGNBIT_QI(4U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [4U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [4U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 4U)))));
    VL_ASSIGNBIT_QI(5U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [5U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 5U)))));
    VL_ASSIGNBIT_QI(5U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [5U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [5U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 5U)))));
    VL_ASSIGNBIT_QI(6U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [6U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 6U)))));
    VL_ASSIGNBIT_QI(6U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [6U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [6U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 6U)))));
    VL_ASSIGNBIT_QI(7U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [7U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 7U)))));
    VL_ASSIGNBIT_QI(7U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [7U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [7U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 7U)))));
    VL_ASSIGNBIT_QI(8U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [8U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 8U)))));
    VL_ASSIGNBIT_QI(8U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [8U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [8U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 8U)))));
    VL_ASSIGNBIT_QI(9U, vlSelf->__PVT__booth_inv, (1U 
                                                   & (VL_BITSEL_IIII(3, 
                                                                     vlSelf->__PVT__booth_bits
                                                                     [9U], 2U) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 9U)))));
    VL_ASSIGNBIT_QI(9U, vlSelf->__PVT__booth_mul, (1U 
                                                   & ((~ 
                                                       (VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [9U], 0U) 
                                                        ^ 
                                                        VL_BITSEL_IIII(3, 
                                                                       vlSelf->__PVT__booth_bits
                                                                       [9U], 1U))) 
                                                      & (~ 
                                                         VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 9U)))));
    VL_ASSIGNBIT_QI(0xaU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xaU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xaU)))));
    VL_ASSIGNBIT_QI(0xaU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xaU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xaU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xaU)))));
    VL_ASSIGNBIT_QI(0xbU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xbU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xbU)))));
    VL_ASSIGNBIT_QI(0xbU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xbU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xbU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xbU)))));
    VL_ASSIGNBIT_QI(0xcU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xcU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xcU)))));
    VL_ASSIGNBIT_QI(0xcU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xcU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xcU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xcU)))));
    VL_ASSIGNBIT_QI(0xdU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xdU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xdU)))));
    VL_ASSIGNBIT_QI(0xdU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xdU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xdU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xdU)))));
    VL_ASSIGNBIT_QI(0xeU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xeU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xeU)))));
    VL_ASSIGNBIT_QI(0xeU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xeU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xeU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xeU)))));
    VL_ASSIGNBIT_QI(0xfU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0xfU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xfU)))));
    VL_ASSIGNBIT_QI(0xfU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0xfU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0xfU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0xfU)))));
    VL_ASSIGNBIT_QI(0x10U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x10U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x10U)))));
    VL_ASSIGNBIT_QI(0x10U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x10U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x10U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x10U)))));
    VL_ASSIGNBIT_QI(0x11U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x11U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x11U)))));
    VL_ASSIGNBIT_QI(0x11U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x11U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x11U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x11U)))));
    VL_ASSIGNBIT_QI(0x12U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x12U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x12U)))));
    VL_ASSIGNBIT_QI(0x12U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x12U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x12U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x12U)))));
    VL_ASSIGNBIT_QI(0x13U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x13U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x13U)))));
    VL_ASSIGNBIT_QI(0x13U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x13U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x13U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x13U)))));
    VL_ASSIGNBIT_QI(0x14U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x14U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x14U)))));
    VL_ASSIGNBIT_QI(0x14U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x14U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x14U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x14U)))));
    VL_ASSIGNBIT_QI(0x15U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x15U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x15U)))));
    VL_ASSIGNBIT_QI(0x15U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x15U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x15U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x15U)))));
    VL_ASSIGNBIT_QI(0x16U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x16U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x16U)))));
    VL_ASSIGNBIT_QI(0x16U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x16U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x16U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x16U)))));
    VL_ASSIGNBIT_QI(0x17U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x17U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x17U)))));
    VL_ASSIGNBIT_QI(0x17U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x17U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x17U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x17U)))));
    VL_ASSIGNBIT_QI(0x18U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x18U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x18U)))));
    VL_ASSIGNBIT_QI(0x18U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x18U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x18U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x18U)))));
    VL_ASSIGNBIT_QI(0x19U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x19U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x19U)))));
    VL_ASSIGNBIT_QI(0x19U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x19U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x19U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x19U)))));
    VL_ASSIGNBIT_QI(0x1aU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1aU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1aU)))));
    VL_ASSIGNBIT_QI(0x1aU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1aU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1aU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1aU)))));
    VL_ASSIGNBIT_QI(0x1bU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1bU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1bU)))));
    VL_ASSIGNBIT_QI(0x1bU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1bU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1bU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1bU)))));
    VL_ASSIGNBIT_QI(0x1cU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1cU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1cU)))));
    VL_ASSIGNBIT_QI(0x1cU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1cU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1cU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1cU)))));
    VL_ASSIGNBIT_QI(0x1dU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1dU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1dU)))));
    VL_ASSIGNBIT_QI(0x1dU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1dU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1dU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1dU)))));
    VL_ASSIGNBIT_QI(0x1eU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1eU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1eU)))));
    VL_ASSIGNBIT_QI(0x1eU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1eU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1eU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1eU)))));
    VL_ASSIGNBIT_QI(0x1fU, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x1fU], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1fU)))));
    VL_ASSIGNBIT_QI(0x1fU, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x1fU], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x1fU], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x1fU)))));
    VL_ASSIGNBIT_QI(0x20U, vlSelf->__PVT__booth_inv, 
                    (1U & (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                          [0x20U], 2U) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x20U)))));
    VL_ASSIGNBIT_QI(0x20U, vlSelf->__PVT__booth_mul, 
                    (1U & ((~ (VL_BITSEL_IIII(3, vlSelf->__PVT__booth_bits
                                              [0x20U], 0U) 
                               ^ VL_BITSEL_IIII(3, 
                                                vlSelf->__PVT__booth_bits
                                                [0x20U], 1U))) 
                           & (~ VL_BITSEL_IQII(33, vlSelf->__PVT__booth_set, 0x20U)))));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_inv_reg.__PVT__dnxt 
        = vlSelf->__PVT__booth_inv;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__ysyx_22050598_booth_mul_reg.__PVT__dnxt 
        = vlSelf->__PVT__booth_mul;
}
