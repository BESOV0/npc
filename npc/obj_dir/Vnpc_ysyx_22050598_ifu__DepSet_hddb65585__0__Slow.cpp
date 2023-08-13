// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_ifu.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__1(Vnpc_ysyx_22050598_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__1\n"); );
    // Body
    vlSelf->__PVT__pc_add_op2 = ((IData)(vlSelf->__PVT__prdt_pc_en)
                                  ? vlSelf->__PVT__prdt_pc_add_op
                                  : 4ULL);
    vlSelf->__PVT__pc_add_res = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ifu___ctor_var_reset(Vnpc_ysyx_22050598_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_pc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__flush_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__prdt_pc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__prdt_pc_add_op = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_now = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_r_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_in = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_add_op1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_add_op2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_add_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__raddr = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->__Vtask_pmem_read__0__rdata = 0;
    vlSelf->__Vtask_pmem_read__1__rdata = 0;
}
