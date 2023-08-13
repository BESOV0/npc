// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vnpc.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vnpc__Syms.h"
#include "Vnpc_ysyx_22050598_regfile.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__npc__u_ysyx_22050598_regfile(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile____Vdpiimwrap_set_gpr_ptr__Vdpioc2_TOP__npc__u_ysyx_22050598_regfile\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___ico_sequent__TOP__npc__u_ysyx_22050598_regfile__0(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___ico_sequent__TOP__npc__u_ysyx_22050598_regfile__0\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__clk 
        = vlSelf->__PVT__clk;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__rst_n 
        = vlSelf->__PVT__rst;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__0(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__0\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[1U] = vlSelf->__Vcellout__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__1(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__1\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[2U] = vlSelf->__Vcellout__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__2(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__2\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[3U] = vlSelf->__Vcellout__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__3(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__3\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[4U] = vlSelf->__Vcellout__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__4(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__4\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[5U] = vlSelf->__Vcellout__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__5(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__5\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[6U] = vlSelf->__Vcellout__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__6(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__6\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[7U] = vlSelf->__Vcellout__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__7(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__7\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[8U] = vlSelf->__Vcellout__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__8(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__8\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[9U] = vlSelf->__Vcellout__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__9(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__9\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xaU] = vlSelf->__Vcellout__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__10(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__10\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xbU] = vlSelf->__Vcellout__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__11(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__11\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xcU] = vlSelf->__Vcellout__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__12(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__12\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xdU] = vlSelf->__Vcellout__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__13(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__13\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xeU] = vlSelf->__Vcellout__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__14(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__14\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0xfU] = vlSelf->__Vcellout__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__15(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__15\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x10U] = vlSelf->__Vcellout__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__16(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__16\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x11U] = vlSelf->__Vcellout__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__17(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__17\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x12U] = vlSelf->__Vcellout__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__18(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__18\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x13U] = vlSelf->__Vcellout__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__19(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__19\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x14U] = vlSelf->__Vcellout__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__20(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__20\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x15U] = vlSelf->__Vcellout__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__21(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__21\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x16U] = vlSelf->__Vcellout__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__22(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__22\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x17U] = vlSelf->__Vcellout__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__23(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__23\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x18U] = vlSelf->__Vcellout__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__24(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__24\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x19U] = vlSelf->__Vcellout__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__25(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__25\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1aU] = vlSelf->__Vcellout__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__26(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__26\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1bU] = vlSelf->__Vcellout__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__27(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__27\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1cU] = vlSelf->__Vcellout__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__28(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__28\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1dU] = vlSelf->__Vcellout__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__29(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__29\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1eU] = vlSelf->__Vcellout__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__30(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__30\n"); );
    // Body
    vlSelf->__Vcellout__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3 
        = vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__qout;
    vlSelf->__PVT__rf_r[0x1fU] = vlSelf->__Vcellout__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber3;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__31(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_sequent__TOP__npc__u_ysyx_22050598_regfile__31\n"); );
    // Body
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__dnxt 
        = vlSelf->__PVT__write_rd_data;
}

VL_INLINE_OPT void Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__1(Vnpc_ysyx_22050598_regfile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vnpc_ysyx_22050598_regfile___nba_comb__TOP__npc__u_ysyx_22050598_regfile__1\n"); );
    // Body
    VL_ASSIGNSEL_II(32,2,1U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (2U == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (1U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,3U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (4U == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (3U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,5U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (6U == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (5U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,7U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (8U == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (7U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,9U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0xaU == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (9U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0xbU, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0xcU == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0xbU == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0xdU, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0xeU == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0xdU == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0xfU, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x10U 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0xfU == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x11U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x12U 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x11U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x13U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x14U 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x13U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x15U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x16U 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x15U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x17U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x18U 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x17U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x19U, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x1aU 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x19U == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x1bU, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x1cU 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x1bU == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNSEL_II(32,2,0x1dU, vlSelf->__PVT__rf_wen, 
                    VL_CONCAT_III(2,1,1, ((IData)(vlSelf->__PVT__write_en) 
                                          & (0x1eU 
                                             == (IData)(vlSelf->__PVT__write_rd_idx))), 
                                  ((IData)(vlSelf->__PVT__write_en) 
                                   & (0x1dU == (IData)(vlSelf->__PVT__write_rd_idx)))));
    VL_ASSIGNBIT_II(0x1fU, vlSelf->__PVT__rf_wen, ((IData)(vlSelf->__PVT__write_en) 
                                                   & (0x1fU 
                                                      == (IData)(vlSelf->__PVT__write_rd_idx))));
    vlSelf->__Vcellinp__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 1U));
    vlSelf->__Vcellinp__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 2U));
    vlSelf->__Vcellinp__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 3U));
    vlSelf->__Vcellinp__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 4U));
    vlSelf->__Vcellinp__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 5U));
    vlSelf->__Vcellinp__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 6U));
    vlSelf->__Vcellinp__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 7U));
    vlSelf->__Vcellinp__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 8U));
    vlSelf->__Vcellinp__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 9U));
    vlSelf->__Vcellinp__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xaU));
    vlSelf->__Vcellinp__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xbU));
    vlSelf->__Vcellinp__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xcU));
    vlSelf->__Vcellinp__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xdU));
    vlSelf->__Vcellinp__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xeU));
    vlSelf->__Vcellinp__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0xfU));
    vlSelf->__Vcellinp__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x10U));
    vlSelf->__Vcellinp__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x11U));
    vlSelf->__Vcellinp__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x12U));
    vlSelf->__Vcellinp__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x13U));
    vlSelf->__Vcellinp__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x14U));
    vlSelf->__Vcellinp__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x15U));
    vlSelf->__Vcellinp__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x16U));
    vlSelf->__Vcellinp__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x17U));
    vlSelf->__Vcellinp__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x18U));
    vlSelf->__Vcellinp__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x19U));
    vlSelf->__Vcellinp__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1aU));
    vlSelf->__Vcellinp__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1bU));
    vlSelf->__Vcellinp__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1cU));
    vlSelf->__Vcellinp__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1dU));
    vlSelf->__Vcellinp__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1eU));
    vlSelf->__Vcellinp__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1 
        = (1U & VL_BITSEL_IIII(32, vlSelf->__PVT__rf_wen, 0x1fU));
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
    vlSymsp->TOP__npc__u_ysyx_22050598_regfile__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr.__PVT__lden 
        = vlSelf->__Vcellinp__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr____pinNumber1;
}
