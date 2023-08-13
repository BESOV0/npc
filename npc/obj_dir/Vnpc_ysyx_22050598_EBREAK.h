// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_EBREAK_H_
#define VERILATED_VNPC_YSYX_22050598_EBREAK_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_EBREAK final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ebreak_flag,0,0);
    VL_IN64(__PVT__ebreak_a0,63,0);

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_EBREAK(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_EBREAK();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_EBREAK);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
