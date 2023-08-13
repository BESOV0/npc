// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_ifu.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_ifu___nba_sequent__TOP__npc__u_ysyx_22050598_ifu__1(Vnpc_ysyx_22050598_ifu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ifu___nba_sequent__TOP__npc__u_ysyx_22050598_ifu__1\n"); );
    // Body
    vlSelf->__PVT__pc_add_op2 = ((IData)(vlSelf->__PVT__prdt_pc_en)
                                  ? vlSelf->__PVT__prdt_pc_add_op
                                  : 4ULL);
    vlSelf->__PVT__pc_add_res = (vlSelf->__PVT__pc_add_op1 
                                 + vlSelf->__PVT__pc_add_op2);
}
