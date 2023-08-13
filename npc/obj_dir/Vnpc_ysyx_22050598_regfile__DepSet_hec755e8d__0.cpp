// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_regfile.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__0(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__0\n"); );
    // Body
    vlSelf->__PVT__ebreak_a0 = vlSelf->__PVT__rf_r[0xaU];
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__2(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__2\n"); );
    // Body
    vlSelf->__PVT__read_rs1_data = vlSelf->__PVT__rf_r
        [vlSelf->__PVT__read_rs1_idx];
    vlSelf->__PVT__read_rs2_data = vlSelf->__PVT__rf_r
        [vlSelf->__PVT__read_rs2_idx];
}
