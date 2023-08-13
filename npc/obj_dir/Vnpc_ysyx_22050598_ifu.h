// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_IFU_H_
#define VERILATED_VNPC_YSYX_22050598_IFU_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1;


class Vnpc_ysyx_22050598_ifu final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi1* __PVT__pc_dfflr_resetval;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__pc_stall,0,0);
    VL_IN8(__PVT__flush_pc_en,0,0);
    VL_IN8(__PVT__prdt_pc_en,0,0);
    CData/*0:0*/ __PVT__pc_r_ena;
    VL_OUT(__PVT__id_inst,31,0);
    VL_IN64(__PVT__flush_pc,63,0);
    VL_IN64(__PVT__prdt_pc_add_op,63,0);
    VL_OUT64(__PVT__pc_now,63,0);
    QData/*63:0*/ __PVT__pc_in;
    QData/*63:0*/ __PVT__pc_r;
    QData/*63:0*/ __PVT__pc_add_op1;
    QData/*63:0*/ __PVT__pc_add_op2;
    QData/*63:0*/ __PVT__pc_add_res;
    QData/*63:0*/ __PVT__raddr;
    QData/*63:0*/ __PVT__rdata;
    QData/*63:0*/ __Vtask_pmem_read__0__rdata;
    QData/*63:0*/ __Vtask_pmem_read__1__rdata;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_ifu(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_ifu();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_ifu);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
