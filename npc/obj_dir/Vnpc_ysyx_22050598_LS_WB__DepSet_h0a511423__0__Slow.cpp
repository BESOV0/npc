// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_LS_WB.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_LS_WB___ctor_var_reset(Vnpc_ysyx_22050598_LS_WB* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_LS_WB___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ls_wb_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ls_wb_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ls_wb_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_wb_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_wb_rd_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ls_wb_inst_is_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_wb_rd_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ls_wb_inst_is_ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ls_wb_rd_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_rd_idx_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ls_wb_inst_is_ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ls_wb_inst_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ls_wb_pc_r = VL_RAND_RESET_Q(64);
}
