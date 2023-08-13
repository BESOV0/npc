// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_exu_alu.h"

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__1(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__1\n"); );
    // Body
    vlSelf->__PVT__ex_alu_rd_data_en = vlSelf->__PVT__ex_write_reg_en;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__6(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__6\n"); );
    // Body
    vlSelf->__PVT__ex_inst_brach_en = VL_REDOR_I((IData)(vlSelf->__PVT__ex_branch_bus));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__8(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_sequent__TOP__npc__u_ysyx_22050598_exu_alu__8\n"); );
    // Body
    vlSelf->__PVT__ex_store_en_o = vlSelf->__PVT__ex_inst_is_store;
    vlSelf->__PVT__ex_inst_jump_en = ((IData)(vlSelf->__PVT__ex_inst_is_jal) 
                                      | (IData)(vlSelf->__PVT__ex_inst_is_jalr));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__0(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__0\n"); );
    // Body
    vlSelf->__PVT__mul_result = (((VL_REPLICATE_QOI(1,
                                                    (1U 
                                                     & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 4U)), 0x40U) 
                                   & vlSelf->__PVT__result_lo) 
                                  | (VL_REPLICATE_QOI(1,
                                                      (1U 
                                                       & ((VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 3U) 
                                                           | VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 2U)) 
                                                          | VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 1U))), 0x40U) 
                                     & vlSelf->__PVT__result_hi)) 
                                 | (VL_REPLICATE_QOI(1,
                                                     (1U 
                                                      & VL_BITSEL_IIII(5, (IData)(vlSelf->__PVT__ex_inst_mul_bus), 0U)), 0x40U) 
                                    & VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                               (1U 
                                                                                & VL_BITSEL_IQII(64, vlSelf->__PVT__result_lo, 0x1fU)), 0x20U), 
                                                    VL_SEL_IQII(64, vlSelf->__PVT__result_lo, 0U, 0x20U))));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__1(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__1\n"); );
    // Body
    vlSelf->__PVT__ex_store_data_o = (vlSelf->__PVT__ex_bs_zimm_data 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_store), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__2(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__2\n"); );
    // Body
    vlSelf->__PVT__ex_load_en_o = ((IData)(vlSelf->__PVT__ex_ls_req) 
                                   & (~ (IData)(vlSelf->__PVT__ex_inst_is_store)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__3(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__3\n"); );
    // Body
    vlSelf->__PVT__ex_alu_pc_en_o = ((IData)(vlSelf->__PVT__ex_inst_brach_en) 
                                     | (IData)(vlSelf->__PVT__ex_inst_is_jalr));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__4(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__4\n"); );
    // Body
    vlSelf->__PVT__pc_op_a = (vlSelf->__PVT__ex_pc 
                              & VL_REPLICATE_QOI(1,
                                                 ((IData)(vlSelf->__PVT__ex_inst_brach_en) 
                                                  | (IData)(vlSelf->__PVT__ex_inst_jump_en)), 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__5(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__5\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha3e5c09c__0;
    // Body
    VL_CONCAT_WIQ(65,1,64, __Vtemp_ha3e5c09c__0, (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__ex_unsigned_bus)) 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__ex_alu_op_a, 0x3fU))), vlSelf->__PVT__ex_alu_op_a);
    VL_ASSIGN_W(65,vlSelf->__PVT__adder_op1, __Vtemp_ha3e5c09c__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__6(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__6\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf01d0baf__0;
    // Body
    VL_CONCAT_WIQ(65,1,64, __Vtemp_hf01d0baf__0, (1U 
                                                  & ((~ (IData)(vlSelf->__PVT__ex_unsigned_bus)) 
                                                     & VL_BITSEL_IQII(64, vlSelf->__PVT__ex_alu_op_b, 0x3fU))), vlSelf->__PVT__ex_alu_op_b);
    VL_ASSIGN_W(65,vlSelf->__PVT__adder_op2, __Vtemp_hf01d0baf__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__7(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__7\n"); );
    // Body
    vlSelf->__PVT__or_op_a = (VL_REPLICATE_QOI(1,(1U 
                                                  & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 2U)), 0x40U) 
                              & vlSelf->__PVT__ex_alu_op_a);
    vlSelf->__PVT__and_op_a = (VL_REPLICATE_QOI(1,(1U 
                                                   & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 1U)), 0x40U) 
                               & vlSelf->__PVT__ex_alu_op_a);
    vlSelf->__PVT__xor_op_a = (VL_REPLICATE_QOI(1,(1U 
                                                   & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 0U)), 0x40U) 
                               & vlSelf->__PVT__ex_alu_op_a);
    vlSelf->__PVT__temp_shift_op_a = (vlSelf->__PVT__ex_alu_op_a 
                                      & VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__alu_op_is_shift), 0x40U));
    vlSelf->__Vfunc_reverse64__0__in = vlSelf->__PVT__temp_shift_op_a;
    VL_ASSIGNSEL_QI(64,3,0U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3dU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3eU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3fU)))));
    VL_ASSIGNSEL_QI(64,3,3U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3aU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3bU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x3cU)))));
    VL_ASSIGNSEL_QI(64,3,6U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x37U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x38U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x39U)))));
    VL_ASSIGNSEL_QI(64,3,9U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x34U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x35U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x36U)))));
    VL_ASSIGNSEL_QI(64,3,0xcU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x31U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x32U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x33U)))));
    VL_ASSIGNSEL_QI(64,3,0xfU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2eU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2fU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x30U)))));
    VL_ASSIGNSEL_QI(64,3,0x12U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2bU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2cU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2dU)))));
    VL_ASSIGNSEL_QI(64,3,0x15U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x28U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x29U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x2aU)))));
    VL_ASSIGNSEL_QI(64,3,0x18U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x25U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x26U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x27U)))));
    VL_ASSIGNSEL_QI(64,3,0x1bU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x22U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x23U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x24U)))));
    VL_ASSIGNSEL_QI(64,3,0x1eU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1fU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x20U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x21U)))));
    VL_ASSIGNSEL_QI(64,3,0x21U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1cU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1dU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1eU)))));
    VL_ASSIGNSEL_QI(64,3,0x24U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x19U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1aU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x1bU)))));
    VL_ASSIGNSEL_QI(64,3,0x27U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x16U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x17U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x18U)))));
    VL_ASSIGNSEL_QI(64,3,0x2aU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x13U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x14U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x15U)))));
    VL_ASSIGNSEL_QI(64,3,0x2dU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x10U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x11U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0x12U)))));
    VL_ASSIGNSEL_QI(64,3,0x30U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xdU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xeU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xfU)))));
    VL_ASSIGNSEL_QI(64,3,0x33U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xaU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xbU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0xcU)))));
    VL_ASSIGNSEL_QI(64,3,0x36U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 7U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 8U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 9U)))));
    VL_ASSIGNSEL_QI(64,3,0x39U, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 4U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 5U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 6U)))));
    VL_ASSIGNSEL_QI(64,3,0x3cU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 1U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 2U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 3U)))));
    VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vfunc_reverse64__0__Vfuncout, 
                    (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__0__in, 0U)));
    vlSelf->__PVT__temp_shift_op_a_64 = ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 4U))
                                          ? vlSelf->__Vfunc_reverse64__0__Vfuncout
                                          : vlSelf->__PVT__temp_shift_op_a);
    vlSelf->__Vfunc_reverse32__1__in = VL_SEL_IQII(64, vlSelf->__PVT__temp_shift_op_a, 0U, 0x20U);
    VL_ASSIGNSEL_II(32,3,0U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1dU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1eU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1fU)))));
    VL_ASSIGNSEL_II(32,3,3U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1aU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1bU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x1cU)))));
    VL_ASSIGNSEL_II(32,3,6U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x17U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x18U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x19U)))));
    VL_ASSIGNSEL_II(32,3,9U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x14U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x15U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x16U)))));
    VL_ASSIGNSEL_II(32,3,0xcU, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x11U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x12U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x13U)))));
    VL_ASSIGNSEL_II(32,3,0xfU, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xeU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xfU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0x10U)))));
    VL_ASSIGNSEL_II(32,3,0x12U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xbU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xcU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xdU)))));
    VL_ASSIGNSEL_II(32,3,0x15U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 8U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 9U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0xaU)))));
    VL_ASSIGNSEL_II(32,3,0x18U, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 6U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 7U)))));
    VL_ASSIGNSEL_II(32,3,0x1bU, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 3U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 4U)))));
    VL_ASSIGNSEL_II(32,2,0x1eU, vlSelf->__Vfunc_reverse32__1__Vfuncout, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 0U)), 
                                  (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__1__in, 1U))));
    vlSelf->__PVT__temp_shift_op_a_32 = ((1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 4U))
                                          ? vlSelf->__Vfunc_reverse32__1__Vfuncout
                                          : VL_SEL_IQII(64, vlSelf->__PVT__temp_shift_op_a, 0U, 0x20U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__8(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__8\n"); );
    // Body
    vlSelf->__PVT__or_op_b = (VL_REPLICATE_QOI(1,(1U 
                                                  & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 2U)), 0x40U) 
                              & vlSelf->__PVT__ex_alu_op_b);
    vlSelf->__PVT__and_op_b = (VL_REPLICATE_QOI(1,(1U 
                                                   & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 1U)), 0x40U) 
                               & vlSelf->__PVT__ex_alu_op_b);
    vlSelf->__PVT__xor_op_b = (VL_REPLICATE_QOI(1,(1U 
                                                   & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 0U)), 0x40U) 
                               & vlSelf->__PVT__ex_alu_op_b);
    vlSelf->__PVT__temp_shift_op_b_6 = (0x3fU & (VL_SEL_IQII(64, vlSelf->__PVT__ex_alu_op_b, 0U, 6U) 
                                                 & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__alu_op_is_shift), 6U)));
    vlSelf->__PVT__temp_shift_op_b_5 = (0x1fU & (VL_SEL_IQII(64, vlSelf->__PVT__ex_alu_op_b, 0U, 5U) 
                                                 & VL_REPLICATE_IOI(1,(IData)(vlSelf->__PVT__alu_op_is_shift), 5U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__10(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__10\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h08641581__0;
    VlWide<3>/*95:0*/ __Vtemp_h583d0204__0;
    // Body
    VL_REPLICATE_WII(1, __Vtemp_h08641581__0, (IData)(vlSelf->__PVT__add_or_sub), 0x41U);
    VL_AND_W(3, __Vtemp_h583d0204__0, __Vtemp_h08641581__0, vlSelf->__PVT__adder_op1);
    VL_ASSIGN_W(65,vlSelf->__PVT__add_sub_op_a, __Vtemp_h583d0204__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__add_sub_in_a, vlSelf->__PVT__add_sub_op_a);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__11(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__11\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h08641581__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b3d93f7__0;
    VlWide<3>/*95:0*/ __Vtemp_h84fca685__0;
    VlWide<3>/*95:0*/ __Vtemp_h424b8978__0;
    CData/*31:0*/ __Vtemp_h4cf732c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h300a2acf__0;
    VlWide<3>/*95:0*/ __Vtemp_h02487cc4__0;
    // Body
    VL_REPLICATE_WII(1, __Vtemp_h08641581__0, (IData)(vlSelf->__PVT__add_or_sub), 0x41U);
    VL_AND_W(3, __Vtemp_h9b3d93f7__0, __Vtemp_h08641581__0, vlSelf->__PVT__adder_op2);
    VL_ASSIGN_W(65,vlSelf->__PVT__add_sub_op_b, __Vtemp_h9b3d93f7__0);
    VL_CONST_W_3X(96,__Vtemp_h84fca685__0,0x00000001,0xffffffff,0xffffffff);
    VL_NOT_W(3, __Vtemp_h424b8978__0, vlSelf->__PVT__add_sub_op_b);
    __Vtemp_h4cf732c3__0 = (1U & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 8U));
    VL_COND_WIWW(65, __Vtemp_h300a2acf__0, __Vtemp_h4cf732c3__0, __Vtemp_h424b8978__0, vlSelf->__PVT__add_sub_op_b);
    VL_AND_W(3, __Vtemp_h02487cc4__0, __Vtemp_h84fca685__0, __Vtemp_h300a2acf__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__add_sub_in_b, __Vtemp_h02487cc4__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__12(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__12\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h3074e6d3__0;
    VlWide<3>/*95:0*/ __Vtemp_hf4ab8711__0;
    // Body
    VL_CONCAT_WIQ(65,1,64, __Vtemp_h3074e6d3__0, ((IData)(vlSelf->__PVT__ex_inst_is_srax) 
                                                  & VL_BITSEL_IQII(64, vlSelf->__PVT__temp_shift_op_a_64, 0x3fU)), vlSelf->__PVT__temp_shift_op_a_64);
    VL_ASSIGN_W(65,vlSelf->__PVT__shift_op_a_64, __Vtemp_h3074e6d3__0);
    VL_CONCAT_WQI(65,33,32, __Vtemp_hf4ab8711__0, (0x1ffffffffULL 
                                                   & VL_REPLICATE_QOI(1,
                                                                      ((IData)(vlSelf->__PVT__ex_inst_is_srax) 
                                                                       & VL_BITSEL_IIII(32, vlSelf->__PVT__temp_shift_op_a_32, 0x1fU)), 0x21U)), vlSelf->__PVT__temp_shift_op_a_32);
    VL_ASSIGN_W(65,vlSelf->__PVT__shift_op_a_32, __Vtemp_hf4ab8711__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__13(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__13\n"); );
    // Body
    vlSelf->__PVT__or_result = (vlSelf->__PVT__or_op_a 
                                | vlSelf->__PVT__or_op_b);
    vlSelf->__PVT__and_result = (vlSelf->__PVT__and_op_a 
                                 & vlSelf->__PVT__and_op_b);
    vlSelf->__PVT__xor_result = (vlSelf->__PVT__xor_op_a 
                                 ^ vlSelf->__PVT__xor_op_b);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__14(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__14\n"); );
    // Body
    vlSelf->__PVT__shift_op_b = ((IData)(vlSelf->__PVT__ex_inst_5_shamt)
                                  ? VL_EXTEND_II(6,5, (IData)(vlSelf->__PVT__temp_shift_op_b_5))
                                  : (IData)(vlSelf->__PVT__temp_shift_op_b_6));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__15(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__15\n"); );
    // Body
    vlSelf->__PVT__div_result = ((IData)(vlSelf->__PVT__ex_inst_is_rv64)
                                  ? VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                             (1U 
                                                                              & VL_BITSEL_IQII(64, vlSelf->__PVT__quotient, 0x1fU)), 0x20U), 
                                                  VL_SEL_IQII(64, vlSelf->__PVT__quotient, 0U, 0x20U))
                                  : vlSelf->__PVT__quotient);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__16(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__16\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h84fca685__0;
    VlWide<3>/*95:0*/ __Vtemp_hf94def78__0;
    VlWide<3>/*95:0*/ __Vtemp_h50c32df0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6015b4f3__0;
    VlWide<3>/*95:0*/ __Vtemp_h8751f191__0;
    // Body
    VL_CONST_W_3X(96,__Vtemp_h84fca685__0,0x00000001,0xffffffff,0xffffffff);
    VL_ADD_W(3, __Vtemp_hf94def78__0, vlSelf->__PVT__add_sub_in_a, vlSelf->__PVT__add_sub_in_b);
    VL_EXTEND_WI(65,1, __Vtemp_h50c32df0__0, (IData)(vlSelf->__PVT__add_sub_cin));
    VL_ADD_W(3, __Vtemp_h6015b4f3__0, __Vtemp_hf94def78__0, __Vtemp_h50c32df0__0);
    VL_AND_W(3, __Vtemp_h8751f191__0, __Vtemp_h84fca685__0, __Vtemp_h6015b4f3__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__sum_sub_data, __Vtemp_h8751f191__0);
    vlSelf->__PVT__sum_sub_w_result = VL_CONCAT_QQI(64,33,31, 
                                                    (0x1ffffffffULL 
                                                     & VL_REPLICATE_QOI(1,
                                                                        (1U 
                                                                         & VL_BITSEL_IWII(65, vlSelf->__PVT__sum_sub_data, 0x1fU)), 0x21U)), 
                                                    (0x7fffffffU 
                                                     & VL_SEL_IWII(65, vlSelf->__PVT__sum_sub_data, 0U, 0x1fU)));
    vlSelf->__PVT__branch_cmp = (1U & VL_BITSEL_IWII(65, vlSelf->__PVT__sum_sub_data, 0x40U));
    vlSelf->__PVT__branch_cmp_zero = (1U & (~ VL_REDOR_Q(
                                                         VL_SEL_QWII(65, vlSelf->__PVT__sum_sub_data, 0U, 0x40U))));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__17(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__17\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h42e3e8ab__0;
    // Body
    VL_COND_WIWW(65, __Vtemp_h42e3e8ab__0, (IData)(vlSelf->__PVT__ex_inst_is_rv64), vlSelf->__PVT__shift_op_a_32, vlSelf->__PVT__shift_op_a_64);
    VL_ASSIGN_W(65,vlSelf->__PVT__shift_op_a, __Vtemp_h42e3e8ab__0);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__18(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__18\n"); );
    // Body
    vlSelf->__PVT__sum_sub_result = (((IData)(vlSelf->__PVT__add_or_sub) 
                                      & (IData)(vlSelf->__PVT__ex_inst_is_rv64))
                                      ? vlSelf->__PVT__sum_sub_w_result
                                      : VL_SEL_QWII(65, vlSelf->__PVT__sum_sub_data, 0U, 0x40U));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__19(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__19\n"); );
    // Body
    vlSelf->__PVT__inst_blt_en = (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 3U) 
                                  & (IData)(vlSelf->__PVT__branch_cmp));
    vlSelf->__PVT__inst_bltu_en = (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 1U) 
                                   & (IData)(vlSelf->__PVT__branch_cmp));
    vlSelf->__PVT__inst_beq_en = (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 5U) 
                                  & (IData)(vlSelf->__PVT__branch_cmp_zero));
    vlSelf->__PVT__inst_bne_en = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 4U) 
                                        & (~ (IData)(vlSelf->__PVT__branch_cmp_zero))));
    vlSelf->__PVT__inst_bge_en = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 2U) 
                                        & ((~ (IData)(vlSelf->__PVT__branch_cmp)) 
                                           | (IData)(vlSelf->__PVT__branch_cmp_zero))));
    vlSelf->__PVT__inst_bgeu_en = (1U & (VL_BITSEL_IIII(6, (IData)(vlSelf->__PVT__ex_branch_bus), 0U) 
                                         & ((~ (IData)(vlSelf->__PVT__branch_cmp)) 
                                            | (IData)(vlSelf->__PVT__branch_cmp_zero))));
    vlSelf->__PVT__branch_en = ((((((IData)(vlSelf->__PVT__inst_beq_en) 
                                    | (IData)(vlSelf->__PVT__inst_bne_en)) 
                                   | (IData)(vlSelf->__PVT__inst_blt_en)) 
                                  | (IData)(vlSelf->__PVT__inst_bge_en)) 
                                 | (IData)(vlSelf->__PVT__inst_bltu_en)) 
                                | (IData)(vlSelf->__PVT__inst_bgeu_en));
    vlSelf->__PVT__branch_not_jump = ((IData)(vlSelf->__PVT__ex_inst_brach_en) 
                                      & (~ (IData)(vlSelf->__PVT__branch_en)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__20(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__20\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h84fca685__0;
    VlWide<3>/*95:0*/ __Vtemp_h8713d103__0;
    VlWide<3>/*95:0*/ __Vtemp_h401bc28e__0;
    // Body
    VL_CONST_W_3X(96,__Vtemp_h84fca685__0,0x00000001,0xffffffff,0xffffffff);
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8713d103__0, vlSelf->__PVT__shift_op_a, (IData)(vlSelf->__PVT__shift_op_b));
    VL_AND_W(3, __Vtemp_h401bc28e__0, __Vtemp_h84fca685__0, __Vtemp_h8713d103__0);
    VL_ASSIGN_W(65,vlSelf->__PVT__temp_shift_result, __Vtemp_h401bc28e__0);
    vlSelf->__Vfunc_reverse32__2__in = VL_SEL_IWII(65, vlSelf->__PVT__temp_shift_result, 0U, 0x20U);
    VL_ASSIGNSEL_II(32,3,0U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1dU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1eU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1fU)))));
    VL_ASSIGNSEL_II(32,3,3U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1aU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1bU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x1cU)))));
    VL_ASSIGNSEL_II(32,3,6U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x17U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x18U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x19U)))));
    VL_ASSIGNSEL_II(32,3,9U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x14U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x15U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x16U)))));
    VL_ASSIGNSEL_II(32,3,0xcU, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x11U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x12U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x13U)))));
    VL_ASSIGNSEL_II(32,3,0xfU, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xeU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xfU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0x10U)))));
    VL_ASSIGNSEL_II(32,3,0x12U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xbU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xcU)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xdU)))));
    VL_ASSIGNSEL_II(32,3,0x15U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 8U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 9U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0xaU)))));
    VL_ASSIGNSEL_II(32,3,0x18U, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 5U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 6U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 7U)))));
    VL_ASSIGNSEL_II(32,3,0x1bU, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 2U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 3U)), 
                                                (1U 
                                                 & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 4U)))));
    VL_ASSIGNSEL_II(32,2,0x1eU, vlSelf->__Vfunc_reverse32__2__Vfuncout, 
                    VL_CONCAT_III(2,1,1, (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 0U)), 
                                  (1U & VL_BITSEL_IIII(32, vlSelf->__Vfunc_reverse32__2__in, 1U))));
    vlSelf->__PVT__shift_result_32_rev = vlSelf->__Vfunc_reverse32__2__Vfuncout;
    vlSelf->__Vfunc_reverse64__3__in = VL_SEL_QWII(65, vlSelf->__PVT__temp_shift_result, 0U, 0x40U);
    VL_ASSIGNSEL_QI(64,3,0U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3dU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3eU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3fU)))));
    VL_ASSIGNSEL_QI(64,3,3U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3aU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3bU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x3cU)))));
    VL_ASSIGNSEL_QI(64,3,6U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x37U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x38U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x39U)))));
    VL_ASSIGNSEL_QI(64,3,9U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x34U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x35U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x36U)))));
    VL_ASSIGNSEL_QI(64,3,0xcU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x31U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x32U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x33U)))));
    VL_ASSIGNSEL_QI(64,3,0xfU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2eU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2fU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x30U)))));
    VL_ASSIGNSEL_QI(64,3,0x12U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2bU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2cU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2dU)))));
    VL_ASSIGNSEL_QI(64,3,0x15U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x28U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x29U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x2aU)))));
    VL_ASSIGNSEL_QI(64,3,0x18U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x25U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x26U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x27U)))));
    VL_ASSIGNSEL_QI(64,3,0x1bU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x22U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x23U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x24U)))));
    VL_ASSIGNSEL_QI(64,3,0x1eU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1fU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x20U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x21U)))));
    VL_ASSIGNSEL_QI(64,3,0x21U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1cU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1dU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1eU)))));
    VL_ASSIGNSEL_QI(64,3,0x24U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x19U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1aU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x1bU)))));
    VL_ASSIGNSEL_QI(64,3,0x27U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x16U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x17U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x18U)))));
    VL_ASSIGNSEL_QI(64,3,0x2aU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x13U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x14U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x15U)))));
    VL_ASSIGNSEL_QI(64,3,0x2dU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x10U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x11U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0x12U)))));
    VL_ASSIGNSEL_QI(64,3,0x30U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xdU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xeU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xfU)))));
    VL_ASSIGNSEL_QI(64,3,0x33U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xaU)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xbU)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0xcU)))));
    VL_ASSIGNSEL_QI(64,3,0x36U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 7U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 8U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 9U)))));
    VL_ASSIGNSEL_QI(64,3,0x39U, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 4U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 5U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 6U)))));
    VL_ASSIGNSEL_QI(64,3,0x3cU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    VL_CONCAT_III(3,1,2, (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 1U)), 
                                  VL_CONCAT_III(2,1,1, 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 2U)), 
                                                (1U 
                                                 & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 3U)))));
    VL_ASSIGNBIT_QI(0x3fU, vlSelf->__Vfunc_reverse64__3__Vfuncout, 
                    (1U & VL_BITSEL_IQII(64, vlSelf->__Vfunc_reverse64__3__in, 0U)));
    vlSelf->__PVT__shift_result_64_rev = vlSelf->__Vfunc_reverse64__3__Vfuncout;
    vlSelf->__PVT__shift_result = (((VL_REPLICATE_QOI(1,
                                                      (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 4U) 
                                                       & (IData)(vlSelf->__PVT__ex_inst_is_rv64)), 0x40U) 
                                     & VL_CONCAT_QII(64,32,32, VL_REPLICATE_IOI(1,
                                                                                (1U 
                                                                                & VL_BITSEL_IIII(32, vlSelf->__PVT__shift_result_32_rev, 0x1fU)), 0x20U), vlSelf->__PVT__shift_result_32_rev)) 
                                    | (VL_REPLICATE_QOI(1,
                                                        (1U 
                                                         & (VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 4U) 
                                                            & (~ (IData)(vlSelf->__PVT__ex_inst_is_rv64)))), 0x40U) 
                                       & vlSelf->__PVT__shift_result_64_rev)) 
                                   | (VL_REPLICATE_QOI(1,
                                                       (1U 
                                                        & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 3U)), 0x40U) 
                                      & VL_SEL_QWII(65, vlSelf->__PVT__temp_shift_result, 0U, 0x40U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__22(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__22\n"); );
    // Body
    vlSelf->__PVT__ex_jump_pc_res = ((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_jal), 0x40U) 
                                      & vlSelf->__PVT__sum_sub_result) 
                                     | (0xfffffffffffffffeULL 
                                        & (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_is_jalr), 0x40U) 
                                           & vlSelf->__PVT__sum_sub_result)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__23(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__23\n"); );
    // Body
    vlSelf->__PVT__pc_op_b = ((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__branch_en), 0x40U) 
                               & vlSelf->__PVT__ex_bs_zimm_data) 
                              | (4ULL & VL_REPLICATE_QOI(1,
                                                         ((IData)(vlSelf->__PVT__ex_inst_jump_en) 
                                                          | (IData)(vlSelf->__PVT__branch_not_jump)), 0x40U)));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__24(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__24\n"); );
    // Body
    vlSelf->__PVT__jump_brach_pc = (vlSelf->__PVT__pc_op_a 
                                    + vlSelf->__PVT__pc_op_b);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__25(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__25\n"); );
    // Body
    vlSelf->__PVT__ex_temp_rd_ls_data = ((((((((((VL_REPLICATE_QOI(1,
                                                                   (((IData)(vlSelf->__PVT__add_or_sub) 
                                                                     & (~ (IData)(vlSelf->__PVT__ex_inst_is_set))) 
                                                                    & (~ (IData)(vlSelf->__PVT__ex_inst_jump_en))), 0x40U) 
                                                  & vlSelf->__PVT__sum_sub_result) 
                                                 | (VL_REPLICATE_QOI(1,
                                                                     (((IData)(vlSelf->__PVT__add_or_sub) 
                                                                       & (IData)(vlSelf->__PVT__ex_inst_is_set)) 
                                                                      & (~ (IData)(vlSelf->__PVT__ex_inst_jump_en))), 0x40U) 
                                                    & VL_EXTEND_QI(64,1, 
                                                                   (1U 
                                                                    & VL_BITSEL_IWII(65, vlSelf->__PVT__sum_sub_data, 0x40U))))) 
                                                | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_jump_en), 0x40U) 
                                                   & vlSelf->__PVT__jump_brach_pc)) 
                                               | (VL_REPLICATE_QOI(1,
                                                                   (1U 
                                                                    & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 7U)), 0x40U) 
                                                  & vlSelf->__PVT__mul_result)) 
                                              | (VL_REPLICATE_QOI(1,
                                                                  (1U 
                                                                   & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 6U)), 0x40U) 
                                                 & vlSelf->__PVT__div_result)) 
                                             | (VL_REPLICATE_QOI(1,
                                                                 (1U 
                                                                  & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 5U)), 0x40U) 
                                                & vlSelf->__PVT__mod_result)) 
                                            | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__alu_op_is_shift), 0x40U) 
                                               & vlSelf->__PVT__shift_result)) 
                                           | (VL_REPLICATE_QOI(1,
                                                               (1U 
                                                                & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 2U)), 0x40U) 
                                              & vlSelf->__PVT__or_result)) 
                                          | (VL_REPLICATE_QOI(1,
                                                              (1U 
                                                               & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 1U)), 0x40U) 
                                             & vlSelf->__PVT__and_result)) 
                                         | (VL_REPLICATE_QOI(1,
                                                             (1U 
                                                              & VL_BITSEL_IIII(10, (IData)(vlSelf->__PVT__ex_alu_op_type), 0U)), 0x40U) 
                                            & vlSelf->__PVT__xor_result));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__26(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__26\n"); );
    // Body
    vlSelf->__PVT__ex_alu_pc_o = ((VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_brach_en), 0x40U) 
                                   & vlSelf->__PVT__jump_brach_pc) 
                                  | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__ex_inst_jump_en), 0x40U) 
                                     & vlSelf->__PVT__ex_jump_pc_res));
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__27(Vnpc_ysyx_22050598_exu_alu* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_exu_alu___nba_comb__TOP__npc__u_ysyx_22050598_exu_alu__27\n"); );
    // Body
    vlSelf->__PVT__ex_alu_rd_ls_data = (vlSelf->__PVT__ex_temp_rd_ls_data 
                                        & VL_REPLICATE_QOI(1,
                                                           ((IData)(vlSelf->__PVT__ex_write_reg_en) 
                                                            | (IData)(vlSelf->__PVT__ex_inst_is_store)), 0x40U));
}
