// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_top.h for the primary calling header

#include "Vvga_top___024root.h"
#include "Vvga_top__Syms.h"

//==========


void Vvga_top___024root___ctor_var_reset(Vvga_top___024root* vlSelf);

Vvga_top___024root::Vvga_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vvga_top___024root___ctor_var_reset(this);
}

void Vvga_top___024root::__Vconfigure(Vvga_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vvga_top___024root::~Vvga_top___024root() {
}

void Vvga_top___024root___settle__TOP__2(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___settle__TOP__2\n"); );
    // Variables
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__v_valid;
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt));
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt));
    vlSelf->VGA_R = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->vga_top__DOT__vga_data);
    vga_top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U 
                                                < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                               & (0x310U 
                                                  >= (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt)));
    vga_top__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U 
                                                < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                               & (0x203U 
                                                  >= (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt)));
    if (vga_top__DOT__my_vga_ctrl__DOT__h_valid) {
        vlSelf->vga_top__DOT__h_addr = (0x3ffU & ((IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x91U)));
        vlSelf->VGA_BLANK_N = ((IData)(vga_top__DOT__my_vga_ctrl__DOT__v_valid) 
                               & 1U);
    } else {
        vlSelf->vga_top__DOT__h_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
    vlSelf->vga_top__DOT__v_addr = ((IData)(vga_top__DOT__my_vga_ctrl__DOT__v_valid)
                                     ? (0x3ffU & ((IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                  - (IData)(0x24U)))
                                     : 0U);
}

void Vvga_top___024root___eval_initial(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

void Vvga_top___024root___eval_settle(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___eval_settle\n"); );
    // Body
    Vvga_top___024root___settle__TOP__2(vlSelf);
}

void Vvga_top___024root___final(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___final\n"); );
}

void Vvga_top___024root___ctor_var_reset(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = 0;
    vlSelf->rst = 0;
    vlSelf->VGA_CLK = 0;
    vlSelf->VGA_HSYNC = 0;
    vlSelf->VGA_VSYNC = 0;
    vlSelf->VGA_BLANK_N = 0;
    vlSelf->VGA_R = 0;
    vlSelf->VGA_G = 0;
    vlSelf->VGA_B = 0;
    vlSelf->vga_top__DOT__h_addr = 0;
    vlSelf->vga_top__DOT__v_addr = 0;
    vlSelf->vga_top__DOT__vga_data = 0;
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__X_Block = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__move_h = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__move_v = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__count = 0;
}
