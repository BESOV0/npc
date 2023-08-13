// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval__0(Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1___stl_sequent__TOP__npc__u_ysyx_22050598_ifu__pc_dfflr_resetval__0\n"); );
    // Body
    vlSelf->__PVT__qout = vlSelf->__PVT__qout_r;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1___ctor_var_reset(Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__lden = VL_RAND_RESET_I(1);
    vlSelf->__PVT__dnxt = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__qout = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst_n = VL_RAND_RESET_I(1);
    vlSelf->__PVT__qout_r = VL_RAND_RESET_Q(64);
    vlSelf->__Vdly__qout_r = VL_RAND_RESET_Q(64);
}
