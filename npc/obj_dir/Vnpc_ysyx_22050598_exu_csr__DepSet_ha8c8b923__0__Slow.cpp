// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_exu_csr.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_exu_csr___ctor_var_reset(Vnpc_ysyx_22050598_exu_csr* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_csr___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_csr_bus_i = VL_RAND_RESET_I(6);
    vlSelf->__PVT__csr_imm_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_reg_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_zimm_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_ecall_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_inst_is_mret_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_ecall_i = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_rd_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mstatus_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mtvec_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mepc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mcause_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mstatus_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mtvec_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mepc_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_mcause_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mstatus_r_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mtvec_r_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mepc_r_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mcause_r_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__read_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_csr_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__csr_imm_is_0x300 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_imm_is_0x305 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_imm_is_0x341 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_imm_is_0x342 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mstatus_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mtvec_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mepc_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__csr_mcause_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_csr_or = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_csr_or_data1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_csr_or_data2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_csr_or_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_csr_self = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_csr_self_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__write_csr_and = VL_RAND_RESET_I(1);
    vlSelf->__PVT__write_csr_and_data = VL_RAND_RESET_Q(64);
}
