// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_muldiv.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_muldiv___eval_initial__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___eval_initial__TOP__npc__u_ysyx_22050598_exu_alu__u_ysyx_22050598___05Fmuldiv\n"); );
    // Body
    vlSelf->__PVT__sta_is_mul_nxt = 3U;
    vlSelf->__PVT__sta_is_div_nxt = 3U;
    vlSelf->__PVT__sta_is_done_nxt = 0U;
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_muldiv___ctor_var_reset(Vnpc_ysyx_22050598_muldiv* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vnpc_ysyx_22050598_muldiv___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldivw = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_signed = VL_RAND_RESET_I(2);
    vlSelf->__PVT__div_signed = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__muldiv_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__muldiv_ready = VL_RAND_RESET_I(1);
    vlSelf->__PVT__out_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__result_hi = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__result_lo = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__quotient = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__remainder = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mul_is_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_is_valid = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_cnt_r = VL_RAND_RESET_I(7);
    vlSelf->__PVT__muldiv_state_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sta_is_idle = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_mul = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_div = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_done = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_idle_exit_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_mul_exit_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_div_exit_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_done_exit_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__sta_is_idle_nxt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sta_is_mul_nxt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sta_is_div_nxt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__sta_is_done_nxt = VL_RAND_RESET_I(2);
    vlSelf->__PVT__temp_muldiv_state_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__muldiv_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__muldiv_state_next = VL_RAND_RESET_I(2);
    vlSelf->__PVT__mul_rs1_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_rs2_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_start_ena = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 33; ++__Vi0) {
        vlSelf->__PVT__booth_bits[__Vi0] = VL_RAND_RESET_I(3);
    }
    VL_RAND_RESET_W(65, vlSelf->__PVT__temp_multiplicand);
    VL_RAND_RESET_W(67, vlSelf->__PVT__temp_booth_multiplier);
    vlSelf->__PVT__booth_set = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_inv = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_mul = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_set_r = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_inv_r = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_mul_r = VL_RAND_RESET_Q(33);
    vlSelf->__PVT__booth_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_cnt_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mul_cnt_next = VL_RAND_RESET_I(7);
    VL_RAND_RESET_W(130, vlSelf->__PVT__muldiv_res_r);
    VL_RAND_RESET_W(130, vlSelf->__PVT__muldiv_op2_r);
    VL_RAND_RESET_W(130, vlSelf->__PVT__mul_op1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__mul_op2);
    vlSelf->__PVT__div_start_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_rs1_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_rs2_sign = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_rs1_sign_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_rs2_sign_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_op1_sign = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_op2_sign = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_div_op1 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_div_op2 = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_cin_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_fix_ena = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__divw_op1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__div_op1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__div_op2);
    vlSelf->__PVT__add_sub_cin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__adder_op1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__adder_op2);
    VL_RAND_RESET_W(130, vlSelf->__PVT__add_sub_in_a);
    VL_RAND_RESET_W(130, vlSelf->__PVT__add_sub_in_b);
    VL_RAND_RESET_W(130, vlSelf->__PVT__sum_sub_data);
    vlSelf->__PVT__div_cin_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_cin = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(127, vlSelf->__PVT__temp_divw_res);
    VL_RAND_RESET_W(127, vlSelf->__PVT__temp_div_res);
    VL_RAND_RESET_W(130, vlSelf->__PVT__muldiv_res);
    vlSelf->__PVT__muldiv_res_reg_ena = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__temp_mul_op2);
    vlSelf->__PVT__muldiv_op2_reg_ena = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(130, vlSelf->__PVT__temp_muldiv_op2);
    vlSelf->__PVT__div_q_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__divw_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_q_ena = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_op_01 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_op_10 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_op_11 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__div_is_valid_q = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__temp_div_rem = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__div_is_valid_rem = VL_RAND_RESET_Q(64);
}
