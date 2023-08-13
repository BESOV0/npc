// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_IFU_BPU_H_
#define VERILATED_VNPC_YSYX_22050598_IFU_BPU_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_ifu_bpu final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__prdt_taken,0,0);
    CData/*0:0*/ __PVT__inst_is_jal;
    CData/*0:0*/ __PVT__inst_is_bxx;
    VL_IN(__PVT__if_inst,31,0);
    VL_OUT64(__PVT__bpu_pc_add_op,63,0);
    QData/*63:0*/ __PVT__Bimm;
    QData/*63:0*/ __PVT__Jimm;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_ifu_bpu(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_ifu_bpu();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_ifu_bpu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
