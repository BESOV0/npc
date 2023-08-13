// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_EX_LS.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_EX_LS___ctor_var_reset(Vnpc_ysyx_22050598_EX_LS* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EX_LS___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ex_ls_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_ls_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_ls_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_alu_rd_ls_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_alu_rd_data_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_load_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_store_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_store_data = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_ls_data_bus = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ex_ls_write_rd_idx = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_ls_load_unsigned = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_store_data_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_alu_rd_data_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_load_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_store_en_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_ls_data_type_o = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ex_ls_rd_idx_o = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_ls_load_unsigned_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_inst_is_ebreak = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_inst_is_ebreak_o = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_alu_rd_ls_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_store_data_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ex_ls_alu_rd_data_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_load_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_store_en_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_ls_data_bus_r = VL_RAND_RESET_I(2);
    vlSelf->__PVT__ex_ls_write_rd_idx_r = VL_RAND_RESET_I(5);
    vlSelf->__PVT__ex_ls_inst_is_ebreak_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_load_unsigned_r = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_store_data_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ex_ls_inst_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_ls_pc_r = VL_RAND_RESET_Q(64);
}
