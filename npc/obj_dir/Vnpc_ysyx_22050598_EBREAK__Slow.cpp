// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_EBREAK.h"

void Vnpc_ysyx_22050598_EBREAK___ctor_var_reset(Vnpc_ysyx_22050598_EBREAK* vlSelf);

Vnpc_ysyx_22050598_EBREAK::Vnpc_ysyx_22050598_EBREAK(Vnpc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpc_ysyx_22050598_EBREAK___ctor_var_reset(this);
}

void Vnpc_ysyx_22050598_EBREAK::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpc_ysyx_22050598_EBREAK::~Vnpc_ysyx_22050598_EBREAK() {
}
