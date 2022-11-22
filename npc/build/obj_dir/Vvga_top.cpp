// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vvga_top.h"
#include "Vvga_top__Syms.h"

//============================================================
// Constructors

Vvga_top::Vvga_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vvga_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , ps2_clk{vlSymsp->TOP.ps2_clk}
    , ps2_data{vlSymsp->TOP.ps2_data}
    , VGA_CLK{vlSymsp->TOP.VGA_CLK}
    , VGA_HSYNC{vlSymsp->TOP.VGA_HSYNC}
    , VGA_VSYNC{vlSymsp->TOP.VGA_VSYNC}
    , VGA_BLANK_N{vlSymsp->TOP.VGA_BLANK_N}
    , VGA_R{vlSymsp->TOP.VGA_R}
    , VGA_G{vlSymsp->TOP.VGA_G}
    , VGA_B{vlSymsp->TOP.VGA_B}
    , rootp{&(vlSymsp->TOP)}
{
}

Vvga_top::Vvga_top(const char* _vcname__)
    : Vvga_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vvga_top::~Vvga_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vvga_top___024root___eval_initial(Vvga_top___024root* vlSelf);
void Vvga_top___024root___eval_settle(Vvga_top___024root* vlSelf);
void Vvga_top___024root___eval(Vvga_top___024root* vlSelf);
QData Vvga_top___024root___change_request(Vvga_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vvga_top___024root___eval_debug_assertions(Vvga_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vvga_top___024root___final(Vvga_top___024root* vlSelf);

static void _eval_initial_loop(Vvga_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vvga_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vvga_top___024root___eval_settle(&(vlSymsp->TOP));
        Vvga_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvga_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/xg/ysyx-workbench/npc/vsrc/vga_top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvga_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vvga_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vvga_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vvga_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vvga_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vvga_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("/home/xg/ysyx-workbench/npc/vsrc/vga_top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vvga_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vvga_top::final() {
    Vvga_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vvga_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vvga_top::name() const {
    return vlSymsp->name();
}
