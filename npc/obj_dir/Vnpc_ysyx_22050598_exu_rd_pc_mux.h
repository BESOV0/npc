// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_EXU_RD_PC_MUX_H_
#define VERILATED_VNPC_YSYX_22050598_EXU_RD_PC_MUX_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_exu_rd_pc_mux final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__csr_rd_en,0,0);
    VL_IN8(__PVT__alu_pc_en,0,0);
    VL_IN8(__PVT__csr_mret,0,0);
    VL_IN8(__PVT__csr_ecall,0,0);
    VL_OUT8(__PVT__ex_pc_data_ena_o,0,0);
    CData/*0:0*/ __PVT__csr_pc_en;
    VL_IN64(__PVT__csr_rd_pc_data,63,0);
    VL_IN64(__PVT__alu_rd_data,63,0);
    VL_IN64(__PVT__alu_pc_data,63,0);
    VL_OUT64(__PVT__ex_rd_data_o,63,0);
    VL_OUT64(__PVT__ex_pc_data_o,63,0);

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_exu_rd_pc_mux(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_exu_rd_pc_mux();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_exu_rd_pc_mux);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
