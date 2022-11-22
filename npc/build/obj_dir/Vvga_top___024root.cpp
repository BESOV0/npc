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

extern const VlUnpacked<CData/*1:0*/, 8192> Vvga_top__ConstPool__TABLE_a476c45f_0;
extern const VlUnpacked<CData/*7:0*/, 8192> Vvga_top__ConstPool__TABLE_558a85db_0;
extern const VlUnpacked<CData/*0:0*/, 8192> Vvga_top__ConstPool__TABLE_ea5f80d8_0;

VL_INLINE_OPT void Vvga_top___024root___sequent__TOP__3(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__h_valid;
    CData/*0:0*/ vga_top__DOT__my_vga_ctrl__DOT__v_valid;
    CData/*7:0*/ vga_top__DOT__my_vmem__DOT____Vlvbound1;
    CData/*3:0*/ __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count;
    SData/*12:0*/ __Vtableidx1;
    SData/*9:0*/ __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    IData/*31:0*/ __Vdly__vga_top__DOT__u_vga_keyboard__DOT__counttt;
    // Body
    __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count 
        = vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count;
    __Vdly__vga_top__DOT__u_vga_keyboard__DOT__counttt 
        = vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt;
    __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt = vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    if (vlSelf->rst) {
        vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt = 
            (0x3ffU & ((0U < (IData)(vlSelf->vga_top__DOT__h_addr))
                        ? VL_DIV_III(32, ((IData)(vlSelf->vga_top__DOT__h_addr) 
                                          - (IData)(1U)), (IData)(9U))
                        : (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt)));
        vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt = 
            (0x3ffU & ((0U < (IData)(vlSelf->vga_top__DOT__h_addr))
                        ? ((IData)(vlSelf->vga_top__DOT__v_addr) 
                           >> 4U) : (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt)));
        vlSelf->vga_top__DOT__my_vmem__DOT__count = 
            (0xfffU & ((IData)(vlSelf->vga_top__DOT__sflag)
                        ? ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__count))
                        : ((0x852U == (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__count))
                            ? 0U : (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__count))));
        vlSelf->vga_top__DOT__vga_data = ((((0U < (IData)(vlSelf->vga_top__DOT__h_addr)) 
                                            & ((0xbU 
                                                >= 
                                                (0xfU 
                                                 & (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__h_addrr))) 
                                               & (vlSelf->vga_top__DOT__my_vmem__DOT__vga_mem
                                                  [
                                                  (0xfffU 
                                                   & ((IData)(1U) 
                                                      + 
                                                      (((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__ascaii0) 
                                                        << 4U) 
                                                       + (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__v_addrr))))] 
                                                  >> 
                                                  (0xfU 
                                                   & (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__h_addrr))))) 
                                           & (0U != (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__ascaii0)))
                                           ? 0xffffffU
                                           : 0U);
        __Vdly__vga_top__DOT__u_vga_keyboard__DOT__counttt 
            = ((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__en_counttt)
                ? ((IData)(1U) + vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt)
                : 0U);
    } else {
        vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt = 0U;
        vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt = 0U;
        vlSelf->vga_top__DOT__my_vmem__DOT__count = 0U;
        vlSelf->vga_top__DOT__vga_data = 0U;
        __Vdly__vga_top__DOT__u_vga_keyboard__DOT__counttt = 0U;
    }
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
    vlSelf->vga_top__DOT__my_vga_ctrl__DOT__x_cnt = __Vdly__vga_top__DOT__my_vga_ctrl__DOT__x_cnt;
    vlSelf->VGA_R = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 0x10U));
    vlSelf->VGA_G = (0xffU & (vlSelf->vga_top__DOT__vga_data 
                              >> 8U));
    vlSelf->VGA_B = (0xffU & vlSelf->vga_top__DOT__vga_data);
    if (vlSelf->rst) {
        if ((0U < (IData)(vlSelf->vga_top__DOT__h_addr))) {
            vlSelf->vga_top__DOT__my_vmem__DOT__h_addrr 
                = (0x3ffU & VL_MODDIV_III(32, ((IData)(vlSelf->vga_top__DOT__h_addr) 
                                               - (IData)(1U)), (IData)(9U)));
        }
    }
    vlSelf->vga_top__DOT__my_vmem__DOT__ascaii0 = ((IData)(vlSelf->rst)
                                                    ? 
                                                   ((0x852U 
                                                     >= (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__cnt))
                                                     ? 
                                                    vlSelf->vga_top__DOT__my_vmem__DOT__ram
                                                    [vlSelf->vga_top__DOT__my_vmem__DOT__cnt]
                                                     : 0U)
                                                    : 0U);
    if (vlSelf->rst) {
        if ((0U < (IData)(vlSelf->vga_top__DOT__h_addr))) {
            vlSelf->vga_top__DOT__my_vmem__DOT__v_addrr 
                = (0xfU & (IData)(vlSelf->vga_top__DOT__v_addr));
        }
    }
    __Vtableidx1 = (((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt_full) 
                     << 0xcU) | (((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer) 
                                  << 2U) | (((IData)(vlSelf->vga_top__DOT__sflag) 
                                             << 1U) 
                                            | (IData)(vlSelf->rst))));
    if ((1U & Vvga_top__ConstPool__TABLE_a476c45f_0
         [__Vtableidx1])) {
        vlSelf->vga_top__DOT__ascaii = Vvga_top__ConstPool__TABLE_558a85db_0
            [__Vtableidx1];
    }
    if ((2U & Vvga_top__ConstPool__TABLE_a476c45f_0
         [__Vtableidx1])) {
        vlSelf->vga_top__DOT__u_vga_keyboard__DOT__en_counttt 
            = Vvga_top__ConstPool__TABLE_ea5f80d8_0
            [__Vtableidx1];
    }
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
    vlSelf->vga_top__DOT__my_vmem__DOT__cnt = (0xfffU 
                                               & ((IData)(1U) 
                                                  + 
                                                  ((IData)(vlSelf->vga_top__DOT__my_vmem__DOT__x_cnt) 
                                                   + 
                                                   ((IData)(0x47U) 
                                                    * (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__y_cnt)))));
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
    vga_top__DOT__my_vmem__DOT____Vlvbound1 = vlSelf->vga_top__DOT__ascaii;
    if ((0x852U >= (IData)(vlSelf->vga_top__DOT__my_vmem__DOT__count))) {
        vlSelf->vga_top__DOT__my_vmem__DOT__ram[vlSelf->vga_top__DOT__my_vmem__DOT__count] 
            = vga_top__DOT__my_vmem__DOT____Vlvbound1;
    }
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt_full 
        = ((IData)(vlSelf->rst) & (0x4c4b40U == vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt));
    if (vlSelf->rst) {
        if (vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling) {
            if ((0xaU == (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))) {
                __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count = 0U;
            } else {
                vlSelf->vga_top__DOT__u_vga_keyboard__DOT____Vlvbound1 
                    = vlSelf->ps2_data;
                if ((9U >= (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))) {
                    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer 
                        = (((~ ((IData)(1U) << (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))) 
                            & (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer)) 
                           | (0x3ffU & ((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT____Vlvbound1) 
                                        << (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))));
                }
                __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count 
                    = (0xfU & ((IData)(1U) + (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count)));
            }
        }
    } else {
        __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count = 0U;
    }
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__counttt 
        = __Vdly__vga_top__DOT__u_vga_keyboard__DOT__counttt;
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count 
        = __Vdly__vga_top__DOT__u_vga_keyboard__DOT__count;
}

