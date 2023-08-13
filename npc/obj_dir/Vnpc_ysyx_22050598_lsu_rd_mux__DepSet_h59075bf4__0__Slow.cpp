// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_lsu_rd_mux.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_lsu_rd_mux___stl_sequent__TOP__npc__ysyx_22050598_lsu_rd_mux__0(Vnpc_ysyx_22050598_lsu_rd_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu_rd_mux___stl_sequent__TOP__npc__ysyx_22050598_lsu_rd_mux__0\n"); );
    // Body
    vlSelf->__PVT__ls_rd_data = ((IData)(vlSelf->__PVT__ls_load_en)
                                  ? vlSelf->__PVT__ls_lsu_rd_data
                                  : vlSelf->__PVT__ls_alu_rd_data);
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_lsu_rd_mux___ctor_var_reset(Vnpc_ysyx_22050598_lsu_rd_mux* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_lsu_rd_mux___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ls_alu_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_lsu_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_load_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_rd_data = VL_RAND_RESET_Q(64);
}
