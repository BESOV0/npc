// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_ID_EX.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__0(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__0\n"); );
    // Body
    vlSelf->__PVT__id_ex_inst_is_illegal_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_illegal_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_ls_data_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_data_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_divrem_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_divrem_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_w_reg_en_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_w_reg_en_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_mul_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_mul_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_pc_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_pc_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_bs_zimm_data_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_bs_zimm_data_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_ls_req_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_req_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_is_rv64_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_rv64_dfflr.__PVT__qout;
    vlSelf->__PVT__id_write_rd_idx_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_write_rd_idx_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_csr_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_csr_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_branch_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_branch_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__alu_op_a_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_a_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__alu_op_b_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_b_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_unsigned_bus_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_unsigned_bus_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_op_type_r = vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_op_type_dfflr.__PVT__qout;
    vlSelf->__PVT__id_ex_inst_is_illegal_o = vlSelf->__PVT__id_ex_inst_is_illegal_r;
    vlSelf->__PVT__id_ex_ls_data_bus_o = vlSelf->__PVT__id_ex_ls_data_bus_r;
    vlSelf->__PVT__id_ex_inst_o = vlSelf->__PVT__id_ex_inst_r;
    vlSelf->__PVT__id_ex_inst_divrem_bus_o = vlSelf->__PVT__id_ex_inst_divrem_bus_r;
    vlSelf->__PVT__id_ex_w_reg_en_o = vlSelf->__PVT__id_ex_w_reg_en_r;
    vlSelf->__PVT__id_ex_inst_mul_bus_o = vlSelf->__PVT__id_ex_inst_mul_bus_r;
    vlSelf->__PVT__id_ex_pc_o = vlSelf->__PVT__id_ex_pc_r;
    vlSelf->__PVT__id_ex_bs_zimm_data_o = vlSelf->__PVT__id_ex_bs_zimm_data_r;
    vlSelf->__PVT__id_ex_ls_req_o = vlSelf->__PVT__id_ex_ls_req_r;
    vlSelf->__PVT__id_ex_inst_is_rv64_o = vlSelf->__PVT__id_ex_inst_is_rv64_r;
    vlSelf->__PVT__id_write_rd_idx_o = vlSelf->__PVT__id_write_rd_idx_r;
    vlSelf->__PVT__id_ex_csr_bus_o = vlSelf->__PVT__id_ex_csr_bus_r;
    vlSelf->__PVT__id_ex_branch_bus_o = vlSelf->__PVT__id_ex_branch_bus_r;
    vlSelf->__PVT__alu_op_a_o = vlSelf->__PVT__alu_op_a_r;
    vlSelf->__PVT__id_ex_inst_is_ebreak_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 8U));
    vlSelf->__PVT__id_ex_inst_is_set_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 3U));
    vlSelf->__PVT__id_ex_inst_5_shamt_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 1U));
    vlSelf->__PVT__id_ex_inst_is_srax_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 2U));
    vlSelf->__PVT__id_ex_inst_is_store_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 4U));
    vlSelf->__PVT__id_ex_inst_is_mret_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 0U));
    vlSelf->__PVT__id_ex_inst_is_ecall_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 7U));
    vlSelf->__PVT__id_ex_inst_is_jal_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 5U));
    vlSelf->__PVT__id_ex_inst_is_jalr_o = (1U & VL_BITSEL_IIII(9, (IData)(vlSelf->__PVT__id_ex_inst_bus_r), 6U));
    vlSelf->__PVT__alu_op_b_o = vlSelf->__PVT__alu_op_b_r;
    vlSelf->__PVT__id_ex_unsigned_bus_o = vlSelf->__PVT__id_ex_unsigned_bus_r;
    vlSelf->__PVT__id_ex_op_type_o = vlSelf->__PVT__id_ex_op_type_r;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__1(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__1\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_op_type_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_a_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_b_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_pc_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_bs_zimm_data_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_write_rd_idx_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_w_reg_en_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_data_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_divrem_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_mul_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_csr_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_branch_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_unsigned_bus_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_req_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_rv64_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_illegal_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_op_type_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_a_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_b_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_pc_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_bs_zimm_data_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_write_rd_idx_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_w_reg_en_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_data_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_divrem_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_mul_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_csr_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_branch_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_unsigned_bus_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_req_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_rv64_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_illegal_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__3(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__3\n"); );
    // Body
    vlSelf->__PVT__id_ex_en = (1U & (~ (IData)(vlSelf->__PVT__id_ex_stall)));
    vlSelf->__PVT__temp_id_ex_inst_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                           ? 0U : (IData)(vlSelf->__PVT__id_ex_inst_bus));
    vlSelf->__PVT__temp_id_ex_op_type = ((IData)(vlSelf->__PVT__id_ex_flush)
                                          ? 0x200U : (IData)(vlSelf->__PVT__id_ex_op_type));
    vlSelf->__PVT__temp_alu_op_a = ((IData)(vlSelf->__PVT__id_ex_flush)
                                     ? 0ULL : vlSelf->__PVT__alu_op_a);
    vlSelf->__PVT__temp_alu_op_b = ((IData)(vlSelf->__PVT__id_ex_flush)
                                     ? 0ULL : vlSelf->__PVT__alu_op_b);
    vlSelf->__PVT__temp_id_ex_pc = ((IData)(vlSelf->__PVT__id_ex_flush)
                                     ? 0ULL : vlSelf->__PVT__id_ex_pc);
    vlSelf->__PVT__temp_id_ex_bs_zimm_data = ((IData)(vlSelf->__PVT__id_ex_flush)
                                               ? 0ULL
                                               : vlSelf->__PVT__id_ex_bs_zimm_data);
    vlSelf->__PVT__temp_id_write_rd_idx = ((IData)(vlSelf->__PVT__id_ex_flush)
                                            ? 0U : (IData)(vlSelf->__PVT__id_write_rd_idx));
    vlSelf->__PVT__temp_id_ex_w_reg_en = ((~ (IData)(vlSelf->__PVT__id_ex_flush)) 
                                          & (IData)(vlSelf->__PVT__id_ex_w_reg_en));
    vlSelf->__PVT__temp_id_ex_ls_data_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                              ? 0U : (IData)(vlSelf->__PVT__id_ex_ls_data_bus));
    vlSelf->__PVT__temp_id_ex_inst_divrem_bus = ((~ (IData)(vlSelf->__PVT__id_ex_flush)) 
                                                 & (IData)(vlSelf->__PVT__id_ex_inst_divrem_bus));
    vlSelf->__PVT__temp_id_ex_inst_mul_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__id_ex_inst_mul_bus));
    vlSelf->__PVT__temp_id_ex_csr_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                          ? 0U : (IData)(vlSelf->__PVT__id_ex_csr_bus));
    vlSelf->__PVT__temp_id_ex_branch_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                             ? 0U : (IData)(vlSelf->__PVT__id_ex_branch_bus));
    vlSelf->__PVT__temp_id_ex_unsigned_bus = ((IData)(vlSelf->__PVT__id_ex_flush)
                                               ? 0U
                                               : (IData)(vlSelf->__PVT__id_ex_unsigned_bus));
    vlSelf->__PVT__temp_id_ex_ls_req = ((~ (IData)(vlSelf->__PVT__id_ex_flush)) 
                                        & (IData)(vlSelf->__PVT__id_ex_ls_req));
    vlSelf->__PVT__temp_id_ex_inst_is_rv64 = ((~ (IData)(vlSelf->__PVT__id_ex_flush)) 
                                              & (IData)(vlSelf->__PVT__id_ex_inst_is_rv64));
    vlSelf->__PVT__temp_id_ex_inst_is_illegal = ((~ (IData)(vlSelf->__PVT__id_ex_flush)) 
                                                 & (IData)(vlSelf->__PVT__id_ex_inst_is_illegal));
    vlSelf->__PVT__temp_id_ex_inst = ((IData)(vlSelf->__PVT__id_ex_flush)
                                       ? 0x13U : vlSelf->__PVT__id_ex_inst);
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_op_type_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_a_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_b_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_write_rd_idx_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_w_reg_en_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_data_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_divrem_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_mul_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_csr_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_branch_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_unsigned_bus_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_req_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_rv64_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_illegal_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_en;
    vlSelf->__PVT__id_ex_pc_en = vlSelf->__PVT__id_ex_en;
    vlSelf->__PVT__id_ex_den = ((IData)(vlSelf->__PVT__id_ex_en) 
                                & (((IData)(vlSelf->__PVT__id_ex_inst_btype) 
                                    | (IData)(vlSelf->__PVT__id_ex_inst_is_store)) 
                                   | (IData)(vlSelf->__PVT__id_inst_is_csri)));
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_op_type_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_op_type;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_a_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_alu_op_a;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__alu_op_b_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_alu_op_b;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_pc_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_pc;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_bs_zimm_data_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_bs_zimm_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_write_rd_idx_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_write_rd_idx;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_w_reg_en_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_w_reg_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_data_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_ls_data_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_divrem_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst_divrem_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_mul_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst_mul_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_csr_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_csr_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_branch_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_branch_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_unsigned_bus_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_unsigned_bus;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_ls_req_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_ls_req;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_rv64_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst_is_rv64;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_is_illegal_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst_is_illegal;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_inst_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__temp_id_ex_inst;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_pc_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_pc_en;
    vlSymsp->TOP__npc__u_ysyx_22050598_ID_EX__id_ex_bs_zimm_data_dfflr.__PVT__lden 
        = vlSelf->__PVT__id_ex_den;
}
