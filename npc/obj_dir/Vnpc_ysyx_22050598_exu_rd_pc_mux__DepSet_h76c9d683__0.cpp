// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_exu_rd_pc_mux.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_sequent__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__0(Vnpc_ysyx_22050598_exu_rd_pc_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_sequent__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__0\n"); );
    // Body
    vlSelf->__PVT__csr_pc_en = ((IData)(vlSelf->__PVT__csr_ecall) 
                                | (IData)(vlSelf->__PVT__csr_mret));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__0(Vnpc_ysyx_22050598_exu_rd_pc_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__0\n"); );
    // Body
    vlSelf->__PVT__ex_pc_data_ena_o = ((IData)(vlSelf->__PVT__alu_pc_en) 
                                       | (IData)(vlSelf->__PVT__csr_pc_en));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__1(Vnpc_ysyx_22050598_exu_rd_pc_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__1\n"); );
    // Body
    vlSelf->__PVT__ex_pc_data_o = ((IData)(vlSelf->__PVT__csr_pc_en)
                                    ? vlSelf->__PVT__csr_rd_pc_data
                                    : vlSelf->__PVT__alu_pc_data);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__2(Vnpc_ysyx_22050598_exu_rd_pc_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_rd_pc_mux___nba_comb__TOP__npc__u_ysyx_22050598_exu_rd_pc_mux__2\n"); );
    // Body
    vlSelf->__PVT__ex_rd_data_o = ((IData)(vlSelf->__PVT__csr_rd_en)
                                    ? vlSelf->__PVT__csr_rd_pc_data
                                    : vlSelf->__PVT__alu_rd_data);
}
