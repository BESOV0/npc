// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr__0(Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9___nba_sequent__TOP__npc__u_ysyx_22050598_exu_csr__mstatus_dfflr__0\n"); );
    // Body
    vlSelf->__Vdly__qout_r = vlSelf->__PVT__qout_r;
    if (vlSelf->__PVT__rst_n) {
        if (vlSelf->__PVT__lden) {
            vlSelf->__Vdly__qout_r = vlSelf->__PVT__dnxt;
        }
    } else {
        vlSelf->__Vdly__qout_r = 0xa00001800ULL;
    }
    vlSelf->__PVT__qout_r = vlSelf->__Vdly__qout_r;
    vlSelf->__PVT__qout = vlSelf->__PVT__qout_r;
}
