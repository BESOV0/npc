// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_LSU_RD_MUX_H_
#define VERILATED_VNPC_YSYX_22050598_LSU_RD_MUX_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_lsu_rd_mux final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__ls_load_en,0,0);
    VL_IN64(__PVT__ls_alu_rd_data,63,0);
    VL_IN64(__PVT__ls_lsu_rd_data,63,0);
    VL_OUT64(__PVT__ls_rd_data,63,0);

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_lsu_rd_mux(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_lsu_rd_mux();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_lsu_rd_mux);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
