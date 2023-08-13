// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_LS_WB.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__0(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__0\n"); );
    // Body
    vlSelf->__PVT__ls_wb_inst_is_ebreak_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_inst_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_pc_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_data_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_en_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_idx_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_inst_is_ebreak_o = vlSelf->__PVT__ls_wb_inst_is_ebreak_r;
    vlSelf->__PVT__ls_wb_inst_o = vlSelf->__PVT__ls_wb_inst_r;
    vlSelf->__PVT__ls_wb_pc_o = vlSelf->__PVT__ls_wb_pc_r;
    vlSelf->__PVT__ls_wb_rd_data_o = vlSelf->__PVT__ls_wb_rd_data_r;
    vlSelf->__PVT__ls_wb_rd_en_o = vlSelf->__PVT__ls_wb_rd_en_r;
    vlSelf->__PVT__ls_wb_rd_idx_o = vlSelf->__PVT__ls_wb_rd_idx_r;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__1(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__1\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_inst_is_ebreak;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_inst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_pc;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_idx;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__2(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__2\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_data;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__3(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___stl_sequent__TOP__npc__ysyx_22050598_LS_WB__3\n"); );
    // Body
    vlSelf->__PVT__ls_wb_en = (1U & (~ (IData)(vlSelf->__PVT__ls_wb_stall)));
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__lden 
        = vlSelf->__PVT__ls_wb_en;
}
