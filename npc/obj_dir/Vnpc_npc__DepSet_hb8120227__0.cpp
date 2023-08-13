// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_npc.h"

VL_INLINE_OPT void Vnpc_npc___ico_sequent__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ico_sequent__TOP__npc__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__clk 
        = vlSelf->clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__rst 
        = vlSelf->rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__rst 
        = vlSelf->rst;
}

VL_INLINE_OPT void Vnpc_npc___ico_sequent__TOP__npc__1(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ico_sequent__TOP__npc__1\n"); );
    // Body
    vlSelf->__PVT__if_id_inst = vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__id_inst;
    vlSelf->test_if_inst = vlSelf->__PVT__if_id_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_inst 
        = vlSelf->__PVT__if_id_inst;
    vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__if_inst 
        = vlSelf->__PVT__if_id_inst;
}

VL_INLINE_OPT void Vnpc_npc___ico_sequent__TOP__npc__2(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___ico_sequent__TOP__npc__2\n"); );
    // Body
    vlSelf->__PVT__if_prdt_taken = vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__prdt_taken;
    vlSelf->__PVT__if_bpu_pc_op = vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__bpu_pc_add_op;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__prdt_pc_en 
        = vlSelf->__PVT__if_prdt_taken;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__prdt_pc_add_op 
        = vlSelf->__PVT__if_bpu_pc_op;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__0\n"); );
    // Body
    vlSelf->__PVT__wb_inst_is_ebreak = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_inst_is_ebreak_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EBREAK.__PVT__ebreak_flag 
        = vlSelf->__PVT__wb_inst_is_ebreak;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__1(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__1\n"); );
    // Body
    vlSelf->__PVT__wb_inst = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_inst_o;
    vlSelf->test_wb_inst = vlSelf->__PVT__wb_inst;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__2(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__2\n"); );
    // Body
    vlSelf->__PVT__wb_pc = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_pc_o;
    vlSelf->test_wb_pc = vlSelf->__PVT__wb_pc;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__3(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__3\n"); );
    // Body
    vlSelf->__PVT__ls_inst_is_ebreak = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_inst_is_ebreak_o;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_inst_is_ebreak 
        = vlSelf->__PVT__ls_inst_is_ebreak;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__4(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__4\n"); );
    // Body
    vlSelf->__PVT__ex_ls_data_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_ls_data_bus_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_ls_data_bus 
        = vlSelf->__PVT__ex_ls_data_bus;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__5(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__5\n"); );
    // Body
    vlSelf->__PVT__ls_store_en = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_store_en_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__store_en 
        = vlSelf->__PVT__ls_store_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__6(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__6\n"); );
    // Body
    vlSelf->__PVT__ex_inst = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_inst 
        = vlSelf->__PVT__ex_inst;
    vlSelf->test_ex_inst = vlSelf->__PVT__ex_inst;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__7(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__7\n"); );
    // Body
    vlSelf->__PVT__ls_inst = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_inst_o;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_inst 
        = vlSelf->__PVT__ls_inst;
    vlSelf->test_ls_inst = vlSelf->__PVT__ls_inst;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__8(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__8\n"); );
    // Body
    vlSelf->__PVT__ls_pc = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_pc_o;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_pc 
        = vlSelf->__PVT__ls_pc;
    vlSelf->test_ls_pc = vlSelf->__PVT__ls_pc;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__9(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__9\n"); );
    // Body
    vlSelf->__PVT__ls_store_data = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_store_data_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__ls_store_data 
        = vlSelf->__PVT__ls_store_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__10(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__10\n"); );
    // Body
    vlSelf->__PVT__ex_inst_divrem_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_divrem_bus_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_divrem_bus 
        = vlSelf->__PVT__ex_inst_divrem_bus;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__11(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__11\n"); );
    // Body
    vlSelf->__PVT__ls_alu_rd_data_en = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_alu_rd_data_en_o;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_en 
        = vlSelf->__PVT__ls_alu_rd_data_en;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__mem_rd_en 
        = vlSelf->__PVT__ls_alu_rd_data_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__12(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__12\n"); );
    // Body
    vlSelf->__PVT__ls_load_unsigned = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_load_unsigned_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__load_unsigned 
        = vlSelf->__PVT__ls_load_unsigned;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__13(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__13\n"); );
    // Body
    vlSelf->__PVT__wb_rd_data = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_data_o;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__wb_data 
        = vlSelf->__PVT__wb_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__write_rd_data 
        = vlSelf->__PVT__wb_rd_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__14(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__14\n"); );
    // Body
    vlSelf->__PVT__ls_rd_idx = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_rd_idx_o;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_idx 
        = vlSelf->__PVT__ls_rd_idx;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__mem_rd_idx 
        = vlSelf->__PVT__ls_rd_idx;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__15(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__15\n"); );
    // Body
    vlSelf->__PVT__ex_w_reg_en = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_w_reg_en_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_write_reg_en 
        = vlSelf->__PVT__ex_w_reg_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__16(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__16\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_rd_data_en = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_rd_data_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_alu_rd_data_en 
        = vlSelf->__PVT__ex_ls_alu_rd_data_en;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__ex_rd_en 
        = vlSelf->__PVT__ex_ls_alu_rd_data_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__17(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__17\n"); );
    // Body
    vlSelf->__PVT__ls_load_en = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_load_en_o;
    vlSymsp->TOP__npc__ysyx_22050598_lsu_rd_mux.__PVT__ls_load_en 
        = vlSelf->__PVT__ls_load_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__load_en 
        = vlSelf->__PVT__ls_load_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__18(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__18\n"); );
    // Body
    vlSelf->__PVT__ls_alu_rd_ls_data = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_alu_rd_ls_data_o;
    vlSymsp->TOP__npc__ysyx_22050598_lsu_rd_mux.__PVT__ls_alu_rd_data 
        = vlSelf->__PVT__ls_alu_rd_ls_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__ls_loc 
        = vlSelf->__PVT__ls_alu_rd_ls_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__19(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__19\n"); );
    // Body
    vlSelf->__PVT__if_id_pc = vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__pc_now;
    vlSelf->__PVT__if_id_inst = vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__id_inst;
    vlSelf->test_if_pc = vlSelf->__PVT__if_id_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_pc_i 
        = vlSelf->__PVT__if_id_pc;
    vlSelf->test_if_inst = vlSelf->__PVT__if_id_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_inst 
        = vlSelf->__PVT__if_id_inst;
    vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__if_inst 
        = vlSelf->__PVT__if_id_inst;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__20(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__20\n"); );
    // Body
    vlSelf->__PVT__if_prdt_taken = vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__prdt_taken;
    vlSelf->__PVT__if_bpu_pc_op = vlSymsp->TOP__npc__ysyx_22050598_ifu_bpu.__PVT__bpu_pc_add_op;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__prdt_pc_en 
        = vlSelf->__PVT__if_prdt_taken;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__prdt_pc_add_op 
        = vlSelf->__PVT__if_bpu_pc_op;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__21(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__21\n"); );
    // Body
    vlSelf->__PVT__ls_ls_data_type = vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_ls_data_type_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__ls_type 
        = vlSelf->__PVT__ls_ls_data_type;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__22(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__22\n"); );
    // Body
    vlSelf->__PVT__wb_rd_en = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_en_o;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__wb_rd_en 
        = vlSelf->__PVT__wb_rd_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__write_en 
        = vlSelf->__PVT__wb_rd_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__23(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__23\n"); );
    // Body
    vlSelf->__PVT__wb_rd_idx = vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_idx_o;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__wb_rd_idx 
        = vlSelf->__PVT__wb_rd_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__write_rd_idx 
        = vlSelf->__PVT__wb_rd_idx;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__24(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__24\n"); );
    // Body
    vlSelf->__PVT__ex_inst_mul_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_mul_bus_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_mul_bus 
        = vlSelf->__PVT__ex_inst_mul_bus;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__25(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__25\n"); );
    // Body
    vlSelf->__PVT__id_pc = vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_pc_o;
    vlSelf->test_id_pc = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_pc 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__pc_data 
        = vlSelf->__PVT__id_pc;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__id_pc_data 
        = vlSelf->__PVT__id_pc;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__26(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__26\n"); );
    // Body
    vlSelf->__PVT__ex_pc = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_pc_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_pc 
        = vlSelf->__PVT__ex_pc;
    vlSelf->test_ex_pc = vlSelf->__PVT__ex_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__csr_ecall_pc 
        = vlSelf->__PVT__ex_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_pc 
        = vlSelf->__PVT__ex_pc;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__27(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__27\n"); );
    // Body
    vlSelf->__PVT__ex_bs_zimm_data = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_bs_zimm_data_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__csr_zimm_i 
        = vlSelf->__PVT__ex_bs_zimm_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_bs_zimm_data 
        = vlSelf->__PVT__ex_bs_zimm_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__28(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__28\n"); );
    // Body
    vlSelf->__PVT__muldivout_valid = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__muldivout_valid;
    vlSelf->__PVT__muldiv_ready = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__muldiv_ready;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__muldivout_valid 
        = vlSelf->__PVT__muldivout_valid;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__muldiv_ready 
        = vlSelf->__PVT__muldiv_ready;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__29(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__29\n"); );
    // Body
    vlSelf->__PVT__ex_ls_req = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_ls_req_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_ls_req 
        = vlSelf->__PVT__ex_ls_req;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__30(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__30\n"); );
    // Body
    vlSelf->__PVT__ex_inst_is_rv64 = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_rv64_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_rv64 
        = vlSelf->__PVT__ex_inst_is_rv64;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__31(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__31\n"); );
    // Body
    vlSelf->__PVT__ex_write_rd_idx = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_write_rd_idx_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_write_rd_idx 
        = vlSelf->__PVT__ex_write_rd_idx;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__ex_rd_idx 
        = vlSelf->__PVT__ex_write_rd_idx;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__32(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__32\n"); );
    // Body
    vlSelf->__PVT__ex_csr_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_csr_bus_o;
    vlSelf->__Vcellinp__u_ysyx_22050598_exu_rd_pc_mux__csr_rd_en 
        = VL_REDOR_I((IData)(vlSelf->__PVT__ex_csr_bus));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__ex_csr_bus_i 
        = vlSelf->__PVT__ex_csr_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__csr_rd_en 
        = vlSelf->__Vcellinp__u_ysyx_22050598_exu_rd_pc_mux__csr_rd_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__33(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__33\n"); );
    // Body
    vlSelf->__PVT__ex_branch_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_branch_bus_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_branch_bus 
        = vlSelf->__PVT__ex_branch_bus;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__34(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__34\n"); );
    // Body
    vlSelf->__PVT__ex_alu_op_a = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__alu_op_a_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__csr_reg_i 
        = vlSelf->__PVT__ex_alu_op_a;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_op_a 
        = vlSelf->__PVT__ex_alu_op_a;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__35(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__35\n"); );
    // Body
    vlSelf->__PVT__ex_inst_is_ebreak = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_ebreak_o;
    vlSelf->__PVT__ex_inst_is_set = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_set_o;
    vlSelf->__PVT__ex_inst_5_shamt = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_5_shamt_o;
    vlSelf->__PVT__ex_inst_is_srax = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_srax_o;
    vlSelf->__PVT__ex_inst_is_store = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_store_o;
    vlSelf->__PVT__ex_inst_is_mret = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_mret_o;
    vlSelf->__PVT__ex_inst_is_ecall = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_ecall_o;
    vlSelf->__PVT__ex_inst_is_jal = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_jal_o;
    vlSelf->__PVT__ex_inst_is_jalr = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_jalr_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_inst_is_ebreak 
        = vlSelf->__PVT__ex_inst_is_ebreak;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_set 
        = vlSelf->__PVT__ex_inst_is_set;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_5_shamt 
        = vlSelf->__PVT__ex_inst_5_shamt;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_srax 
        = vlSelf->__PVT__ex_inst_is_srax;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_store 
        = vlSelf->__PVT__ex_inst_is_store;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__ex_inst_is_mret_i 
        = vlSelf->__PVT__ex_inst_is_mret;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__csr_mret 
        = vlSelf->__PVT__ex_inst_is_mret;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__ex_inst_is_ecall_i 
        = vlSelf->__PVT__ex_inst_is_ecall;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__csr_ecall 
        = vlSelf->__PVT__ex_inst_is_ecall;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_jal 
        = vlSelf->__PVT__ex_inst_is_jal;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_inst_is_jalr 
        = vlSelf->__PVT__ex_inst_is_jalr;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__36(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__36\n"); );
    // Body
    vlSelf->__PVT__ex_ls_store_en = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_store_en_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_store_en 
        = vlSelf->__PVT__ex_ls_store_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__37(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__37\n"); );
    // Body
    vlSelf->__PVT__ex_alu_op_b = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__alu_op_b_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__csr_imm_i 
        = vlSelf->__PVT__ex_alu_op_b;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_op_b 
        = vlSelf->__PVT__ex_alu_op_b;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__38(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__38\n"); );
    // Body
    vlSelf->__PVT__ex_unsigned_bus = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_unsigned_bus_o;
    vlSelf->__Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_unsigned_bus), 0U));
    vlSelf->__Vcellinp__u_ysyx_22050598_exu_alu__ex_unsigned_bus 
        = (1U & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__ex_unsigned_bus), 1U));
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_load_unsigned 
        = vlSelf->__Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_load_unsigned;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_unsigned_bus 
        = vlSelf->__Vcellinp__u_ysyx_22050598_exu_alu__ex_unsigned_bus;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__39(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__39\n"); );
    // Body
    vlSelf->__PVT__ex_op_type = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_op_type_o;
    vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_rem 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_op_type), 5U));
    vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_div 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_op_type), 6U));
    vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_mul 
        = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_op_type), 7U));
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_op_type 
        = vlSelf->__PVT__ex_op_type;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__exu_is_rem 
        = vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_rem;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__exu_is_div 
        = vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_div;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__exu_is_mul 
        = vlSelf->__Vcellinp__ysyx_22050598_pipeline_ctrl__exu_is_mul;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__40(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__40\n"); );
    // Body
    vlSelf->__PVT__id_inst = vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_inst_o;
    vlSelf->test_id_inst = vlSelf->__PVT__id_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst 
        = vlSelf->__PVT__id_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_i 
        = vlSelf->__PVT__id_inst;
}

VL_INLINE_OPT void Vnpc_npc___nba_sequent__TOP__npc__41(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_sequent__TOP__npc__41\n"); );
    // Body
    vlSelf->__PVT__id_write_rd_idx = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_write_rd_idx_o;
    vlSelf->__PVT__id_read_rs1_idx = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_read_rs1_idx_o;
    vlSelf->__PVT__id_read_rs2_idx = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_read_rs2_idx_o;
    vlSelf->__PVT__id_ex_inst_is_jal = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_jal_o;
    vlSelf->__PVT__id_ex_ls_req = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_ls_req_o;
    vlSelf->__PVT__id_ex_inst_is_store = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_store_o;
    vlSelf->__PVT__id_ex_inst_is_jalr = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_jalr_o;
    vlSelf->__PVT__id_ex_branch_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_branch_bus_o;
    vlSelf->__PVT__id_ex_inst_is_rv64 = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_rv64_o;
    vlSelf->__PVT__id_ex_inst_5_shamt = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_5_shamt_o;
    vlSelf->__PVT__id_ex_inst_divrem_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_divrem_bus_o;
    vlSelf->__PVT__id_ex_inst_mul_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_mul_bus_o;
    vlSelf->__PVT__id_ex_inst_is_srax = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_srax_o;
    vlSelf->__PVT__id_ex_inst_is_ebreak = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_ebreak_o;
    vlSelf->__PVT__id_ex_inst_is_ecall = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_ecall_o;
    vlSelf->__PVT__id_ex_inst_is_mret = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_mret_o;
    vlSelf->__PVT__id_ex_csr_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_csr_bus_o;
    vlSelf->__PVT__id_inst_is_illegal = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_illegal_o;
    vlSelf->__PVT__id_ex_unsigned_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_unsigned_bus_o;
    vlSelf->__PVT__id_ex_inst_is_set = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_set_o;
    vlSelf->__PVT__id_ex_ls_data_bus = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_ls_data_bus_o;
    vlSelf->__PVT__id_ex_inst_is_csri = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_inst_is_csri_o;
    vlSelf->__PVT__id_ex_op_type = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_op_type_o;
    vlSelf->__PVT__id_ex_w_reg_en = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_w_reg_en_o;
    vlSelf->__PVT__id_imm = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_imm_o;
    vlSelf->__PVT__id_op_a_sel = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_op_a_sel_o;
    vlSelf->__PVT__id_op_b_sel = vlSymsp->TOP__npc__u_ysyx_22050598_idu_decode.__PVT__id_op_b_sel_o;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_rd_idx 
        = vlSelf->__PVT__id_write_rd_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_write_rd_idx 
        = vlSelf->__PVT__id_write_rd_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__read_rs1_idx 
        = vlSelf->__PVT__id_read_rs1_idx;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_rs1_idx 
        = vlSelf->__PVT__id_read_rs1_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__read_rs2_idx 
        = vlSelf->__PVT__id_read_rs2_idx;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_rs2_idx 
        = vlSelf->__PVT__id_read_rs2_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_jal 
        = vlSelf->__PVT__id_ex_inst_is_jal;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_ls_req 
        = vlSelf->__PVT__id_ex_ls_req;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_store 
        = vlSelf->__PVT__id_ex_inst_is_store;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_inst_is_store 
        = vlSelf->__PVT__id_ex_inst_is_store;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_jalr 
        = vlSelf->__PVT__id_ex_inst_is_jalr;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_branch_bus 
        = vlSelf->__PVT__id_ex_branch_bus;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_branch_bus 
        = vlSelf->__PVT__id_ex_branch_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_rv64 
        = vlSelf->__PVT__id_ex_inst_is_rv64;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_5_shamt 
        = vlSelf->__PVT__id_ex_inst_5_shamt;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_divrem_bus 
        = vlSelf->__PVT__id_ex_inst_divrem_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_mul_bus 
        = vlSelf->__PVT__id_ex_inst_mul_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_srax 
        = vlSelf->__PVT__id_ex_inst_is_srax;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_ebreak 
        = vlSelf->__PVT__id_ex_inst_is_ebreak;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_ecall 
        = vlSelf->__PVT__id_ex_inst_is_ecall;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_mret 
        = vlSelf->__PVT__id_ex_inst_is_mret;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_csr_bus 
        = vlSelf->__PVT__id_ex_csr_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_illegal 
        = vlSelf->__PVT__id_inst_is_illegal;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_unsigned_bus 
        = vlSelf->__PVT__id_ex_unsigned_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_inst_is_set 
        = vlSelf->__PVT__id_ex_inst_is_set;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_ls_data_bus 
        = vlSelf->__PVT__id_ex_ls_data_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_inst_is_csri 
        = vlSelf->__PVT__id_ex_inst_is_csri;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_inst_is_csri 
        = vlSelf->__PVT__id_ex_inst_is_csri;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_op_type 
        = vlSelf->__PVT__id_ex_op_type;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_w_reg_en 
        = vlSelf->__PVT__id_ex_w_reg_en;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__id_imm 
        = vlSelf->__PVT__id_imm;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__alu_op_a_sel 
        = vlSelf->__PVT__id_op_a_sel;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__alu_op_b_sel 
        = vlSelf->__PVT__id_op_b_sel;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__0(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__0\n"); );
    // Body
    vlSelf->__PVT__ebreak_a0 = vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__ebreak_a0;
    vlSymsp->TOP__npc__u_ysyx_22050598_EBREAK.__PVT__ebreak_a0 
        = vlSelf->__PVT__ebreak_a0;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__1(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__1\n"); );
    // Body
    vlSelf->__PVT__ex_ls_store_data = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_store_data_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_store_data 
        = vlSelf->__PVT__ex_ls_store_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__2(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__2\n"); );
    // Body
    vlSelf->__PVT__ex_ls_load_en = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_load_en_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_load_en 
        = vlSelf->__PVT__ex_ls_load_en;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__ex_load_en 
        = vlSelf->__PVT__ex_ls_load_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__3(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__3\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_pc_en = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_pc_en_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__alu_pc_en 
        = vlSelf->__PVT__ex_ls_alu_pc_en;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__4(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__4\n"); );
    // Body
    vlSelf->__PVT__ex_pc_data_ena = vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__ex_pc_data_ena_o;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__ex_pc_ena 
        = vlSelf->__PVT__ex_pc_data_ena;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__5(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__5\n"); );
    // Body
    vlSelf->__PVT__id_read_rs1_data = vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__read_rs1_data;
    vlSelf->__PVT__id_read_rs2_data = vlSymsp->TOP__npc__u_ysyx_22050598_regfile.__PVT__read_rs2_data;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__rs1_data 
        = vlSelf->__PVT__id_read_rs1_data;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__rs2_data 
        = vlSelf->__PVT__id_read_rs2_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__6(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__6\n"); );
    // Body
    vlSelf->__PVT__ls_wb_load_data = vlSymsp->TOP__npc__u_ysyx_22050598_lsu.__PVT__load_data_o;
    vlSymsp->TOP__npc__ysyx_22050598_lsu_rd_mux.__PVT__ls_lsu_rd_data 
        = vlSelf->__PVT__ls_wb_load_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__7(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__7\n"); );
    // Body
    vlSelf->__PVT__ls_rd_data = vlSymsp->TOP__npc__ysyx_22050598_lsu_rd_mux.__PVT__ls_rd_data;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_rd_data 
        = vlSelf->__PVT__ls_rd_data;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__mem_data 
        = vlSelf->__PVT__ls_rd_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__8(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__8\n"); );
    // Body
    vlSelf->__PVT__forward_load_stall = vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__forward_load_stall;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__forward_load_stall 
        = vlSelf->__PVT__forward_load_stall;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__9(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__9\n"); );
    // Body
    vlSelf->__PVT__pipeline_stall = vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__pipeline_stall;
    vlSelf->__Vcellinp__u_ysyx_22050598_ifu__pc_stall 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__pipeline_stall), 0U));
    vlSelf->__Vcellinp__u_ysyx_22050598_IF_ID__if_stall 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__pipeline_stall), 1U));
    vlSelf->__Vcellinp__ysyx_22050598_LS_WB__ls_wb_stall 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__pipeline_stall), 4U));
    vlSelf->__Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_stall 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__pipeline_stall), 3U));
    vlSelf->__Vcellinp__u_ysyx_22050598_ID_EX__id_ex_stall 
        = (1U & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__pipeline_stall), 2U));
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__pc_stall 
        = vlSelf->__Vcellinp__u_ysyx_22050598_ifu__pc_stall;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_stall 
        = vlSelf->__Vcellinp__u_ysyx_22050598_IF_ID__if_stall;
    vlSymsp->TOP__npc__ysyx_22050598_LS_WB.__PVT__ls_wb_stall 
        = vlSelf->__Vcellinp__ysyx_22050598_LS_WB__ls_wb_stall;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_stall 
        = vlSelf->__Vcellinp__u_ysyx_22050598_EX_LS__ex_ls_stall;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_stall 
        = vlSelf->__Vcellinp__u_ysyx_22050598_ID_EX__id_ex_stall;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__10(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__10\n"); );
    // Body
    vlSelf->__PVT__ex_csr_rd_pc_data = vlSymsp->TOP__npc__u_ysyx_22050598_exu_csr.__PVT__csr_rd_pc_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__csr_rd_pc_data 
        = vlSelf->__PVT__ex_csr_rd_pc_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__11(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__11\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_pc = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_pc_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__alu_pc_data 
        = vlSelf->__PVT__ex_ls_alu_pc;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__12(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__12\n"); );
    // Body
    vlSelf->__PVT__ex_ls_alu_rd_ls_data = vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_alu_rd_ls_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__alu_rd_data 
        = vlSelf->__PVT__ex_ls_alu_rd_ls_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__13(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__13\n"); );
    // Body
    vlSelf->__PVT__ex_pc_data = vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__ex_pc_data_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__flush_pc 
        = vlSelf->__PVT__ex_pc_data;
    vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__ex_pc_data 
        = vlSelf->__PVT__ex_pc_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__14(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__14\n"); );
    // Body
    vlSelf->__PVT__ex_rd_data = vlSymsp->TOP__npc__u_ysyx_22050598_exu_rd_pc_mux.__PVT__ex_rd_data_o;
    vlSymsp->TOP__npc__u_ysyx_22050598_EX_LS.__PVT__ex_ls_alu_rd_ls_data 
        = vlSelf->__PVT__ex_rd_data;
    vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__ex_alu_data 
        = vlSelf->__PVT__ex_rd_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__15(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__15\n"); );
    // Body
    vlSelf->__PVT__id_ex_alu_op_b = vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__alu_op_b;
    vlSelf->__PVT__id_ex_bs_zimm_data = vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__ex_bs_zimm_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__alu_op_b 
        = vlSelf->__PVT__id_ex_alu_op_b;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_bs_zimm_data 
        = vlSelf->__PVT__id_ex_bs_zimm_data;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__16(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__16\n"); );
    // Body
    vlSelf->__PVT__pipeline_flush = vlSymsp->TOP__npc__ysyx_22050598_pipeline_ctrl.__PVT__pipeline_flush;
    vlSelf->__Vcellinp__u_ysyx_22050598_ifu__flush_pc_en 
        = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__pipeline_flush), 0U));
    vlSelf->__Vcellinp__u_ysyx_22050598_IF_ID__if_flush 
        = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__pipeline_flush), 1U));
    vlSelf->__Vcellinp__u_ysyx_22050598_ID_EX__id_ex_flush 
        = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__pipeline_flush), 2U));
    vlSelf->__Vcellinp__u_ysyx_22050598_exu_alu__ex_muldiv_flush 
        = (1U & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__pipeline_flush), 2U));
    vlSymsp->TOP__npc__u_ysyx_22050598_ifu.__PVT__flush_pc_en 
        = vlSelf->__Vcellinp__u_ysyx_22050598_ifu__flush_pc_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_IF_ID.__PVT__if_flush 
        = vlSelf->__Vcellinp__u_ysyx_22050598_IF_ID__if_flush;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__id_ex_flush 
        = vlSelf->__Vcellinp__u_ysyx_22050598_ID_EX__id_ex_flush;
    vlSymsp->TOP__npc__u_ysyx_22050598_exu_alu.__PVT__ex_muldiv_flush 
        = vlSelf->__Vcellinp__u_ysyx_22050598_exu_alu__ex_muldiv_flush;
}

VL_INLINE_OPT void Vnpc_npc___nba_comb__TOP__npc__17(Vnpc_npc* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vnpc_npc___nba_comb__TOP__npc__17\n"); );
    // Body
    vlSelf->__PVT__id_ex_alu_op_a = vlSymsp->TOP__npc__ysyx_22050598_idu_forward.__PVT__alu_op_a;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX.__PVT__alu_op_a 
        = vlSelf->__PVT__id_ex_alu_op_a;
}
