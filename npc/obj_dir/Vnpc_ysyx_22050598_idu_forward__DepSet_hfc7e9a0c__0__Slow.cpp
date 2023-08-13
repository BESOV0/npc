// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_idu_forward.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__0(Vnpc_ysyx_22050598_idu_forward* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__0\n"); );
    // Body
    vlSelf->__PVT__ex_rd_idx_not_zero = VL_REDOR_I((IData)(vlSelf->__PVT__ex_rd_idx));
    vlSelf->__PVT__wb_rd_idx_not_zero = VL_REDOR_I((IData)(vlSelf->__PVT__wb_rd_idx));
    vlSelf->__PVT__mem_rd_idx_not_zero = VL_REDOR_I((IData)(vlSelf->__PVT__mem_rd_idx));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__1(Vnpc_ysyx_22050598_idu_forward* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__1\n"); );
    // Body
    vlSelf->__PVT__id_rs1_idx_vaild = ((IData)(vlSelf->__PVT__id_rs1_idx) 
                                       & VL_REPLICATE_IOI(1,
                                                          (1U 
                                                           & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__alu_op_a_sel), 2U)), 5U));
    vlSelf->__PVT__id_rs2_idx_vaild = ((IData)(vlSelf->__PVT__id_rs2_idx) 
                                       & VL_REPLICATE_IOI(1,
                                                          (1U 
                                                           & (VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__alu_op_b_sel), 1U) 
                                                              | (IData)(vlSelf->__PVT__id_inst_is_store))), 5U));
    vlSelf->__PVT__mem_forward_rs1 = (((IData)(vlSelf->__PVT__mem_rd_en) 
                                       & (~ VL_REDOR_I(
                                                       ((IData)(vlSelf->__PVT__mem_rd_idx) 
                                                        ^ (IData)(vlSelf->__PVT__id_rs1_idx_vaild))))) 
                                      & (IData)(vlSelf->__PVT__mem_rd_idx_not_zero));
    vlSelf->__PVT__wb_forward_rs1 = (((IData)(vlSelf->__PVT__wb_rd_en) 
                                      & (~ VL_REDOR_I(
                                                      ((IData)(vlSelf->__PVT__wb_rd_idx) 
                                                       ^ (IData)(vlSelf->__PVT__id_rs1_idx_vaild))))) 
                                     & (IData)(vlSelf->__PVT__wb_rd_idx_not_zero));
    vlSelf->__PVT__ex_forward_rs1 = ((((IData)(vlSelf->__PVT__ex_rd_en) 
                                       & (~ (IData)(vlSelf->__PVT__ex_load_en))) 
                                      & (~ VL_REDOR_I(
                                                      ((IData)(vlSelf->__PVT__ex_rd_idx) 
                                                       ^ (IData)(vlSelf->__PVT__id_rs1_idx_vaild))))) 
                                     & (IData)(vlSelf->__PVT__ex_rd_idx_not_zero));
    vlSelf->__PVT__ex_load_stall_rs1 = (((IData)(vlSelf->__PVT__ex_load_en) 
                                         & (~ VL_REDOR_I(
                                                         ((IData)(vlSelf->__PVT__ex_rd_idx) 
                                                          ^ (IData)(vlSelf->__PVT__id_rs1_idx_vaild))))) 
                                        & (IData)(vlSelf->__PVT__ex_rd_idx_not_zero));
    vlSelf->__PVT__mem_forward_rs2 = (((IData)(vlSelf->__PVT__mem_rd_en) 
                                       & (~ VL_REDOR_I(
                                                       ((IData)(vlSelf->__PVT__mem_rd_idx) 
                                                        ^ (IData)(vlSelf->__PVT__id_rs2_idx_vaild))))) 
                                      & (IData)(vlSelf->__PVT__mem_rd_idx_not_zero));
    vlSelf->__PVT__wb_forward_rs2 = (((IData)(vlSelf->__PVT__wb_rd_en) 
                                      & (~ VL_REDOR_I(
                                                      ((IData)(vlSelf->__PVT__wb_rd_idx) 
                                                       ^ (IData)(vlSelf->__PVT__id_rs2_idx_vaild))))) 
                                     & (IData)(vlSelf->__PVT__wb_rd_idx_not_zero));
    vlSelf->__PVT__ex_forward_rs2 = ((((IData)(vlSelf->__PVT__ex_rd_en) 
                                       & (~ (IData)(vlSelf->__PVT__ex_load_en))) 
                                      & (~ VL_REDOR_I(
                                                      ((IData)(vlSelf->__PVT__ex_rd_idx) 
                                                       ^ (IData)(vlSelf->__PVT__id_rs2_idx_vaild))))) 
                                     & (IData)(vlSelf->__PVT__ex_rd_idx_not_zero));
    vlSelf->__PVT__ex_load_stall_rs2 = (((IData)(vlSelf->__PVT__ex_load_en) 
                                         & (~ VL_REDOR_I(
                                                         ((IData)(vlSelf->__PVT__ex_rd_idx) 
                                                          ^ (IData)(vlSelf->__PVT__id_rs2_idx_vaild))))) 
                                        & (IData)(vlSelf->__PVT__ex_rd_idx_not_zero));
    vlSelf->__PVT__forward_load_stall = ((IData)(vlSelf->__PVT__ex_load_stall_rs1) 
                                         | (IData)(vlSelf->__PVT__ex_load_stall_rs2));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__2(Vnpc_ysyx_22050598_idu_forward* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_idu_forward___stl_sequent__TOP__npc__ysyx_22050598_idu_forward__2\n"); );
    // Body
    vlSelf->__PVT__forward_rs1_data = ((IData)(vlSelf->__PVT__ex_forward_rs1)
                                        ? vlSelf->__PVT__ex_alu_data
                                        : ((IData)(vlSelf->__PVT__mem_forward_rs1)
                                            ? vlSelf->__PVT__mem_data
                                            : ((IData)(vlSelf->__PVT__wb_forward_rs1)
                                                ? vlSelf->__PVT__wb_data
                                                : vlSelf->__PVT__rs1_data)));
    vlSelf->__PVT__forward_rs2_data = ((IData)(vlSelf->__PVT__ex_forward_rs2)
                                        ? vlSelf->__PVT__ex_alu_data
                                        : ((IData)(vlSelf->__PVT__mem_forward_rs2)
                                            ? vlSelf->__PVT__mem_data
                                            : ((IData)(vlSelf->__PVT__wb_forward_rs2)
                                                ? vlSelf->__PVT__wb_data
                                                : vlSelf->__PVT__rs2_data)));
    vlSelf->__PVT__alu_op_a = ((VL_REPLICATE_QOI(1,
                                                 (1U 
                                                  & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__alu_op_a_sel), 2U)), 0x40U) 
                                & vlSelf->__PVT__forward_rs1_data) 
                               | (VL_REPLICATE_QOI(1,
                                                   (1U 
                                                    & VL_BITSEL_IIII(3, (IData)(vlSelf->__PVT__alu_op_a_sel), 1U)), 0x40U) 
                                  & vlSelf->__PVT__pc_data));
    vlSelf->__PVT__alu_op_b = ((VL_REPLICATE_QOI(1,
                                                 (1U 
                                                  & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__alu_op_b_sel), 1U)), 0x40U) 
                                & vlSelf->__PVT__forward_rs2_data) 
                               | (VL_REPLICATE_QOI(1,
                                                   (1U 
                                                    & VL_BITSEL_IIII(2, (IData)(vlSelf->__PVT__alu_op_b_sel), 0U)), 0x40U) 
                                  & vlSelf->__PVT__id_imm));
    vlSelf->__PVT__ex_bs_zimm_data = (((VL_REPLICATE_QOI(1,
                                                         VL_REDOR_I((IData)(vlSelf->__PVT__id_branch_bus)), 0x40U) 
                                        & vlSelf->__PVT__id_imm) 
                                       | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__id_inst_is_store), 0x40U) 
                                          & vlSelf->__PVT__forward_rs2_data)) 
                                      | (VL_REPLICATE_QOI(1,(IData)(vlSelf->__PVT__id_inst_is_csri), 0x40U) 
                                         & VL_EXTEND_QI(64,5, (IData)(vlSelf->__PVT__id_rs1_idx))));
}

VL_ATTR_COLD void Vnpc_ysyx_22050598_idu_forward___ctor_var_reset(Vnpc_ysyx_22050598_idu_forward* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_idu_forward___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__id_rs1_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_rs2_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__alu_op_a_sel = VL_RAND_RESET_I(3);
    vlSelf->__PVT__alu_op_b_sel = VL_RAND_RESET_I(2);
    vlSelf->__PVT__id_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_imm = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_branch_bus = VL_RAND_RESET_I(6);
    vlSelf->__PVT__id_inst_is_csri = VL_RAND_RESET_I(1);
    vlSelf->__PVT__id_inst_is_store = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_load_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_alu_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__mem_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__wb_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__wb_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__forward_load_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_op_a = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__alu_op_b = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_bs_zimm_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__id_rs1_idx_vaild = VL_RAND_RESET_I(5);
    vlSelf->__PVT__id_rs2_idx_vaild = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_rd_idx_not_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_rd_idx_not_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_rd_idx_not_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_forward_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_forward_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_forward_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_forward_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__mem_forward_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_forward_rs2 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__forward_rs1_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__forward_rs2_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_load_stall_rs1 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_load_stall_rs2 = VL_RAND_RESET_I(1);
}
