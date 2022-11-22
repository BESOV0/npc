// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvga_top.h for the primary calling header

#include "Vvga_top___024root.h"
#include "Vvga_top__Syms.h"

//==========

VL_INLINE_OPT void Vvga_top___024root___combo__TOP__1(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->VGA_CLK = vlSelf->clk;
}

VL_INLINE_OPT void Vvga_top___024root___sequent__TOP__3(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__v_valid;
    CData/*0:0*/ __Vdly__vga_top__DOT__my_vmem__DOT__move_h;
    SData/*9:0*/ __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    SData/*9:0*/ __Vdly__vga_top__DOT__my_vmem__DOT__X_Block;
    SData/*9:0*/ __Vdly__vga_top__DOT__my_vmem__DOT__Y_Block;
    IData/*31:0*/ __Vdly__vga_top__DOT__my_vmem__DOT__count;
    // Body
    __Vdly__vga_top__DOT__my_vmem__DOT__count = vlSelf->vga_top__DOT__my_vmem__DOT__count;
    __Vdly__vga_top__DOT__my_vmem__DOT__Y_Block = vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block;
    __Vdly__vga_top__DOT__my_vmem__DOT__X_Block = vlSelf->vga_top__DOT__my_vmem__DOT__X_Block;
    __Vdly__vga_top__DOT__my_vmem__DOT__move_h = vlSelf->vga_top__DOT__my_vmem__DOT__move_h;
    __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        __Vdly__vga_top__DOT__my_vmem__DOT__count = 
            ((0x7a120U == vlSelf->vga_top__DOT__my_vmem__DOT__count)
              ? 0U : ((IData)(1U) + vlSelf->vga_top__DOT__my_vmem__DOT__count));
        __Vdly__vga_top__DOT__my_vmem__DOT__Y_Block 
            = (0x3ffU & ((0x7a11fU == vlSelf->vga_top__DOT__my_vmem__DOT__count)
                          ? ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__move_v)
                              ? ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block))
                              : ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block) 
                                 - (IData)(1U))) : (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block)));
        __Vdly__vga_top__DOT__my_vmem__DOT__X_Block 
            = (0x3ffU & ((0x7a11fU == vlSelf->vga_top__DOT__my_vmem__DOT__count)
                          ? ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__move_h)
                              ? ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))
                              : ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block) 
                                 - (IData)(1U))) : (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block)));
    } else {
        __Vdly__vga_top__DOT__my_vmem__DOT__count = 0U;
        __Vdly__vga_top__DOT__my_vmem__DOT__Y_Block = 0x64U;
        __Vdly__vga_top__DOT__my_vmem__DOT__X_Block = 0x64U;
    }
    if (vlSelf->rst) {
        if ((0x27U != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))) {
            if ((0x22fU != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))) {
                vlSelf->vga_top__DOT__my_vmem__DOT__move_v 
                    = ((0x27U == (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block)) 
                       | ((0x18fU != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block)) 
                          & (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__move_v)));
            }
        }
    } else {
        vlSelf->vga_top__DOT__my_vmem__DOT__move_v = 1U;
    }
    if (vlSelf->rst) {
        if ((0x27U == (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))) {
            __Vdly__vga_top__DOT__my_vmem__DOT__move_h = 1U;
        } else if ((0x22fU == (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))) {
            __Vdly__vga_top__DOT__my_vmem__DOT__move_h = 0U;
        } else if ((0x27U != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block))) {
            if ((0x18fU != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block))) {
                __Vdly__vga_top__DOT__my_vmem__DOT__move_h 
                    = vlSelf->vga_top__DOT__my_vmem__DOT__move_h;
            }
        }
    } else {
        __Vdly__vga_top__DOT__my_vmem__DOT__move_h = 1U;
    }
    vlSelf->vga_top__DOT__vga_data = ((IData)(vlSelf->rst)
                                       ? (((((0x28U 
                                              > (IData)(vlSelf->vga_top__DOT__h_addr)) 
                                             | (0x258U 
                                                <= (IData)(vlSelf->vga_top__DOT__h_addr))) 
                                            | (0x28U 
                                               > (IData)(vlSelf->vga_top__DOT__v_addr))) 
                                           | (0x1b8U 
                                              <= (IData)(vlSelf->vga_top__DOT__v_addr)))
                                           ? 0xffU : 
                                          ((((((IData)(vlSelf->vga_top__DOT__h_addr) 
                                               >= (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block)) 
                                              & ((IData)(vlSelf->vga_top__DOT__h_addr) 
                                                 < 
                                                 (0x3ffU 
                                                  & ((IData)(0x28U) 
                                                     + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__X_Block))))) 
                                             & ((IData)(vlSelf->vga_top__DOT__v_addr) 
                                                >= (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block))) 
                                            & ((IData)(vlSelf->vga_top__DOT__v_addr) 
                                               < (0x3ffU 
                                                  & ((IData)(0x28U) 
                                                     + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block)))))
                                            ? 0U : 0xffffffU))
                                       : 0U);
    if (vlSelf->rst) {
        if ((0x320U == (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt))) {
            vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt 
                = ((0x20dU == (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt))
                    ? 1U : (0x3ffU & ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt))));
            __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
        } else {
            __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt)));
        }
    } else {
        vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt = 1U;
        __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt = 1U;
    }
    vlSelf->vga_top__DOT__my_vmem__DOT__count = __Vdly__vga_top__DOT__my_vmem__DOT__count;
    vlSelf->vga_top__DOT__my_vmem__DOT__move_h = __Vdly__vga_top__DOT__my_vmem__DOT__move_h;
    vlSelf->vga_top__DOT__my_vmem__DOT__X_Block = __Vdly__vga_top__DOT__my_vmem__DOT__X_Block;
    vlSelf->vga_top__DOT__my_vmem__DOT__Y_Block = __Vdly__vga_top__DOT__my_vmem__DOT__Y_Block;
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA_R = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->vga_top__DOT__vga_data);
    vlSelf->VGA_VSYNC = (2U < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt));
    vga_top__DOT__my_vga_ctrl__DOT__v_valid = ((0x23U 
                                                < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt)) 
                                               & (0x203U 
                                                  >= (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt)));
    vlSelf->VGA_HSYNC = (0x60U < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt));
    vga_top__DOT__my_vga_ctrl__DOT__h_valid = ((0x90U 
                                                < (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt)) 
                                               & (0x310U 
                                                  >= (IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt)));
    if (vga_top__DOT__my_vga_ctrl__DOT__v_valid) {
        vlSelf->vga_top__DOT__v_addr = (0x3ffU & ((IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__y_cnt) 
                                                  - (IData)(0x24U)));
        vlSelf->VGA_BLANK_N = ((IData)(vga_top__DOT__my_vga_ctrl__DOT__h_valid) 
                               & 1U);
    } else {
        vlSelf->vga_top__DOT__v_addr = 0U;
        vlSelf->VGA_BLANK_N = 0U;
    }
    vlSelf->vga_top__DOT__h_addr = ((IData)(vga_top__DOT__my_vga_ctrl__DOT__h_valid)
                                     ? (0x3ffU & ((IData)(vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt) 
                                                  - (IData)(0x91U)))
                                     : 0U);
}

void Vvga_top___024root___eval(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___eval\n"); );
    // Body
    Vvga_top___024root___combo__TOP__1(vlSelf);
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->rst)) & (IData)(vlSelf->__Vclklast__TOP__rst)))) {
        Vvga_top___024root___sequent__TOP__3(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData Vvga_top___024root___change_request_1(Vvga_top___024root* vlSelf);

VL_INLINE_OPT QData Vvga_top___024root___change_request(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___change_request\n"); );
    // Body
    return (Vvga_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vvga_top___024root___change_request_1(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vvga_top___024root___eval_debug_assertions(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
