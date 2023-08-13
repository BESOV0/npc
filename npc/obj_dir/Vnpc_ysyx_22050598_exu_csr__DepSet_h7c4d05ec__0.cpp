// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_exu_csr.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___ico_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___ico_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_mstatus_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__qout;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__1(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr_mcause_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__qout;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__2(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__2\n"); );
    // Body
    vlSelf->__PVT__csr_mtvec_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__qout;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__3(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__3\n"); );
    // Body
    vlSelf->__PVT__csr_mepc_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__qout;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__1(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__1\n"); );
    // Body
    vlSelf->__PVT__csr_mstatus_ena = ((IData)(vlSelf->__PVT__csr_imm_is_0x300) 
                                      & (IData)(vlSelf->__PVT__csr_ena));
    vlSelf->__PVT__csr_mtvec_ena = ((IData)(vlSelf->__PVT__csr_imm_is_0x305) 
                                    & (IData)(vlSelf->__PVT__csr_ena));
    vlSelf->__PVT__csr_mcause_ena = ((IData)(vlSelf->__PVT__csr_imm_is_0x342) 
                                     & (IData)(vlSelf->__PVT__csr_ena));
    vlSelf->__PVT__csr_mepc_ena = ((IData)(vlSelf->__PVT__csr_imm_is_0x341) 
                                   & (IData)(vlSelf->__PVT__csr_ena));
    vlSelf->__PVT__mstatus_r_ena = vlSelf->__PVT__csr_mstatus_ena;
    vlSelf->__PVT__mtvec_r_ena = vlSelf->__PVT__csr_mtvec_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__lden 
        = vlSelf->__PVT__mstatus_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__lden 
        = vlSelf->__PVT__mtvec_r_ena;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__2(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__2\n"); );
    // Body
    vlSelf->__PVT__mcause_r_ena = ((IData)(vlSelf->__PVT__csr_mcause_ena) 
                                   | (IData)(vlSelf->__PVT__ex_inst_is_ecall_i));
    vlSelf->__PVT__mepc_r_ena = ((IData)(vlSelf->__PVT__csr_mepc_ena) 
                                 | (IData)(vlSelf->__PVT__ex_inst_is_ecall_i));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__lden 
        = vlSelf->__PVT__mcause_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__lden 
        = vlSelf->__PVT__mepc_r_ena;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__5(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__5\n"); );
    // Body
    vlSelf->__PVT__write_csr_or_data = (vlSelf->__PVT__write_csr_or_data1 
                                        | vlSelf->__PVT__write_csr_or_data2);
    vlSelf->__PVT__write_csr_and_data = (vlSelf->__PVT__write_csr_or_data1 
                                         & (~ vlSelf->__PVT__write_csr_or_data2));
    vlSelf->__PVT__write_csr_data = (((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__write_csr_self), 0x40U) 
                                       & vlSelf->__PVT__write_csr_self_data) 
                                      | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__write_csr_or), 0x40U) 
                                         & vlSelf->__PVT__write_csr_or_data)) 
                                     | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__write_csr_and), 0x40U) 
                                        & vlSelf->__PVT__write_csr_and_data));
    vlSelf->__PVT__csr_mstatus_data = (vlSelf->__PVT__write_csr_data 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mstatus_ena), 0x40U));
    vlSelf->__PVT__csr_mtvec_data = (vlSelf->__PVT__write_csr_data 
                                     & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mtvec_ena), 0x40U));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mstatus_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mtvec_data;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__6(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__6\n"); );
    // Body
    vlSelf->__PVT__csr_mcause_data = ((vlSelf->__PVT__write_csr_data 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mcause_ena), 0x40U)) 
                                      | (0xbULL & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U)));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mcause_data;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__7(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__7\n"); );
    // Body
    vlSelf->__PVT__csr_mepc_data = ((vlSelf->__PVT__write_csr_data 
                                     & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mepc_ena), 0x40U)) 
                                    | (vlSelf->__PVT__csr_ecall_pc 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U)));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mepc_data;
}