VL_INLINE_OPT void Vvga_top___024root___sequent__TOP__4(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___sequent__TOP__4\n"); );
    // Body
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync 
        = ((6U & ((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync) 
                  << 1U)) | (IData)(vlSelf->ps2_clk));
    vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling 
        = (IData)((4U == (6U & (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__ps2_clk_sync))));
}

VL_INLINE_OPT void Vvga_top___024root___combo__TOP__6(Vvga_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vvga_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vvga_top___024root___combo__TOP__6\n"); );
    // Body
    vlSelf->vga_top__DOT__sflag = (((((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__sampling) 
                                      & (0xaU == (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__count))) 
                                     & (~ (IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer))) 
                                    & (IData)(vlSelf->ps2_data)) 
                                   & VL_REDXOR_32((0x1ffU 
                                                   & ((IData)(vlSelf->vga_top__DOT__u_vga_keyboard__DOT__buffer) 
                                                      >> 1U))));
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
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vvga_top___024root___sequent__TOP__4(vlSelf);
    }
    Vvga_top___024root___combo__TOP__6(vlSelf);
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
    if (VL_UNLIKELY((vlSelf->ps2_clk & 0xfeU))) {
        Verilated::overWidthError("ps2_clk");}
    if (VL_UNLIKELY((vlSelf->ps2_data & 0xfeU))) {
        Verilated::overWidthError("ps2_data");}
}
#endif  // VL_DEBUG
