// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_EX_LS.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__0\n"); );
    // Body
    vlSelf->__PVT__ex_ls_inst_is_ebreak_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_store_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_inst_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_pc_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_store_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_alu_rd_data_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_load_unsigned_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_write_rd_idx_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_load_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_ls_data_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__ex_ls_inst_is_ebreak_o = vlSelf->__PVT__ex_ls_inst_is_ebreak_r;
    vlSelf->__PVT__ex_ls_store_en_o = vlSelf->__PVT__ex_ls_store_en_r;
    vlSelf->__PVT__ex_ls_inst_o = vlSelf->__PVT__ex_ls_inst_r;
    vlSelf->__PVT__ex_ls_pc_o = vlSelf->__PVT__ex_ls_pc_r;
    vlSelf->__PVT__ex_ls_store_data_o = vlSelf->__PVT__ex_ls_store_data_r;
    vlSelf->__PVT__ex_ls_alu_rd_data_en_o = vlSelf->__PVT__ex_ls_alu_rd_data_en_r;
    vlSelf->__PVT__ex_ls_load_unsigned_o = vlSelf->__PVT__ex_ls_load_unsigned_r;
    vlSelf->__PVT__ex_ls_rd_idx_o = vlSelf->__PVT__ex_ls_write_rd_idx_r;
    vlSelf->__PVT__ex_ls_load_en_o = vlSelf->__PVT__ex_ls_load_en_r;
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_o = vlSelf->__PVT__ex_ls_alu_rd_ls_data_r;
    vlSelf->__PVT__ex_ls_ls_data_type_o = vlSelf->__PVT__ex_ls_ls_data_bus_r;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__1(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__1\n"); );
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
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_ls_data_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_ls_data_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_write_rd_idx_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_write_rd_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_inst_is_ebreak_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_inst_is_ebreak;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_load_unsigned;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__2(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__2\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_rd_data_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_alu_rd_data_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_store_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_store_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_store_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_load_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_load_en;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__3(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__3\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS__ex_ls_alu_rd_ls_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__ex_ls_alu_rd_ls_data;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__4(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___stl_sequent__TOP__npc__u_ysyx_22050598_EX_LS__4\n"); );
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
