// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_lsu_rd_mux.h"

void Vnpc_ysyx_22050598_lsu_rd_mux___ctor_var_reset(Vnpc_ysyx_22050598_lsu_rd_mux* vlSelf);

Vnpc_ysyx_22050598_lsu_rd_mux::Vnpc_ysyx_22050598_lsu_rd_mux(Vnpc__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vnpc_ysyx_22050598_lsu_rd_mux___ctor_var_reset(this);
}

void Vnpc_ysyx_22050598_lsu_rd_mux::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vnpc_ysyx_22050598_lsu_rd_mux::~Vnpc_ysyx_22050598_lsu_rd_mux() {
}
