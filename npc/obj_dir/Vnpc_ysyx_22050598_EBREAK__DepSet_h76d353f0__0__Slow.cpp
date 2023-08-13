// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc_ysyx_22050598_EBREAK.h"

VL_ATTR_COLD void Vnpc_ysyx_22050598_EBREAK___ctor_var_reset(Vnpc_ysyx_22050598_EBREAK* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EBREAK___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__ebreak_flag = VL_RAND_RESET_I(1);
    vlSelf->__PVT__ebreak_a0 = VL_RAND_RESET_Q(64);
}
