// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_pipeline_ctrl.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__0(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__0\n"); );
    // Body
    vlSelf->__PVT__inst_is_muldiv = (((IData)(vlSelf->__PVT__exu_is_mul) 
                                      | (IData)(vlSelf->__PVT__exu_is_div)) 
                                     | (IData)(vlSelf->__PVT__exu_is_rem));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__1(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__1\n"); );
    // Body
    vlSelf->__PVT__muldiv_stall = ((~ (IData)(vlSelf->__PVT__muldivout_valid)) 
                                   & (IData)(vlSelf->__PVT__inst_is_muldiv));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__2(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__2\n"); );
    // Body
    vlSelf->__PVT__temp_id_pc_data = (vlSelf->__PVT__id_pc_data 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_pc_ena), 0x40U));
    vlSelf->__PVT__temp_ex_pc_data = (vlSelf->__PVT__ex_pc_data 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_pc_ena), 0x40U));
    vlSelf->__PVT__ex_id_not_equal = VL_REDOR_Q((vlSelf->__PVT__temp_ex_pc_data 
                                                 ^ vlSelf->__PVT__temp_id_pc_data));
    vlSelf->__PVT__pc_flush_ena = vlSelf->__PVT__ex_id_not_equal;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__3(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___stl_sequent__TOP__npc__ysyx_22050598_pipeline_ctrl__3\n"); );
    // Body
    vlSelf->__PVT__pipeline_stall = (0x1fU & ((3U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__forward_load_stall), 5U)) 
                                              | VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__muldiv_stall), 5U)));
    vlSelf->__PVT__pipeline_flush = (7U & ((4U & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__forward_load_stall), 3U)) 
                                           | VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__pc_flush_ena), 3U)));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_pipeline_ctrl___ctor_var_reset(Vnpc_ysyx_22050598_pipeline_ctrl* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_pipeline_ctrl___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ex_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_pc_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pipeline_flush = VL_RAND_RESET_I(3);
    vlSelf->__PVT__muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldivout_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_is_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__exu_is_rem = VL_RAND_RESET_I(1);
    vlSelf->__PVT__forward_load_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pipeline_stall = VL_RAND_RESET_I(5);
    vlSelf->__PVT__temp_ex_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_id_pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_id_not_equal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_flush_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_is_muldiv = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_stall = VL_RAND_RESET_I(1);
}
