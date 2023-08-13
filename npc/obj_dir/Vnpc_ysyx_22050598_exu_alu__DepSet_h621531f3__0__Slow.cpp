// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_exu_alu.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_exu_alu___ctor_var_reset(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_muldiv_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_alu_op_type = VL_RAND_RESET_I(10);
    vlSelf->__PVT__ex_alu_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_alu_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_bs_zimm_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_write_reg_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_jalr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_jal = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_set = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_srax = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_5_shamt = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_divrem_bus = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_mul_bus = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_branch_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__ex_unsigned_bus = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_req = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_is_rv64 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_alu_rd_ls_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_alu_rd_data_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_alu_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_alu_pc_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_load_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_store_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_store_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldivout_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_or_sub = VL_RAND_RESET_I(1);
    vlSelf->__PVT__add_sub_cin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__adder_op1);
    VL_RAND_RESET_W(65, vlSelf->__PVT__adder_op2);
    VL_RAND_RESET_W(65, vlSelf->__PVT__add_sub_op_a);
    VL_RAND_RESET_W(65, vlSelf->__PVT__add_sub_op_b);
    VL_RAND_RESET_W(65, vlSelf->__PVT__add_sub_in_a);
    VL_RAND_RESET_W(65, vlSelf->__PVT__add_sub_in_b);
    VL_RAND_RESET_W(65, vlSelf->__PVT__sum_sub_data);
    vlSelf->__PVT__sum_sub_w_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__sum_sub_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldivw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->__PVT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__result_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mod_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op_is_shift = VL_RAND_RESET_I(1);
    vlSelf->__PVT__temp_shift_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_shift_op_b_6 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__temp_shift_op_b_5 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__temp_shift_op_a_64 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_shift_op_a_32 = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__shift_op_a_32);
    VL_RAND_RESET_W(65, vlSelf->__PVT__shift_op_a_64);
    VL_RAND_RESET_W(65, vlSelf->__PVT__shift_op_a);
    vlSelf->__PVT__shift_op_b = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, vlSelf->__PVT__temp_shift_result);
    vlSelf->__PVT__shift_result_32_rev = VL_RAND_RESET_I(32);
    vlSelf->__PVT__shift_result_64_rev = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__shift_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__or_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__or_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__or_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__and_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__and_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__and_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__xor_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__xor_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__xor_result = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_inst_brach_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_cmp = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_cmp_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_beq_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_bne_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_blt_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_bge_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_bltu_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_bgeu_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__branch_not_jump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_inst_jump_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__jump_brach_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_jump_pc_res = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_temp_rd_ls_data = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_reverse64__0__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_reverse64__0__in = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_reverse32__1__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_reverse32__1__in = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_reverse32__2__Vfuncout = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_reverse32__2__in = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_reverse64__3__Vfuncout = VL_RAND_RESET_Q(64);
    vlSelf->__Vfunc_reverse64__3__in = VL_RAND_RESET_Q(64);
}
