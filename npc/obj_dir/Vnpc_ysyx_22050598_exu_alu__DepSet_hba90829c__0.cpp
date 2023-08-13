// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_exu_alu.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___ico_sequent__TOP__npc__u_ysyx_22050598_exu_alu__0(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___ico_sequent__TOP__npc__u_ysyx_22050598_exu_alu__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__rst 
        = vlSelf->__PVT__rst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__0(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__0\n"); );
    // Body
    vlSelf->__PVT__div_signed = vlSelf->__PVT__ex_inst_divrem_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__div_signed 
        = vlSelf->__PVT__div_signed;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__2(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__2\n"); );
    // Body
    vlSelf->__PVT__result_hi = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__result_hi;
    vlSelf->__PVT__result_lo = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__result_lo;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__3(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__3\n"); );
    // Body
    vlSelf->__PVT__mul_signed = (3U & (VL_REPLICATE_IOI(1,
                                                        (1U 
                                                         & ((VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 4U) 
                                                             | VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 3U)) 
                                                            | VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 0U))), 2U) 
                                       | (2U & VL_REPLICATE_IOI(1,
                                                                (1U 
                                                                 & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 2U)), 2U))));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__mul_signed 
        = vlSelf->__PVT__mul_signed;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__4(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__4\n"); );
    // Body
    vlSelf->__PVT__muldivout_valid = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__out_valid;
    vlSelf->__PVT__muldiv_ready = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__muldiv_ready;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__5(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__5\n"); );
    // Body
    vlSelf->__PVT__muldivw = vlSelf->__PVT__ex_inst_is_rv64;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__muldivw 
        = vlSelf->__PVT__muldivw;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__7(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__7\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__muldiv_rs1 
        = vlSelf->__PVT__ex_alu_op_a;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__9(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__9\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__muldiv_rs2 
        = vlSelf->__PVT__ex_alu_op_b;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__10(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__10\n"); );
    // Body
    vlSelf->__PVT__div_valid = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 6U) 
                                      | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 5U)));
    vlSelf->__PVT__alu_op_is_shift = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 4U) 
                                            | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 3U)));
    vlSelf->__PVT__mul_valid = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 7U));
    vlSelf->__PVT__add_sub_cin = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 8U));
    vlSelf->__PVT__add_or_sub = (1U & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 8U) 
                                       | VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 9U)));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__div_valid 
        = vlSelf->__PVT__div_valid;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__mul_valid 
        = vlSelf->__PVT__mul_valid;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__9(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__9\n"); );
    // Body
    vlSelf->__PVT__quotient = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__quotient;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__21(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__21\n"); );
    // Body
    vlSelf->__PVT__remainder = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__remainder;
    vlSelf->__PVT__mod_result = ((IData)(vlSelf->__PVT__ex_inst_is_rv64)
                                  ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__remainder, 0x1fU)), 0x20U), 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__remainder, 0U, 0x20U))
                                  : vlSelf->__PVT__remainder);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__28(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__28\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv.__PVT__muldiv_flush 
        = vlSelf->__PVT__ex_muldiv_flush;
}
