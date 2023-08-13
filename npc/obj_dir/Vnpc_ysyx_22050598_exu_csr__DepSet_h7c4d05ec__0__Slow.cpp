// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_exu_csr.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_exu_csr___stl_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___stl_sequent__TOP__npc__u_ysyx_22050598_exu_csr__0\n"); );
    // Body
    vlSelf->__PVT__csr_mstatus_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__qout;
    vlSelf->__PVT__csr_mcause_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__qout;
    vlSelf->__PVT__csr_mtvec_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__qout;
    vlSelf->__PVT__csr_mepc_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__qout;
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
    vlSelf->__PVT__write_csr_self = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 5U) 
                                           | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 2U)));
    vlSelf->__PVT__write_csr_and = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 3U) 
                                          | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 0U)));
    vlSelf->__PVT__write_csr_or = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 4U) 
                                         | VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_csr_bus_i), 1U)));
    vlSelf->__PVT__csr_ena = VL_REDOR_I((IData)(vlSelf->__PVT__ex_csr_bus_i));
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
    vlSelf->__PVT__csr_imm_is_0x300 = (0x300U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x305 = (0x305U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x342 = (0x342U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
    vlSelf->__PVT__csr_imm_is_0x341 = (0x341U == (0xfffU 
                                                  & VL_SEL_IQII(64, vlSelf->__PVT__csr_imm_i, 0U, 0xcU)));
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
    vlSelf->__PVT__mcause_r_ena = ((IData)(vlSelf->__PVT__csr_mcause_ena) 
                                   | (IData)(vlSelf->__PVT__ex_inst_is_ecall_i));
    vlSelf->__PVT__mepc_r_ena = ((IData)(vlSelf->__PVT__csr_mepc_ena) 
                                 | (IData)(vlSelf->__PVT__ex_inst_is_ecall_i));
    vlSelf->__PVT__read_csr_data = ((((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mstatus_ena), 0x40U) 
                                       & vlSelf->__PVT__csr_mstatus_data_r) 
                                      | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mtvec_ena), 0x40U) 
                                         & vlSelf->__PVT__csr_mtvec_data_r)) 
                                     | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mepc_ena), 0x40U) 
                                        & vlSelf->__PVT__csr_mepc_data_r)) 
                                    | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mcause_ena), 0x40U) 
                                       & vlSelf->__PVT__csr_mcause_data_r));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__lden 
        = vlSelf->__PVT__mstatus_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__lden 
        = vlSelf->__PVT__mtvec_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__lden 
        = vlSelf->__PVT__mcause_r_ena;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__lden 
        = vlSelf->__PVT__mepc_r_ena;
    vlSelf->__PVT__write_csr_or_data1 = (vlSelf->__PVT__read_csr_data 
                                         & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__write_csr_or), 0x40U));
    vlSelf->__PVT__csr_rd_pc_data = (((vlSelf->__PVT__read_csr_data 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_ena), 0x40U)) 
                                      | (vlSelf->__PVT__csr_mtvec_data_r 
                                         & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U))) 
                                     | (vlSelf->__PVT__csr_mepc_data_r 
                                        & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_mret_i), 0x40U)));
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
    vlSelf->__PVT__csr_mcause_data = ((vlSelf->__PVT__write_csr_data 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mcause_ena), 0x40U)) 
                                      | (0xbULL & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U)));
    vlSelf->__PVT__csr_mepc_data = ((vlSelf->__PVT__write_csr_data 
                                     & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__csr_mepc_ena), 0x40U)) 
                                    | (vlSelf->__PVT__csr_ecall_pc 
                                       & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_ecall_i), 0x40U)));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mstatus_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mtvec_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mtvec_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mcause_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mcause_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr__mepc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__csr_mepc_data;
}
