// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_EBREAK.h"

extern "C" void ebreak(long long ebreak_a0);

VL_INLINE_OPT void Vnpc_ysyx_22050598_EBREAK____Vdpiimwrap_ebreak_TOP__npc__u_ysyx_22050598_EBREAK(QData/*63:0*/ ebreak_a0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_EBREAK____Vdpiimwrap_ebreak_TOP__npc__u_ysyx_22050598_EBREAK\n"); );
    // Body
    long long ebreak_a0__Vcvt;
    for (size_t ebreak_a0__Vidx = 0; ebreak_a0__Vidx < 1; ++ebreak_a0__Vidx) ebreak_a0__Vcvt = ebreak_a0;
    ebreak(ebreak_a0__Vcvt);
}
