// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_LS_WB.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___ico_sequent__TOP__npc__ysyx_22050598_LS_WB__0(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___ico_sequent__TOP__npc__ysyx_22050598_LS_WB__0\n"); );
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
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__0(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__0\n"); );
    // Body
    vlSelf->__PVT__ls_wb_inst_is_ebreak_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_inst_is_ebreak_o = vlSelf->__PVT__ls_wb_inst_is_ebreak_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__1(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__1\n"); );
    // Body
    vlSelf->__PVT__ls_wb_inst_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_inst_o = vlSelf->__PVT__ls_wb_inst_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__2(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__2\n"); );
    // Body
    vlSelf->__PVT__ls_wb_pc_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_pc_o = vlSelf->__PVT__ls_wb_pc_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__3(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__3\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_ebreak_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_inst_is_ebreak;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__4(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__4\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_inst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__5(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__5\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_pc;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__6(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__6\n"); );
    // Body
    vlSelf->__PVT__ls_wb_rd_data_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_data_o = vlSelf->__PVT__ls_wb_rd_data_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__7(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__7\n"); );
    // Body
    vlSelf->__PVT__ls_wb_rd_en_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_en_o = vlSelf->__PVT__ls_wb_rd_en_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__8(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__8\n"); );
    // Body
    vlSelf->__PVT__ls_wb_rd_idx_r = vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__qout;
    vlSelf->__PVT__ls_wb_rd_idx_o = vlSelf->__PVT__ls_wb_rd_idx_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__9(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__9\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__10(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_sequent__TOP__npc__ysyx_22050598_LS_WB__10\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_idx_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_idx;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_comb__TOP__npc__ysyx_22050598_LS_WB__0(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_comb__TOP__npc__ysyx_22050598_LS_WB__0\n"); );
    // Body
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB__ls_wb_rd_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ls_wb_rd_data;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_LS_WB___nba_comb__TOP__npc__ysyx_22050598_LS_WB__1(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___nba_comb__TOP__npc__ysyx_22050598_LS_WB__1\n"); );
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
