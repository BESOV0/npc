// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_EX_LS.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___ico_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___ico_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0\n"); );
    // Body
    vlSelf->__PVT__ex_ls_inst_is_ebreak_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_inst_is_ebreak_o = vlSelf->__PVT__ex_ls_inst_is_ebreak_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__1(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__1\n"); );
    // Body
    vlSelf->__PVT__ex_ls_store_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_store_en_o = vlSelf->__PVT__ex_ls_store_en_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__2(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__2\n"); );
    // Body
    vlSelf->__PVT__ex_ls_inst_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_inst_o = vlSelf->__PVT__ex_ls_inst_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__3(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__3\n"); );
    // Body
    vlSelf->__PVT__ex_ls_pc_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_pc_o = vlSelf->__PVT__ex_ls_pc_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__4(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__4\n"); );
    // Body
    vlSelf->__PVT__ex_ls_store_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_store_data_o = vlSelf->__PVT__ex_ls_store_data_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__5(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__5\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_rd_data_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_alu_rd_data_en_o = vlSelf->__PVT__ex_ls_alu_rd_data_en_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__6(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__6\n"); );
    // Body
    vlSelf->__PVT__ex_ls_load_unsigned_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_load_unsigned_o = vlSelf->__PVT__ex_ls_load_unsigned_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__7(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__7\n"); );
    // Body
    vlSelf->__PVT__ex_ls_write_rd_idx_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_rd_idx_o = vlSelf->__PVT__ex_ls_write_rd_idx_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__8(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__8\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_alu_rd_data_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__9(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__9\n"); );
    // Body
    vlSelf->__PVT__ex_ls_load_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_load_en_o = vlSelf->__PVT__ex_ls_load_en_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__10(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__10\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_o = vlSelf->__PVT__ex_ls_alu_rd_ls_data_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__11(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__11\n"); );
    // Body
    vlSelf->__PVT__ex_ls_ls_data_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_ls_data_type_o = vlSelf->__PVT__ex_ls_ls_data_bus_r;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__12(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__12\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_pc;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__13(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__13\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_write_rd_idx;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__14(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__14\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_inst_is_ebreak;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__15(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__15\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_store_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__16(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__16\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_load_unsigned;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__17(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__17\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_inst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__18(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_sequent__TOP__npc__u_ysyx_22050598_EX_LS__18\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_ls_data_bus;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__0(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_store_data;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__1(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__1\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_load_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__2(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__2\n"); );
    // Body
    vlSelf->__PVT__ex_ls_en = (1U & (~ (IData)(vlSelf->__PVT__ex_ls_stall)));
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_en;
    vlSelf->__PVT__ex_ls_store_data_en = ((IData)(vlSelf->__PVT__ex_ls_en) 
                                          & (IData)(vlSelf->__PVT__ex_ls_store_en));
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__lden 
        = vlSelf->__PVT__ex_ls_store_data_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__3(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___nba_comb__TOP__npc__u_ysyx_22050598_EX_LS__3\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_alu_rd_ls_data;
}
