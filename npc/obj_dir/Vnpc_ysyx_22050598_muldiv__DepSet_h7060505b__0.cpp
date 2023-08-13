// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_muldiv.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__0(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__0\n"); );
    // Body
    vlSelf->__PVT__div_op_01 = ((~ (IData)(vlSelf->__PVT__div_rs1_sign_r)) 
                                & (IData)(vlSelf->__PVT__div_rs2_sign_r));
    vlSelf->__PVT__div_op_11 = ((IData)(vlSelf->__PVT__div_rs1_sign_r) 
                                & (IData)(vlSelf->__PVT__div_rs2_sign_r));
    vlSelf->__PVT__div_op_10 = ((IData)(vlSelf->__PVT__div_rs1_sign_r) 
                                & (~ (IData)(vlSelf->__PVT__div_rs2_sign_r)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__1(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__1\n"); );
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
    // Body
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
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__3(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__3\n"); );
    // Body
    vlSelf->__PVT__add_sub_cin = ((((0x20U >= (0x3fU 
                                               & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U))) 
                                    & VL_BITSEL_IQII(33, vlSelf->__PVT__booth_inv_r, 
                                                     (0x3fU 
                                                      & VL_SEL_IIII(7, (IData)(vlSelf->__PVT__muldiv_cnt_r), 0U, 6U)))) 
                                   & (IData)(vlSelf->__PVT__sta_is_mul)) 
                                  | ((~ (IData)(vlSelf->__PVT__div_cin_r)) 
                                     & (IData)(vlSelf->__PVT__sta_is_div)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__4(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__4\n"); );
    // Body
    vlSelf->__PVT__div_is_valid_q = (vlSelf->__PVT__div_q_r 
                                     & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__sta_is_done), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__5(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__5\n"); );
    // Body
    vlSelf->__PVT__div_fix_ena = ((IData)(vlSelf->__PVT__div_cin_r) 
                                  & (IData)(vlSelf->__PVT__sta_is_done));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__6(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__6\n"); );
    // Body
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
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__7(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__7\n"); );
    // Body
    vlSelf->__PVT__temp_div_rem = ((VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x40U, 0x40U) 
                                    & VL_REPLICATE_QOI(1,
                                                       ((IData)(vlSelf->__PVT__sta_is_done) 
                                                        & (~ (IData)(vlSelf->__PVT__muldivw))), 0x40U)) 
                                   | (VL_EXTEND_QI(64,32, 
                                                   VL_SEL_IWII(130, vlSelf->__PVT__muldiv_res_r, 0x20U, 0x20U)) 
                                      & VL_REPLICATE_QOI(1,
                                                         ((IData)(vlSelf->__PVT__sta_is_done) 
                                                          & (IData)(vlSelf->__PVT__muldivw)), 0x40U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__8(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__8\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha52bc9ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hc80b4773__0;
    VlWide<3>/*95:0*/ __Vtemp_h99399293__0;
    // Body
    vlSelf->__PVT__mul_rs1_sign = (VL_REDOR_I((IData)(vlSelf->__PVT__mul_signed)) 
                                   & ((VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x3fU) 
                                       & (~ (IData)(vlSelf->__PVT__muldivw))) 
                                      | (VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0x1fU) 
                                         & (IData)(vlSelf->__PVT__muldivw))));
    VL_CONCAT_WQI(65,33,32, __Vtemp_ha52bc9ed__0, (0x1ffffffffULL 
                                                   & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__mul_rs1_sign), 0x21U)), 
                  VL_SEL_IQII(64, vlSelf->__PVT__muldiv_rs1, 0U, 0x20U));
    VL_CONCAT_WIQ(65,1,64, __Vtemp_hc80b4773__0, (IData)(vlSelf->__PVT__mul_rs1_sign), vlSelf->__PVT__muldiv_rs1);
    VL_COND_WIWW(65, __Vtemp_h99399293__0, (IData)(vlSelf->__PVT__muldivw), __Vtemp_ha52bc9ed__0, __Vtemp_hc80b4773__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__temp_multiplicand, __Vtemp_h99399293__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__11(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__11\n"); );
    // Body
    vlSelf->__PVT__mul_rs2_sign = (1U & ((~ ((~ VL_REDOR_I((IData)(vlSelf->__PVT__mul_signed))) 
                                             | (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mul_signed), 1U) 
                                                & (~ 
                                                   VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__mul_signed), 0U))))) 
                                         & ((VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x3fU) 
                                             & (~ (IData)(vlSelf->__PVT__muldivw))) 
                                            | (VL_BITSEL_IQII(64, vlSelf->__PVT__muldiv_rs2, 0x1fU) 
                                               & (IData)(vlSelf->__PVT__muldivw)))));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__12(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__12\n"); );
    // Body
    vlSelf->__PVT__quotient = (((IData)(vlSelf->__PVT__div_op_01) 
                                | (IData)(vlSelf->__PVT__div_op_10))
                                ? (1ULL + (~ vlSelf->__PVT__div_is_valid_q))
                                : vlSelf->__PVT__div_is_valid_q);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__13(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__13\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__0;
    VlWide<5>/*159:0*/ __Vtemp_he014438f__0;
    VlWide<5>/*159:0*/ __Vtemp_h449c6b6b__0;
    VlWide<5>/*159:0*/ __Vtemp_hea5e3ed7__0;
    VlWide<5>/*159:0*/ __Vtemp_h5fe0d5e4__0;
    // Body
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__0, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_AND_W(5, __Vtemp_he014438f__0, vlSelf->__PVT__mul_op2, __Vtemp_h8ffe3643__0);
    VL_REPLICATE_WII(1, __Vtemp_h449c6b6b__0, ((IData)(vlSelf->__PVT__sta_is_div) 
                                               | (IData)(vlSelf->__PVT__div_fix_ena)), 0x82U);
    VL_AND_W(5, __Vtemp_hea5e3ed7__0, vlSelf->__PVT__div_op2, __Vtemp_h449c6b6b__0);
    VL_OR_W(5, __Vtemp_h5fe0d5e4__0, __Vtemp_he014438f__0, __Vtemp_hea5e3ed7__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__adder_op2, __Vtemp_h5fe0d5e4__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__14(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__14\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h8bb75469__0;
    VlWide<5>/*159:0*/ __Vtemp_hd7ab6a1e__0;
    VlWide<5>/*159:0*/ __Vtemp_h4a4c2b2d__0;
    VlWide<5>/*159:0*/ __Vtemp_hca90bdac__0;
    VlWide<5>/*159:0*/ __Vtemp_hbacb55b7__0;
    VlWide<5>/*159:0*/ __Vtemp_h412f88f5__0;
    VlWide<5>/*159:0*/ __Vtemp_hb289c961__0;
    // Body
    VL_EXTEND_WQ(130,33, __Vtemp_h8bb75469__0, (0x1ffffffffULL 
                                                & VL_SEL_QWII(130, vlSelf->__PVT__muldiv_res_r, 0x1fU, 0x21U)));
    VL_REPLICATE_WII(1, __Vtemp_hd7ab6a1e__0, (IData)(vlSelf->__PVT__sta_is_div), 0x82U);
    VL_AND_W(5, __Vtemp_h4a4c2b2d__0, __Vtemp_h8bb75469__0, __Vtemp_hd7ab6a1e__0);
    VL_EXTEND_WI(130,32, __Vtemp_hca90bdac__0, VL_SEL_IWII(130, vlSelf->__PVT__muldiv_res_r, 0x20U, 0x20U));
    VL_REPLICATE_WII(1, __Vtemp_hbacb55b7__0, (IData)(vlSelf->__PVT__div_fix_ena), 0x82U);
    VL_AND_W(5, __Vtemp_h412f88f5__0, __Vtemp_hca90bdac__0, __Vtemp_hbacb55b7__0);
    VL_OR_W(5, __Vtemp_hb289c961__0, __Vtemp_h4a4c2b2d__0, __Vtemp_h412f88f5__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__divw_op1, __Vtemp_hb289c961__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__15(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__15\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h0e800112__0;
    VlWide<5>/*159:0*/ __Vtemp_h994cd1ca__0;
    VlWide<5>/*159:0*/ __Vtemp_he027fe47__0;
    VlWide<5>/*159:0*/ __Vtemp_hd067e2b8__0;
    // Body
    VL_CONST_W_5X(160,__Vtemp_h0e800112__0,0x00000003,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
    VL_NOT_W(5, __Vtemp_h994cd1ca__0, vlSelf->__PVT__adder_op2);
    VL_COND_WIWW(130, __Vtemp_he027fe47__0, (IData)(vlSelf->__PVT__add_sub_cin), __Vtemp_h994cd1ca__0, vlSelf->__PVT__adder_op2);
    VL_AND_W(5, __Vtemp_hd067e2b8__0, __Vtemp_h0e800112__0, __Vtemp_he027fe47__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__add_sub_in_b, __Vtemp_hd067e2b8__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__16(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__16\n"); );
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
    VlWide<5>/*159:0*/ __Vtemp_h8ffe3643__0;
    VlWide<5>/*159:0*/ __Vtemp_h8bc74492__0;
    VlWide<5>/*159:0*/ __Vtemp_h449c6b6b__0;
    VlWide<5>/*159:0*/ __Vtemp_hbcd3108f__0;
    VlWide<5>/*159:0*/ __Vtemp_h359543b9__0;
    // Body
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
    VL_REPLICATE_WII(1, __Vtemp_h8ffe3643__0, (IData)(vlSelf->__PVT__sta_is_mul), 0x82U);
    VL_AND_W(5, __Vtemp_h8bc74492__0, vlSelf->__PVT__mul_op1, __Vtemp_h8ffe3643__0);
    VL_REPLICATE_WII(1, __Vtemp_h449c6b6b__0, ((IData)(vlSelf->__PVT__sta_is_div) 
                                               | (IData)(vlSelf->__PVT__div_fix_ena)), 0x82U);
    VL_AND_W(5, __Vtemp_hbcd3108f__0, vlSelf->__PVT__div_op1, __Vtemp_h449c6b6b__0);
    VL_OR_W(5, __Vtemp_h359543b9__0, __Vtemp_h8bc74492__0, __Vtemp_hbcd3108f__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__adder_op1, __Vtemp_h359543b9__0);
    VL_ASSIGN_W(130,vlSelf->__PVT__add_sub_in_a, vlSelf->__PVT__adder_op1);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__19(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__19\n"); );
    // Body
    vlSelf->__PVT__remainder = (((IData)(vlSelf->__PVT__div_op_10) 
                                 | (IData)(vlSelf->__PVT__div_op_11))
                                 ? (1ULL + (~ vlSelf->__PVT__div_is_valid_rem))
                                 : vlSelf->__PVT__div_is_valid_rem);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__20(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__20\n"); );
    // Body
    vlSelf->__PVT__div_is_valid = ((IData)(vlSelf->__PVT__div_valid) 
                                   & (~ (IData)(vlSelf->__PVT__muldiv_flush)));
    vlSelf->__PVT__mul_is_valid = ((IData)(vlSelf->__PVT__mul_valid) 
                                   & (~ (IData)(vlSelf->__PVT__muldiv_flush)));
    vlSelf->__PVT__sta_is_idle_nxt = ((1U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__mul_is_valid), 2U)) 
                                      | (2U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__div_is_valid), 2U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__22(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__22\n"); );
    // Body
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
    vlSelf->__PVT__temp_div_op2 = ((IData)(vlSelf->__PVT__div_rs2_sign)
                                    ? (1ULL + (~ vlSelf->__PVT__div_op2_sign))
                                    : vlSelf->__PVT__div_op2_sign);
    vlSelf->__PVT__temp_div_op1 = ((IData)(vlSelf->__PVT__div_rs1_sign)
                                    ? (1ULL + (~ vlSelf->__PVT__div_op1_sign))
                                    : vlSelf->__PVT__div_op1_sign);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__24(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv__24\n"); );
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
    // Body
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
}
