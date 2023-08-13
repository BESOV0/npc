// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_IF_ID.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_IF_ID___ctor_var_reset(Vnpc_ysyx_22050598_IF_ID* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_IF_ID___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rst = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_pc_i = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__if_flush = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_stall = VL_RAND_RESET_I(1);
    vlSelf->__PVT__if_pc_o = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__if_inst_o = VL_RAND_RESET_I(32);
    vlSelf->__PVT__temp_inst = VL_RAND_RESET_I(32);
    vlSelf->__PVT__temp_pc = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__pc_r = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->__PVT__if_en = VL_RAND_RESET_I(1);
}
