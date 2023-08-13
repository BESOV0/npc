// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vnpc.h for the primary calling header

#ifndef VERILATED_VNPC_YSYX_22050598_IDU_DECODE_H_
#define VERILATED_VNPC_YSYX_22050598_IDU_DECODE_H_  // guard

#include "verilated.h"

class Vnpc__Syms;

class Vnpc_ysyx_22050598_idu_decode final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_OUT8(__PVT__id_op_a_sel_o,2,0);
        VL_OUT8(__PVT__id_op_b_sel_o,1,0);
        VL_OUT8(__PVT__id_read_rs1_idx_o,4,0);
        VL_OUT8(__PVT__id_read_rs2_idx_o,4,0);
        VL_OUT8(__PVT__id_w_reg_en_o,0,0);
        VL_OUT8(__PVT__id_write_rd_idx_o,4,0);
        VL_OUT8(__PVT__id_inst_is_ebreak_o,0,0);
        VL_OUT8(__PVT__id_inst_is_ecall_o,0,0);
        VL_OUT8(__PVT__id_inst_is_jalr_o,0,0);
        VL_OUT8(__PVT__id_inst_is_jal_o,0,0);
        VL_OUT8(__PVT__id_inst_is_store_o,0,0);
        VL_OUT8(__PVT__id_inst_is_set_o,0,0);
        VL_OUT8(__PVT__id_inst_is_srax_o,0,0);
        VL_OUT8(__PVT__id_inst_5_shamt_o,0,0);
        VL_OUT8(__PVT__id_inst_is_mret_o,0,0);
        VL_OUT8(__PVT__id_inst_is_csri_o,0,0);
        VL_OUT8(__PVT__id_ls_data_bus_o,1,0);
        VL_OUT8(__PVT__id_inst_divrem_bus_o,0,0);
        VL_OUT8(__PVT__id_inst_mul_bus_o,4,0);
        VL_OUT8(__PVT__id_csr_bus_o,5,0);
        VL_OUT8(__PVT__id_branch_bus_o,5,0);
        VL_OUT8(__PVT__id_unsigned_bus_o,1,0);
        VL_OUT8(__PVT__id_ls_req_o,0,0);
        VL_OUT8(__PVT__id_inst_is_rv64_o,0,0);
        VL_OUT8(__PVT__id_inst_is_illegal_o,0,0);
        CData/*2:0*/ __PVT__func3;
        CData/*0:0*/ __PVT__func3_000;
        CData/*0:0*/ __PVT__func3_001;
        CData/*0:0*/ __PVT__func3_010;
        CData/*0:0*/ __PVT__func3_011;
        CData/*0:0*/ __PVT__func3_100;
        CData/*0:0*/ __PVT__func3_101;
        CData/*0:0*/ __PVT__func3_110;
        CData/*0:0*/ __PVT__func3_111;
        CData/*6:0*/ __PVT__func7;
        CData/*0:0*/ __PVT__func7_0000000;
        CData/*0:0*/ __PVT__func7_0100000;
        CData/*0:0*/ __PVT__func7_0000001;
        CData/*0:0*/ __PVT__func7_0011000;
        CData/*4:0*/ __PVT__rs1_idx;
        CData/*4:0*/ __PVT__rs2_idx;
        CData/*4:0*/ __PVT__rd_idx;
        CData/*0:0*/ __PVT__rs1_00000;
        CData/*0:0*/ __PVT__rs2_00000;
        CData/*0:0*/ __PVT__rs2_00001;
        CData/*0:0*/ __PVT__rs2_00010;
        CData/*0:0*/ __PVT__rd_00000;
        CData/*6:0*/ __PVT__opcode;
        CData/*0:0*/ __PVT__opcode_alui;
        CData/*0:0*/ __PVT__opcode_alur;
        CData/*0:0*/ __PVT__opcode_aluiw;
        CData/*0:0*/ __PVT__opcode_alurw;
        CData/*0:0*/ __PVT__opcode_auipc;
        CData/*0:0*/ __PVT__opcode_branch;
        CData/*0:0*/ __PVT__opcode_jal;
        CData/*0:0*/ __PVT__opcode_jalr;
        CData/*0:0*/ __PVT__opcode_load;
        CData/*0:0*/ __PVT__opcode_store;
        CData/*0:0*/ __PVT__opcode_lui;
        CData/*0:0*/ __PVT__opcode_system;
        CData/*0:0*/ __PVT__func6_010000;
        CData/*0:0*/ __PVT__func6_000000;
        CData/*0:0*/ __PVT__inst_addi;
        CData/*0:0*/ __PVT__inst_slti;
    };
    struct {
        CData/*0:0*/ __PVT__inst_sltiu;
        CData/*0:0*/ __PVT__inst_xori;
        CData/*0:0*/ __PVT__inst_ori;
        CData/*0:0*/ __PVT__inst_andi;
        CData/*0:0*/ __PVT__inst_slli;
        CData/*0:0*/ __PVT__inst_srli;
        CData/*0:0*/ __PVT__inst_srai;
        CData/*0:0*/ __PVT__inst_addiw;
        CData/*0:0*/ __PVT__inst_slliw;
        CData/*0:0*/ __PVT__inst_srliw;
        CData/*0:0*/ __PVT__inst_sraiw;
        CData/*0:0*/ __PVT__inst_add;
        CData/*0:0*/ __PVT__inst_sub;
        CData/*0:0*/ __PVT__inst_sll;
        CData/*0:0*/ __PVT__inst_slt;
        CData/*0:0*/ __PVT__inst_sltu;
        CData/*0:0*/ __PVT__inst_xor;
        CData/*0:0*/ __PVT__inst_srl;
        CData/*0:0*/ __PVT__inst_sra;
        CData/*0:0*/ __PVT__inst_or;
        CData/*0:0*/ __PVT__inst_and;
        CData/*0:0*/ __PVT__inst_div;
        CData/*0:0*/ __PVT__inst_divu;
        CData/*0:0*/ __PVT__inst_mul;
        CData/*0:0*/ __PVT__inst_mulh;
        CData/*0:0*/ __PVT__inst_mulhsu;
        CData/*0:0*/ __PVT__inst_mulhu;
        CData/*0:0*/ __PVT__inst_rem;
        CData/*0:0*/ __PVT__inst_remu;
        CData/*0:0*/ __PVT__inst_addw;
        CData/*0:0*/ __PVT__inst_subw;
        CData/*0:0*/ __PVT__inst_sllw;
        CData/*0:0*/ __PVT__inst_srlw;
        CData/*0:0*/ __PVT__inst_sraw;
        CData/*0:0*/ __PVT__inst_mulw;
        CData/*0:0*/ __PVT__inst_divw;
        CData/*0:0*/ __PVT__inst_divuw;
        CData/*0:0*/ __PVT__inst_remw;
        CData/*0:0*/ __PVT__inst_remuw;
        CData/*0:0*/ __PVT__inst_beq;
        CData/*0:0*/ __PVT__inst_bne;
        CData/*0:0*/ __PVT__inst_blt;
        CData/*0:0*/ __PVT__inst_bge;
        CData/*0:0*/ __PVT__inst_bltu;
        CData/*0:0*/ __PVT__inst_bgeu;
        CData/*0:0*/ __PVT__inst_jal;
        CData/*0:0*/ __PVT__inst_jalr;
        CData/*0:0*/ __PVT__inst_lui;
        CData/*0:0*/ __PVT__inst_auipc;
        CData/*0:0*/ __PVT__inst_lbu;
        CData/*0:0*/ __PVT__inst_ld;
        CData/*0:0*/ __PVT__inst_lh;
        CData/*0:0*/ __PVT__inst_lhu;
        CData/*0:0*/ __PVT__inst_lw;
        CData/*0:0*/ __PVT__inst_lwu;
        CData/*0:0*/ __PVT__inst_sh;
        CData/*0:0*/ __PVT__inst_sw;
        CData/*0:0*/ __PVT__inst_sd;
        CData/*0:0*/ __PVT__inst_ebreak;
        CData/*0:0*/ __PVT__inst_ecall;
        CData/*0:0*/ __PVT__inst_mret;
        CData/*0:0*/ __PVT__inst_csrrw;
        CData/*0:0*/ __PVT__inst_csrrs;
        CData/*0:0*/ __PVT__inst_csrrc;
    };
    struct {
        CData/*0:0*/ __PVT__inst_csrrwi;
        CData/*0:0*/ __PVT__inst_csrrsi;
        CData/*0:0*/ __PVT__inst_csrrci;
        CData/*0:0*/ __PVT__csr_need_rs1;
        CData/*0:0*/ __PVT__inst_is_csri;
        CData/*0:0*/ __PVT__inst_is_csr;
        CData/*0:0*/ __PVT__inst_set_en;
        CData/*0:0*/ __PVT__cmp_unsigned;
        CData/*0:0*/ __PVT__load_unsigned;
        CData/*5:0*/ __PVT__inst_type;
        CData/*2:0*/ __PVT__alu_operand_sel_a;
        CData/*1:0*/ __PVT__alu_operand_sel_b;
        CData/*1:0*/ __PVT__ls_type;
        CData/*0:0*/ __PVT__rv64_inst;
        CData/*0:0*/ __PVT__sxxiw_shamt_legl;
        CData/*0:0*/ __PVT__sxxiw_shamt_ilgl;
        VL_OUT16(__PVT__id_op_type_o,9,0);
        SData/*9:0*/ __PVT__inst_opcode;
        VL_IN(__PVT__id_inst_i,31,0);
        VL_OUT64(__PVT__id_imm_o,63,0);
        QData/*63:0*/ __PVT__Iimm;
        QData/*63:0*/ __PVT__Simm;
        QData/*63:0*/ __PVT__Bimm;
        QData/*63:0*/ __PVT__Uimm;
        QData/*63:0*/ __PVT__Jimm;
        QData/*63:0*/ __PVT__imm;
    };

    // INTERNAL VARIABLES
    Vnpc__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vnpc_ysyx_22050598_idu_decode(Vnpc__Syms* symsp, const char* v__name);
    ~Vnpc_ysyx_22050598_idu_decode();
    VL_UNCOPYABLE(Vnpc_ysyx_22050598_idu_decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
