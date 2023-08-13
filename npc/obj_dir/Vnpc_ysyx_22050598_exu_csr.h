// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_EXU_CSR_H_
#define VERILATED_VNPC_YSYX_22050598_EXU_CSR_H_  // guard

#include "verilated.h"

class Vnpc__Syms;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9;
class Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2;


class Vnpc_ysyx_22050598_exu_csr final : public VerilatedModule {
  public:
    // CELLS
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr_with_resetval__pi9* __PVT__mstatus_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__mtvec_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__mepc_dfflr;
    Vnpc_ysyx_22050598_sirv_gnrl_dfflr__pi2* __PVT__mcause_dfflr;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    VL_IN8(__PVT__ex_csr_bus_i,5,0);
    VL_IN8(__PVT__ex_inst_is_mret_i,0,0);
    VL_IN8(__PVT__ex_inst_is_ecall_i,0,0);
    CData/*0:0*/ __PVT__mstatus_r_ena;
    CData/*0:0*/ __PVT__mtvec_r_ena;
    CData/*0:0*/ __PVT__mepc_r_ena;
    CData/*0:0*/ __PVT__mcause_r_ena;
    CData/*0:0*/ __PVT__csr_ena;
    CData/*0:0*/ __PVT__csr_imm_is_0x300;
    CData/*0:0*/ __PVT__csr_imm_is_0x305;
    CData/*0:0*/ __PVT__csr_imm_is_0x341;
    CData/*0:0*/ __PVT__csr_imm_is_0x342;
    CData/*0:0*/ __PVT__csr_mstatus_ena;
    CData/*0:0*/ __PVT__csr_mtvec_ena;
    CData/*0:0*/ __PVT__csr_mepc_ena;
    CData/*0:0*/ __PVT__csr_mcause_ena;
    CData/*0:0*/ __PVT__write_csr_or;
    CData/*0:0*/ __PVT__write_csr_self;
    CData/*0:0*/ __PVT__write_csr_and;
    VL_IN64(__PVT__csr_imm_i,63,0);
    VL_IN64(__PVT__csr_reg_i,63,0);
    VL_IN64(__PVT__csr_zimm_i,63,0);
    VL_IN64(__PVT__csr_ecall_pc,63,0);
    VL_OUT64(__PVT__csr_rd_pc_data,63,0);
    QData/*63:0*/ __PVT__csr_mstatus_data;
    QData/*63:0*/ __PVT__csr_mtvec_data;
    QData/*63:0*/ __PVT__csr_mepc_data;
    QData/*63:0*/ __PVT__csr_mcause_data;
    QData/*63:0*/ __PVT__csr_mstatus_data_r;
    QData/*63:0*/ __PVT__csr_mtvec_data_r;
    QData/*63:0*/ __PVT__csr_mepc_data_r;
    QData/*63:0*/ __PVT__csr_mcause_data_r;
    QData/*63:0*/ __PVT__read_csr_data;
    QData/*63:0*/ __PVT__write_csr_data;
    QData/*63:0*/ __PVT__write_csr_or_data1;
    QData/*63:0*/ __PVT__write_csr_or_data2;
    QData/*63:0*/ __PVT__write_csr_or_data;
    QData/*63:0*/ __PVT__write_csr_self_data;
    QData/*63:0*/ __PVT__write_csr_and_data;

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_exu_csr(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_exu_csr();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_exu_csr);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
