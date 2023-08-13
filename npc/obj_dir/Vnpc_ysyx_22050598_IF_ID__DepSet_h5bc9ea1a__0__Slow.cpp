// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_IF_ID.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_IF_ID___stl_sequent__TOP__npc__u_ysyx_22050598_IF_ID__0(Vnpc_ysyx_22050598_IF_ID* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_IF_ID___stl_sequent__TOP__npc__u_ysyx_22050598_IF_ID__0\n"); );
    // Body
    vlSelf->__PVT__pc_r = vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__pc_dfflr.__PVT__qout;
    vlSelf->__PVT__inst_r = vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__inst_dfflr.__PVT__qout;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__pc_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__inst_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__pc_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__inst_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSelf->__PVT__if_pc_o = vlSelf->__PVT__pc_r;
    vlSelf->__PVT__if_inst_o = vlSelf->__PVT__inst_r;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_IF_ID___stl_sequent__TOP__npc__u_ysyx_22050598_IF_ID__1(Vnpc_ysyx_22050598_IF_ID* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_IF_ID___stl_sequent__TOP__npc__u_ysyx_22050598_IF_ID__1\n"); );
    // Body
    vlSelf->__PVT__if_en = (1U & (~ (IData)(vlSelf->__PVT__if_stall)));
    vlSelf->__PVT__temp_inst = ((IData)(vlSelf->__PVT__if_flush)
                                 ? 0x13U : vlSelf->__PVT__if_inst);
    vlSelf->__PVT__temp_pc = ((IData)(vlSelf->__PVT__if_flush)
                               ? 0ULL : vlSelf->__PVT__if_pc_i);
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__pc_dfflr.__PVT__lden 
        = vlSelf->__PVT__if_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__inst_dfflr.__PVT__lden 
        = vlSelf->__PVT__if_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID__pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_pc;
}
