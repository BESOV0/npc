// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_pipeline_ctrl.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__0(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__0\n"); );
    // Body
    vlSelf->__PVT__inst_is_muldiv = (((IData)(vlSelf->__PVT__exu_is_mul) 
                                      | (IData)(vlSelf->__PVT__exu_is_div)) 
                                     | (IData)(vlSelf->__PVT__exu_is_rem));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__0(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__0\n"); );
    // Body
    vlSelf->__PVT__muldiv_stall = ((~ (IData)(vlSelf->__PVT__muldivout_valid)) 
                                   & (IData)(vlSelf->__PVT__inst_is_muldiv));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__1(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__1\n"); );
    // Body
    vlSelf->__PVT__temp_id_pc_data = (vlSelf->__PVT__id_pc_data 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_pc_ena), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__2(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__pipeline_stall = (0x1fU & ((3U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__forward_load_stall), 5U)) 
                                              | VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__muldiv_stall), 5U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__3(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__3\n"); );
    // Body
    vlSelf->__PVT__temp_ex_pc_data = (vlSelf->__PVT__ex_pc_data 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_pc_ena), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__4(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__4\n"); );
    // Body
    vlSelf->__PVT__ex_id_not_equal = VL_REDOR_Q((vlSelf->__PVT__temp_ex_pc_data 
                                                 ^ vlSelf->__PVT__temp_id_pc_data));
    vlSelf->__PVT__pc_flush_ena = vlSelf->__PVT__ex_id_not_equal;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__5(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___nba_comb__TOP__npc__ysyx_22050598_pipeline_ctrl__5\n"); );
    // Body
    vlSelf->__PVT__pipeline_flush = (7U & ((4U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__forward_load_stall), 3U)) 
                                           | VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__pc_flush_ena), 3U)));
}
