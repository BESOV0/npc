// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC___024ROOT_H_
#define VERILATED_VNPC___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vnpc__Syms;
class Vnpc_VerilatedVcd;
class Vnpc___024unit;


//----------

VL_MODULE(Vnpc___024root) {
  public:
    // CELLS
    Vnpc___024unit* __PVT____024unit;

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN(inst,31,0);
    VL_OUT64(pc,63,0);
    VL_OUT64(fdata,63,0);

    // LOCAL SIGNALS
    CData/*5:0*/ npc__DOT__inst_type;
    CData/*0:0*/ npc__DOT__ren;
    CData/*0:0*/ npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__pc;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next;
    QData/*63:0*/ npc__DOT__u_ysyx_22050598_EXU__DOT__sum;
    VlUnpacked<QData/*63:0*/, 32> npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf;

    // LOCAL VARIABLES
    CData/*4:0*/ __Vdlyvdim0__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0;
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*63:0*/ __Vdlyvval__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vnpc__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vnpc___024root);  ///< Copying not allowed
  public:
    Vnpc___024root(const char* name);
    ~Vnpc___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vnpc__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
