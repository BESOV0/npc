// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "Vnpc___024root.h"
#include "Vnpc__Syms.h"

#include "verilated_dpi.h"

//==========


void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf);

Vnpc___024root::Vnpc___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vnpc___024root___ctor_var_reset(this);
}

void Vnpc___024root::__Vconfigure(Vnpc__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vnpc___024root::~Vnpc___024root() {
}

void Vnpc___024root___eval_initial(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EBREAK__l6(Vnpc___024root* vlSelf);
void Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__6__PROF__ysyx_22050598_EXU__l18(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__7__PROF__ysyx_22050598_IFU__l13(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_IFU__l15(Vnpc___024root* vlSelf);
void Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_Reg_READ__l11(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l21(Vnpc___024root* vlSelf);
void Vnpc___024root___settle__TOP__11__PROF__npc__l79(Vnpc___024root* vlSelf);

void Vnpc___024root___eval_settle(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___eval_settle\n"); );
    // Body
    Vnpc___024root___combo__TOP__1__PROF__ysyx_22050598_EBREAK__l6(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vnpc___024root___combo__TOP__2__PROF__ysyx_22050598_IDU__l46(vlSelf);
    Vnpc___024root___settle__TOP__6__PROF__ysyx_22050598_EXU__l18(vlSelf);
    Vnpc___024root___settle__TOP__7__PROF__ysyx_22050598_IFU__l13(vlSelf);
    Vnpc___024root___settle__TOP__8__PROF__ysyx_22050598_IFU__l15(vlSelf);
    Vnpc___024root___combo__TOP__3__PROF__ysyx_22050598_Reg_READ__l11(vlSelf);
    Vnpc___024root___settle__TOP__10__PROF__ysyx_22050598_EXU__l21(vlSelf);
    Vnpc___024root___settle__TOP__11__PROF__npc__l79(vlSelf);
}

void Vnpc___024root___final(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___final\n"); );
}

void Vnpc___024root___ctor_var_reset(Vnpc___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vnpc___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_Q(64);
    vlSelf->fdata = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__inst_type = VL_RAND_RESET_I(6);
    vlSelf->npc__DOT__ren = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc = VL_RAND_RESET_Q(64);
    vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_next = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__inst_addi = VL_RAND_RESET_I(1);
    vlSelf->npc__DOT__u_ysyx_22050598_EXU__DOT__sum = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvdim0__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = VL_RAND_RESET_Q(64);
    vlSelf->__Vdlyvset__npc__DOT__u_ysyx_22050598_RegisterFile__DOT__rf__v0 = 0;
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
