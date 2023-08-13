// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_exu_csr.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__4(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__4\n"); );
    // Body
    vlSelf->__PVT__write_csr_self = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 5U) 
                                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 2U)));
    vlSelf->__PVT__write_csr_and = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 3U) 
                                          | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 0U)));
    vlSelf->__PVT__write_csr_or = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 4U) 
                                         | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 1U)));
    vlSelf->__PVT__csr_ena = VL_REDOR_I((IData)(vlSelf->__PVT__ex_csr_bus_i));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__5(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__5\n"); );
    // Body
    vlSelf->__PVT__csr_imm_is_0x300 = (0x300U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x305 = (0x305U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x342 = (0x342U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x341 = (0x341U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__0(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__0\n"); );
    // Body
    vlSelf->__PVT__write_csr_self_data = ((VL_REPLICATE_QOI(1,
                                                            (1U 
                                                             & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 5U)), 0x40U) 
                                           & vlSelf->__PVT__csr_reg_i) 
                                          | (VL_REPLICATE_QOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 2U)), 0x40U) 
                                             & vlSelf->__PVT__csr_zimm_i));
    vlSelf->__PVT__write_csr_or_data2 = ((VL_REPLICATE_QOI(1,
                                                           (1U 
                                                            & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 4U)), 0x40U) 
                                          & vlSelf->__PVT__csr_reg_i) 
                                         | (VL_REPLICATE_QOI(1,
                                                             (1U 
                                                              & VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 1U)), 0x40U) 
                                            & vlSelf->__PVT__csr_zimm_i));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__3(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__3\n"); );
    // Body
    vlSelf->__PVT__read_csr_data = ((((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mstatus_ena), 0x40U) 
                                       & vlSelf->__PVT__csr_mstatus_data_r) 
                                      | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mtvec_ena), 0x40U) 
                                         & vlSelf->__PVT__csr_mtvec_data_r)) 
                                     | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mepc_ena), 0x40U) 
                                        & vlSelf->__PVT__csr_mepc_data_r)) 
                                    | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mcause_ena), 0x40U) 
                                       & vlSelf->__PVT__csr_mcause_data_r));
    vlSelf->__PVT__write_csr_or_data1 = (vlSelf->__PVT__read_csr_data 
                                         & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__write_csr_or), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__4(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___nba_comb__TOP__npc__u_ysyx_22050598_exu_csr__4\n"); );
    // Body
    vlSelf->__PVT__csr_rd_pc_data = (((vlSelf->__PVT__read_csr_data 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_ena), 0x40U)) 
                                      | (vlSelf->__PVT__csr_mtvec_data_r 
                                         & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U))) 
                                     | (vlSelf->__PVT__csr_mepc_data_r 
                                        & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_mret_i), 0x40U)));
}
