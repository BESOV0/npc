// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvga_top.h for the primary calling header

#ifndef VERILATED_VVGA_TOP___024ROOT_H_
#define VERILATED_VVGA_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vvga_top__Syms;

//----------

VL_MODULE(Vvga_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(ps2_clk,0,0);
    VL_IN8(ps2_data,0,0);
    VL_OUT8(VGA_CLK,0,0);
    VL_OUT8(VGA_HSYNC,0,0);
    VL_OUT8(VGA_VSYNC,0,0);
    VL_OUT8(VGA_BLANK_N,0,0);
    VL_OUT8(VGA_R,7,0);
    VL_OUT8(VGA_G,7,0);
    VL_OUT8(VGA_B,7,0);

    // LOCAL SIGNALS
    CData/*7:0*/ vga_top__DOT__ascaii;
    CData/*0:0*/ vga_top__DOT__sflag;
    CData/*3:0*/ vga_top__DOT__u_vga_keyboard__DOT__count;
    CData/*2:0*/ vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync;
    CData/*0:0*/ vga_top__DOT__u_vga_keyboard__DOT__counttt_full;
    CData/*0:0*/ vga_top__DOT__u_vga_keyboard__DOT__en_counttt;
    CData/*0:0*/ vga_top__DOT__u_vga_keyboard__DOT__sampling;
    CData/*0:0*/ vga_top__DOT__my_vmem__DOT__bdat1;
    CData/*0:0*/ vga_top__DOT__my_vmem__DOT__bdat2;
    CData/*0:0*/ vga_top__DOT__my_vmem__DOT__press_flag;
    CData/*1:0*/ vga_top__DOT__my_vmem__DOT__clear;
    SData/*9:0*/ vga_top__DOT__h_addr;
    SData/*9:0*/ vga_top__DOT__v_addr;
    SData/*9:0*/ vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ vga_top__DOT__my_vga_ctrl__DOT__y_cnt;
    SData/*9:0*/ vga_top__DOT__u_vga_keyboard__DOT__buffer;
    SData/*11:0*/ vga_top__DOT__my_vmem__DOT__count;
    SData/*9:0*/ vga_top__DOT__my_vmem__DOT__v_addrr;
    SData/*9:0*/ vga_top__DOT__my_vmem__DOT__h_addrr;
    SData/*9:0*/ vga_top__DOT__my_vmem__DOT__x_cnt;
    SData/*9:0*/ vga_top__DOT__my_vmem__DOT__y_cnt;
    SData/*11:0*/ vga_top__DOT__my_vmem__DOT__cnt;
    SData/*11:0*/ vga_top__DOT__my_vmem__DOT__ascaii0;
    IData/*23:0*/ vga_top__DOT__vga_data;
    IData/*31:0*/ vga_top__DOT__u_vga_keyboard__DOT__counttt;
    VlUnpacked<SData/*11:0*/, 4096> vga_top__DOT__my_vmem__DOT__vga_mem;
    VlUnpacked<CData/*7:0*/, 2131> vga_top__DOT__my_vmem__DOT__ram;

    // LOCAL VARIABLES
    CData/*0:0*/ vga_top__DOT__u_vga_keyboard__DOT____Vlvbound1;
    CData/*7:0*/ vga_top__DOT__my_vmem__DOT____Vlvbound1;
    CData/*7:0*/ vga_top__DOT__my_vmem__DOT____Vlvbound2;
    CData/*7:0*/ vga_top__DOT__my_vmem__DOT____Vlvbound3;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vclklast__TOP__rst;

    // INTERNAL VARIABLES
    Vvga_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vvga_top___024root);  ///< Copying not allowed
  public:
    Vvga_top___024root(const char* name);
    ~Vvga_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vvga_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
