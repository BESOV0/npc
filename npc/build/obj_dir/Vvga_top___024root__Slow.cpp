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
    vlSelf->vga_top__DOT__my_vmem__DOT__cnt = (0xfffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt) 
                                                   + 
                                                   ((IData)(0x47U) 
                                                    * (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt)))));
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling 
        = (IData)((4U == (6U & (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync))));
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
    vlSelf->vga_top__DOT__sflag = (((((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling) 
                                      & (0xaU == (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))) 
                                     & (~ (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer))) 
                                    & (IData)(vlSelf->ps2_data)) 
                                   & VL_REDXOR_32((0x1ffU 
                                                   & ((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer) 
                                                      >> 1U))));
}

void Vvga_top___024root___initial__TOP__5(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___initial__TOP__5\n"); );
    // Variables
    VlWide<5>/*159:0*/ __Vtemp5;
    // Body
    __Vtemp5[0U] = 0x2e686578U;
    __Vtemp5[1U] = 0x64617461U;
    __Vtemp5[2U] = 0x7263652fU;
    __Vtemp5[3U] = 0x65736f75U;
    __Vtemp5[4U] = 0x72U;
    VL_READMEM_N(true, 12, 4096, 0, VL_CVT_PACK_STR_NW(5, __Vtemp5)
                 ,  &(vlSelf->vga_top__DOT__my_vmem__DOT__vga_mem)
                 , 0, ~0ULL);
}

void Vvga_top___024root___eval_initial(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
    Vvga_top___024root___initial__TOP__5(vlSelf);
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
    vlSelf->ps2_clk = 0;
    vlSelf->ps2_data = 0;
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
    vlSelf->vga_top__DOT__ascaii = 0;
    vlSelf->vga_top__DOT__sflag = 0;
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt = 0;
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt_full = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__en_counttt = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling = 0;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT____Vlvbound1 = 0;
    for (int __Vi0=0; __Vi0<4096; ++__Vi0) {
        vlSelf->vga_top__DOT__my_vmem__DOT__vga_mem[__Vi0] = 0;
    }
    vlSelf->vga_top__DOT__my_vmem__DOT__bdat1 = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__bdat2 = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__press_flag = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__clear = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__count = 0;
    for (int __Vi0=0; __Vi0<2131; ++__Vi0) {
        vlSelf->vga_top__DOT__my_vmem__DOT__ram[__Vi0] = 0;
    }
    vlSelf->vga_top__DOT__my_vmem__DOT__v_addrr = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__h_addrr = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__cnt = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT__ascaii0 = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT____Vlvbound1 = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT____Vlvbound2 = 0;
    vlSelf->vga_top__DOT__my_vmem__DOT____Vlvbound3 = 0;
}
