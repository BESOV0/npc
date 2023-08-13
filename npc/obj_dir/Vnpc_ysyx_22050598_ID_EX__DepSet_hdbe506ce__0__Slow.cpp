// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_ID_EX.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__2(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___stl_sequent__TOP__npc__u_ysyx_22050598_ID_EX__2\n"); );
    // Body
    vlSelf->__PVT__id_ex_inst_btype = VL_REDOR_I((IData)(vlSelf->__PVT__id_ex_branch_bus));
    vlSelf->__PVT__id_ex_inst_bus = VL_CONCAT_III(9,1,8, (IData)(vlSelf->__PVT__id_ex_inst_is_ebreak), 
                                                  VL_CONCAT_III(8,1,7, (IData)(vlSelf->__PVT__id_ex_inst_is_ecall), 
                                                                VL_CONCAT_III(7,1,6, (IData)(vlSelf->__PVT__id_ex_inst_is_jalr), 
                                                                              VL_CONCAT_III(6,1,5, (IData)(vlSelf->__PVT__id_ex_inst_is_jal), 
                                                                                VL_CONCAT_III(5,1,4, (IData)(vlSelf->__PVT__id_ex_inst_is_store), 
                                                                                VL_CONCAT_III(4,1,3, (IData)(vlSelf->__PVT__id_ex_inst_is_set), 
                                                                                VL_CONCAT_III(3,1,2, (IData)(vlSelf->__PVT__id_ex_inst_is_srax), 
                                                                                VL_CONCAT_III(2,1,1, (IData)(vlSelf->__PVT__id_ex_inst_5_shamt), (IData)(vlSelf->__PVT__id_ex_inst_is_mret)))))))));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_ID_EX___ctor_var_reset(Vnpc_ysyx_22050598_ID_EX* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_ID_EX___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__id_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ex_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_op_type = VL_RAND_RESET_I(10);
    vlSelf->__PVT__alu_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_bs_zimm_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_write_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_w_reg_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_ecall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_srax = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_5_shamt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_mret = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_inst_is_csri = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_ls_data_bus = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_inst_divrem_bus = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_mul_bus = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_csr_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_branch_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_unsigned_bus = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_ls_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_rv64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_illegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_op_type_o = VL_RAND_RESET_I(10);
    vlSelf->__PVT__alu_op_a_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op_b_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_bs_zimm_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_write_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_w_reg_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_ecall_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_jalr_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_jal_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_store_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_set_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_srax_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_5_shamt_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_mret_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_ls_data_bus_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_inst_divrem_bus_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_mul_bus_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_csr_bus_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_branch_bus_o = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_unsigned_bus_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_ls_req_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_rv64_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_illegal_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_bus = VL_RAND_RESET_I(9);
    vlSelf->__PVT__temp_id_ex_inst_bus = VL_RAND_RESET_I(9);
    vlSelf->__PVT__temp_id_ex_op_type = VL_RAND_RESET_I(10);
    vlSelf->__PVT__temp_alu_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_alu_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_id_ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_id_ex_bs_zimm_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_id_write_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__temp_id_ex_w_reg_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_id_ex_ls_data_bus = VL_RAND_RESET_I(2);
    vlSelf->__PVT__temp_id_ex_inst_divrem_bus = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_id_ex_inst_mul_bus = VL_RAND_RESET_I(5);
    vlSelf->__PVT__temp_id_ex_csr_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__temp_id_ex_branch_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__temp_id_ex_unsigned_bus = VL_RAND_RESET_I(2);
    vlSelf->__PVT__temp_id_ex_ls_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_id_ex_inst_is_rv64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_id_ex_inst_is_illegal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_bus_r = VL_RAND_RESET_I(9);
    vlSelf->__PVT__id_ex_op_type_r = VL_RAND_RESET_I(10);
    vlSelf->__PVT__alu_op_a_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op_b_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_pc_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_ex_bs_zimm_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_write_rd_idx_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_w_reg_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_ls_data_bus_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_inst_divrem_bus_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_mul_bus_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_ex_csr_bus_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_branch_bus_r = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_ex_unsigned_bus_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_ex_ls_req_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_rv64_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_is_illegal_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_inst_btype = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_pc_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_ex_den = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_id_ex_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__id_ex_inst_r = VL_RAND_RESET_I(32);
}
