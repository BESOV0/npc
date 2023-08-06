// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vnpc__Syms.h"


void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceInitTop(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vnpc___024root__traceInitSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+450,"clk", false,-1);
        tracep->declBit(c+451,"rst", false,-1);
        tracep->declBus(c+452,"inst", false,-1, 31,0);
        tracep->declQuad(c+453,"pc_now", false,-1, 63,0);
        tracep->declQuad(c+455,"fdata", false,-1, 63,0);
        tracep->declBit(c+450,"npc clk", false,-1);
        tracep->declBit(c+451,"npc rst", false,-1);
        tracep->declBus(c+452,"npc inst", false,-1, 31,0);
        tracep->declQuad(c+453,"npc pc_now", false,-1, 63,0);
        tracep->declQuad(c+455,"npc fdata", false,-1, 63,0);
        tracep->declQuad(c+257,"npc ebreak_a0", false,-1, 63,0);
        tracep->declBit(c+180,"npc jump_flag", false,-1);
        tracep->declQuad(c+457,"npc j_pc", false,-1, 63,0);
        tracep->declBus(c+1,"npc id_ex_op_type", false,-1, 9,0);
        tracep->declBus(c+2,"npc id_op_a_sel", false,-1, 2,0);
        tracep->declBus(c+3,"npc id_op_b_sel", false,-1, 1,0);
        tracep->declQuad(c+4,"npc id_imm", false,-1, 63,0);
        tracep->declBus(c+459,"npc id_read_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+460,"npc id_read_rs2_idx", false,-1, 4,0);
        tracep->declBit(c+6,"npc id_ex_w_reg_en", false,-1);
        tracep->declBus(c+461,"npc id_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+7,"npc id_ex_inst_is_ebreak", false,-1);
        tracep->declBit(c+8,"npc id_ex_inst_is_ecall", false,-1);
        tracep->declBit(c+9,"npc id_ex_inst_is_jalr", false,-1);
        tracep->declBit(c+462,"npc id_ex_inst_is_jal", false,-1);
        tracep->declBit(c+463,"npc id_ex_inst_is_store", false,-1);
        tracep->declBit(c+10,"npc id_ex_inst_is_set", false,-1);
        tracep->declBit(c+11,"npc id_ex_inst_is_srax", false,-1);
        tracep->declBit(c+12,"npc id_ex_inst_5_shamt", false,-1);
        tracep->declBit(c+13,"npc id_ex_inst_is_mret", false,-1);
        tracep->declBit(c+14,"npc id_ex_inst_is_csri", false,-1);
        tracep->declBus(c+15,"npc id_ex_ls_data_bus", false,-1, 1,0);
        tracep->declBit(c+16,"npc id_ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+17,"npc id_ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+18,"npc id_ex_csr_bus", false,-1, 5,0);
        tracep->declBus(c+19,"npc id_ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+20,"npc id_ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+464,"npc id_ex_ls_req", false,-1);
        tracep->declBit(c+21,"npc id_ex_inst_is_rv64", false,-1);
        tracep->declBit(c+465,"npc id_ex_inst_is_illegal", false,-1);
        tracep->declQuad(c+466,"npc read_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+259,"npc read_rs2_data", false,-1, 63,0);
        tracep->declBit(c+564,"npc wb_rd_en", false,-1);
        tracep->declBus(c+565,"npc wb_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+566,"npc wb_data", false,-1, 63,0);
        tracep->declQuad(c+261,"npc rd_data", false,-1, 63,0);
        tracep->declQuad(c+263,"npc alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+265,"npc alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+267,"npc ex_bs_data", false,-1, 63,0);
        tracep->declQuad(c+468,"npc ex_alu_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+6,"npc ex_alu_rd_data_en", false,-1);
        tracep->declQuad(c+470,"npc ex_alu_pc_o", false,-1, 63,0);
        tracep->declBit(c+181,"npc ex_alu_pc_en_o", false,-1);
        tracep->declBit(c+22,"npc ex_load_en_o", false,-1);
        tracep->declBit(c+463,"npc ex_store_en_o", false,-1);
        tracep->declQuad(c+269,"npc ex_store_data_o", false,-1, 63,0);
        tracep->declBus(c+461,"npc ex_write_rd_idx_o", false,-1, 4,0);
        tracep->declQuad(c+271,"npc csr_rd_data", false,-1, 63,0);
        tracep->declQuad(c+273,"npc alu_rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+182,"npc load_data", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_IFU clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_IFU rst", false,-1);
        tracep->declBit(c+180,"npc u_ysyx_22050598_IFU jump_flag", false,-1);
        tracep->declQuad(c+457,"npc u_ysyx_22050598_IFU j_pc", false,-1, 63,0);
        tracep->declQuad(c+453,"npc u_ysyx_22050598_IFU pc_now", false,-1, 63,0);
        tracep->declBus(c+452,"npc u_ysyx_22050598_IFU id_inst", false,-1, 31,0);
        tracep->declQuad(c+472,"npc u_ysyx_22050598_IFU pc", false,-1, 63,0);
        tracep->declQuad(c+23,"npc u_ysyx_22050598_IFU pc_next", false,-1, 63,0);
        tracep->declQuad(c+25,"npc u_ysyx_22050598_IFU raddr", false,-1, 63,0);
        tracep->declQuad(c+27,"npc u_ysyx_22050598_IFU rdata", false,-1, 63,0);
        tracep->declBit(c+29,"npc u_ysyx_22050598_IFU sign_r", false,-1);
        tracep->declBus(c+568,"npc u_ysyx_22050598_IFU pc_dfflr_resetval DW", false,-1, 31,0);
        tracep->declQuad(c+569,"npc u_ysyx_22050598_IFU pc_dfflr_resetval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+571,"npc u_ysyx_22050598_IFU pc_dfflr_resetval lden", false,-1);
        tracep->declQuad(c+472,"npc u_ysyx_22050598_IFU pc_dfflr_resetval dnxt", false,-1, 63,0);
        tracep->declQuad(c+23,"npc u_ysyx_22050598_IFU pc_dfflr_resetval qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_IFU pc_dfflr_resetval clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_IFU pc_dfflr_resetval rst_n", false,-1);
        tracep->declQuad(c+23,"npc u_ysyx_22050598_IFU pc_dfflr_resetval qout_r", false,-1, 63,0);
        tracep->declBus(c+572,"npc u_ysyx_22050598_IFU sign_reg DW", false,-1, 31,0);
        tracep->declBus(c+573,"npc u_ysyx_22050598_IFU sign_reg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+571,"npc u_ysyx_22050598_IFU sign_reg lden", false,-1);
        tracep->declBus(c+571,"npc u_ysyx_22050598_IFU sign_reg dnxt", false,-1, 0,0);
        tracep->declBus(c+29,"npc u_ysyx_22050598_IFU sign_reg qout", false,-1, 0,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_IFU sign_reg clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_IFU sign_reg rst_n", false,-1);
        tracep->declBus(c+29,"npc u_ysyx_22050598_IFU sign_reg qout_r", false,-1, 0,0);
        tracep->declBus(c+452,"npc u_ysyx_22050598_idu_decode id_inst_i", false,-1, 31,0);
        tracep->declBus(c+1,"npc u_ysyx_22050598_idu_decode id_op_type_o", false,-1, 9,0);
        tracep->declBus(c+2,"npc u_ysyx_22050598_idu_decode id_op_a_sel_o", false,-1, 2,0);
        tracep->declBus(c+3,"npc u_ysyx_22050598_idu_decode id_op_b_sel_o", false,-1, 1,0);
        tracep->declQuad(c+4,"npc u_ysyx_22050598_idu_decode id_imm_o", false,-1, 63,0);
        tracep->declBus(c+459,"npc u_ysyx_22050598_idu_decode id_read_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+460,"npc u_ysyx_22050598_idu_decode id_read_rs2_idx_o", false,-1, 4,0);
        tracep->declBit(c+6,"npc u_ysyx_22050598_idu_decode id_w_reg_en_o", false,-1);
        tracep->declBus(c+461,"npc u_ysyx_22050598_idu_decode id_write_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+7,"npc u_ysyx_22050598_idu_decode id_inst_is_ebreak_o", false,-1);
        tracep->declBit(c+8,"npc u_ysyx_22050598_idu_decode id_inst_is_ecall_o", false,-1);
        tracep->declBit(c+9,"npc u_ysyx_22050598_idu_decode id_inst_is_jalr_o", false,-1);
        tracep->declBit(c+462,"npc u_ysyx_22050598_idu_decode id_inst_is_jal_o", false,-1);
        tracep->declBit(c+463,"npc u_ysyx_22050598_idu_decode id_inst_is_store_o", false,-1);
        tracep->declBit(c+10,"npc u_ysyx_22050598_idu_decode id_inst_is_set_o", false,-1);
        tracep->declBit(c+11,"npc u_ysyx_22050598_idu_decode id_inst_is_srax_o", false,-1);
        tracep->declBit(c+12,"npc u_ysyx_22050598_idu_decode id_inst_5_shamt_o", false,-1);
        tracep->declBit(c+13,"npc u_ysyx_22050598_idu_decode id_inst_is_mret_o", false,-1);
        tracep->declBit(c+14,"npc u_ysyx_22050598_idu_decode id_inst_is_csri_o", false,-1);
        tracep->declBus(c+15,"npc u_ysyx_22050598_idu_decode id_ls_data_bus_o", false,-1, 1,0);
        tracep->declBit(c+16,"npc u_ysyx_22050598_idu_decode id_inst_divrem_bus_o", false,-1);
        tracep->declBus(c+17,"npc u_ysyx_22050598_idu_decode id_inst_mul_bus_o", false,-1, 4,0);
        tracep->declBus(c+18,"npc u_ysyx_22050598_idu_decode id_csr_bus_o", false,-1, 5,0);
        tracep->declBus(c+19,"npc u_ysyx_22050598_idu_decode id_branch_bus_o", false,-1, 5,0);
        tracep->declBus(c+20,"npc u_ysyx_22050598_idu_decode id_unsigned_bus_o", false,-1, 1,0);
        tracep->declBit(c+464,"npc u_ysyx_22050598_idu_decode id_ls_req_o", false,-1);
        tracep->declBit(c+21,"npc u_ysyx_22050598_idu_decode id_inst_is_rv64_o", false,-1);
        tracep->declBit(c+465,"npc u_ysyx_22050598_idu_decode id_inst_is_illegal_o", false,-1);
        tracep->declBus(c+474,"npc u_ysyx_22050598_idu_decode func3", false,-1, 2,0);
        tracep->declBit(c+475,"npc u_ysyx_22050598_idu_decode func3_000", false,-1);
        tracep->declBit(c+476,"npc u_ysyx_22050598_idu_decode func3_001", false,-1);
        tracep->declBit(c+477,"npc u_ysyx_22050598_idu_decode func3_010", false,-1);
        tracep->declBit(c+478,"npc u_ysyx_22050598_idu_decode func3_011", false,-1);
        tracep->declBit(c+479,"npc u_ysyx_22050598_idu_decode func3_100", false,-1);
        tracep->declBit(c+480,"npc u_ysyx_22050598_idu_decode func3_101", false,-1);
        tracep->declBit(c+481,"npc u_ysyx_22050598_idu_decode func3_110", false,-1);
        tracep->declBit(c+482,"npc u_ysyx_22050598_idu_decode func3_111", false,-1);
        tracep->declBus(c+483,"npc u_ysyx_22050598_idu_decode func7", false,-1, 6,0);
        tracep->declBit(c+484,"npc u_ysyx_22050598_idu_decode func7_0000000", false,-1);
        tracep->declBit(c+485,"npc u_ysyx_22050598_idu_decode func7_0100000", false,-1);
        tracep->declBit(c+486,"npc u_ysyx_22050598_idu_decode func7_0000001", false,-1);
        tracep->declBit(c+487,"npc u_ysyx_22050598_idu_decode func7_0000100", false,-1);
        tracep->declBit(c+488,"npc u_ysyx_22050598_idu_decode func7_0001000", false,-1);
        tracep->declBit(c+489,"npc u_ysyx_22050598_idu_decode func7_0010000", false,-1);
        tracep->declBit(c+490,"npc u_ysyx_22050598_idu_decode func7_0011000", false,-1);
        tracep->declBus(c+459,"npc u_ysyx_22050598_idu_decode rs1_idx", false,-1, 4,0);
        tracep->declBus(c+460,"npc u_ysyx_22050598_idu_decode rs2_idx", false,-1, 4,0);
        tracep->declBus(c+461,"npc u_ysyx_22050598_idu_decode rd_idx", false,-1, 4,0);
        tracep->declBit(c+491,"npc u_ysyx_22050598_idu_decode rs1_00000", false,-1);
        tracep->declBit(c+492,"npc u_ysyx_22050598_idu_decode rs2_00000", false,-1);
        tracep->declBit(c+493,"npc u_ysyx_22050598_idu_decode rs2_00001", false,-1);
        tracep->declBit(c+494,"npc u_ysyx_22050598_idu_decode rs2_00010", false,-1);
        tracep->declBit(c+495,"npc u_ysyx_22050598_idu_decode rd_00000", false,-1);
        tracep->declBus(c+496,"npc u_ysyx_22050598_idu_decode opcode", false,-1, 6,0);
        tracep->declBit(c+497,"npc u_ysyx_22050598_idu_decode opcode_alui", false,-1);
        tracep->declBit(c+498,"npc u_ysyx_22050598_idu_decode opcode_alur", false,-1);
        tracep->declBit(c+499,"npc u_ysyx_22050598_idu_decode opcode_aluiw", false,-1);
        tracep->declBit(c+500,"npc u_ysyx_22050598_idu_decode opcode_alurw", false,-1);
        tracep->declBit(c+501,"npc u_ysyx_22050598_idu_decode opcode_auipc", false,-1);
        tracep->declBit(c+502,"npc u_ysyx_22050598_idu_decode opcode_branch", false,-1);
        tracep->declBit(c+462,"npc u_ysyx_22050598_idu_decode opcode_jal", false,-1);
        tracep->declBit(c+503,"npc u_ysyx_22050598_idu_decode opcode_jalr", false,-1);
        tracep->declBit(c+504,"npc u_ysyx_22050598_idu_decode opcode_load", false,-1);
        tracep->declBit(c+463,"npc u_ysyx_22050598_idu_decode opcode_store", false,-1);
        tracep->declBit(c+505,"npc u_ysyx_22050598_idu_decode opcode_lui", false,-1);
        tracep->declBit(c+506,"npc u_ysyx_22050598_idu_decode opcode_system", false,-1);
        tracep->declBit(c+507,"npc u_ysyx_22050598_idu_decode func6_010000", false,-1);
        tracep->declBit(c+508,"npc u_ysyx_22050598_idu_decode func6_000000", false,-1);
        tracep->declBit(c+509,"npc u_ysyx_22050598_idu_decode inst_addi", false,-1);
        tracep->declBit(c+510,"npc u_ysyx_22050598_idu_decode inst_slti", false,-1);
        tracep->declBit(c+30,"npc u_ysyx_22050598_idu_decode inst_sltiu", false,-1);
        tracep->declBit(c+511,"npc u_ysyx_22050598_idu_decode inst_xori", false,-1);
        tracep->declBit(c+512,"npc u_ysyx_22050598_idu_decode inst_ori", false,-1);
        tracep->declBit(c+513,"npc u_ysyx_22050598_idu_decode inst_andi", false,-1);
        tracep->declBit(c+514,"npc u_ysyx_22050598_idu_decode inst_slli", false,-1);
        tracep->declBit(c+515,"npc u_ysyx_22050598_idu_decode inst_srli", false,-1);
        tracep->declBit(c+31,"npc u_ysyx_22050598_idu_decode inst_srai", false,-1);
        tracep->declBit(c+516,"npc u_ysyx_22050598_idu_decode inst_addiw", false,-1);
        tracep->declBit(c+32,"npc u_ysyx_22050598_idu_decode inst_slliw", false,-1);
        tracep->declBit(c+33,"npc u_ysyx_22050598_idu_decode inst_srliw", false,-1);
        tracep->declBit(c+34,"npc u_ysyx_22050598_idu_decode inst_sraiw", false,-1);
        tracep->declBit(c+517,"npc u_ysyx_22050598_idu_decode inst_add", false,-1);
        tracep->declBit(c+518,"npc u_ysyx_22050598_idu_decode inst_sub", false,-1);
        tracep->declBit(c+519,"npc u_ysyx_22050598_idu_decode inst_sll", false,-1);
        tracep->declBit(c+520,"npc u_ysyx_22050598_idu_decode inst_slt", false,-1);
        tracep->declBit(c+35,"npc u_ysyx_22050598_idu_decode inst_sltu", false,-1);
        tracep->declBit(c+521,"npc u_ysyx_22050598_idu_decode inst_xor", false,-1);
        tracep->declBit(c+522,"npc u_ysyx_22050598_idu_decode inst_srl", false,-1);
        tracep->declBit(c+36,"npc u_ysyx_22050598_idu_decode inst_sra", false,-1);
        tracep->declBit(c+523,"npc u_ysyx_22050598_idu_decode inst_or", false,-1);
        tracep->declBit(c+524,"npc u_ysyx_22050598_idu_decode inst_and", false,-1);
        tracep->declBit(c+37,"npc u_ysyx_22050598_idu_decode inst_div", false,-1);
        tracep->declBit(c+525,"npc u_ysyx_22050598_idu_decode inst_divu", false,-1);
        tracep->declBit(c+38,"npc u_ysyx_22050598_idu_decode inst_mul", false,-1);
        tracep->declBit(c+39,"npc u_ysyx_22050598_idu_decode inst_mulh", false,-1);
        tracep->declBit(c+40,"npc u_ysyx_22050598_idu_decode inst_mulhsu", false,-1);
        tracep->declBit(c+41,"npc u_ysyx_22050598_idu_decode inst_mulhu", false,-1);
        tracep->declBit(c+42,"npc u_ysyx_22050598_idu_decode inst_rem", false,-1);
        tracep->declBit(c+526,"npc u_ysyx_22050598_idu_decode inst_remu", false,-1);
        tracep->declBit(c+527,"npc u_ysyx_22050598_idu_decode inst_addw", false,-1);
        tracep->declBit(c+528,"npc u_ysyx_22050598_idu_decode inst_subw", false,-1);
        tracep->declBit(c+43,"npc u_ysyx_22050598_idu_decode inst_sllw", false,-1);
        tracep->declBit(c+44,"npc u_ysyx_22050598_idu_decode inst_srlw", false,-1);
        tracep->declBit(c+45,"npc u_ysyx_22050598_idu_decode inst_sraw", false,-1);
        tracep->declBit(c+46,"npc u_ysyx_22050598_idu_decode inst_mulw", false,-1);
        tracep->declBit(c+47,"npc u_ysyx_22050598_idu_decode inst_divw", false,-1);
        tracep->declBit(c+529,"npc u_ysyx_22050598_idu_decode inst_divuw", false,-1);
        tracep->declBit(c+48,"npc u_ysyx_22050598_idu_decode inst_remw", false,-1);
        tracep->declBit(c+530,"npc u_ysyx_22050598_idu_decode inst_remuw", false,-1);
        tracep->declBit(c+531,"npc u_ysyx_22050598_idu_decode inst_beq", false,-1);
        tracep->declBit(c+532,"npc u_ysyx_22050598_idu_decode inst_bne", false,-1);
        tracep->declBit(c+533,"npc u_ysyx_22050598_idu_decode inst_blt", false,-1);
        tracep->declBit(c+534,"npc u_ysyx_22050598_idu_decode inst_bge", false,-1);
        tracep->declBit(c+49,"npc u_ysyx_22050598_idu_decode inst_bltu", false,-1);
        tracep->declBit(c+50,"npc u_ysyx_22050598_idu_decode inst_bgeu", false,-1);
        tracep->declBit(c+462,"npc u_ysyx_22050598_idu_decode inst_jal", false,-1);
        tracep->declBit(c+9,"npc u_ysyx_22050598_idu_decode inst_jalr", false,-1);
        tracep->declBit(c+505,"npc u_ysyx_22050598_idu_decode inst_lui", false,-1);
        tracep->declBit(c+501,"npc u_ysyx_22050598_idu_decode inst_auipc", false,-1);
        tracep->declBit(c+535,"npc u_ysyx_22050598_idu_decode inst_lb", false,-1);
        tracep->declBit(c+536,"npc u_ysyx_22050598_idu_decode inst_lbu", false,-1);
        tracep->declBit(c+537,"npc u_ysyx_22050598_idu_decode inst_ld", false,-1);
        tracep->declBit(c+538,"npc u_ysyx_22050598_idu_decode inst_lh", false,-1);
        tracep->declBit(c+51,"npc u_ysyx_22050598_idu_decode inst_lhu", false,-1);
        tracep->declBit(c+539,"npc u_ysyx_22050598_idu_decode inst_lw", false,-1);
        tracep->declBit(c+52,"npc u_ysyx_22050598_idu_decode inst_lwu", false,-1);
        tracep->declBit(c+540,"npc u_ysyx_22050598_idu_decode inst_sb", false,-1);
        tracep->declBit(c+541,"npc u_ysyx_22050598_idu_decode inst_sh", false,-1);
        tracep->declBit(c+542,"npc u_ysyx_22050598_idu_decode inst_sw", false,-1);
        tracep->declBit(c+543,"npc u_ysyx_22050598_idu_decode inst_sd", false,-1);
        tracep->declBit(c+7,"npc u_ysyx_22050598_idu_decode inst_ebreak", false,-1);
        tracep->declBit(c+8,"npc u_ysyx_22050598_idu_decode inst_ecall", false,-1);
        tracep->declBit(c+13,"npc u_ysyx_22050598_idu_decode inst_mret", false,-1);
        tracep->declBit(c+53,"npc u_ysyx_22050598_idu_decode inst_csrrw", false,-1);
        tracep->declBit(c+54,"npc u_ysyx_22050598_idu_decode inst_csrrs", false,-1);
        tracep->declBit(c+55,"npc u_ysyx_22050598_idu_decode inst_csrrc", false,-1);
        tracep->declBit(c+56,"npc u_ysyx_22050598_idu_decode inst_csrrwi", false,-1);
        tracep->declBit(c+57,"npc u_ysyx_22050598_idu_decode inst_csrrsi", false,-1);
        tracep->declBit(c+58,"npc u_ysyx_22050598_idu_decode inst_csrrci", false,-1);
        tracep->declBit(c+59,"npc u_ysyx_22050598_idu_decode csr_need_rs1", false,-1);
        tracep->declBit(c+14,"npc u_ysyx_22050598_idu_decode inst_is_csri", false,-1);
        tracep->declBit(c+60,"npc u_ysyx_22050598_idu_decode inst_is_csr", false,-1);
        tracep->declBus(c+1,"npc u_ysyx_22050598_idu_decode inst_opcode", false,-1, 9,0);
        tracep->declBit(c+10,"npc u_ysyx_22050598_idu_decode inst_set_en", false,-1);
        tracep->declBit(c+61,"npc u_ysyx_22050598_idu_decode cmp_unsigned", false,-1);
        tracep->declBit(c+544,"npc u_ysyx_22050598_idu_decode load_unsigned", false,-1);
        tracep->declBus(c+62,"npc u_ysyx_22050598_idu_decode inst_type", false,-1, 5,0);
        tracep->declQuad(c+545,"npc u_ysyx_22050598_idu_decode Iimm", false,-1, 63,0);
        tracep->declQuad(c+547,"npc u_ysyx_22050598_idu_decode Simm", false,-1, 63,0);
        tracep->declQuad(c+549,"npc u_ysyx_22050598_idu_decode Bimm", false,-1, 63,0);
        tracep->declQuad(c+551,"npc u_ysyx_22050598_idu_decode Uimm", false,-1, 63,0);
        tracep->declQuad(c+553,"npc u_ysyx_22050598_idu_decode Jimm", false,-1, 63,0);
        tracep->declQuad(c+4,"npc u_ysyx_22050598_idu_decode imm", false,-1, 63,0);
        tracep->declBus(c+2,"npc u_ysyx_22050598_idu_decode alu_operand_sel_a", false,-1, 2,0);
        tracep->declBus(c+3,"npc u_ysyx_22050598_idu_decode alu_operand_sel_b", false,-1, 1,0);
        tracep->declBus(c+15,"npc u_ysyx_22050598_idu_decode ls_type", false,-1, 1,0);
        tracep->declBit(c+21,"npc u_ysyx_22050598_idu_decode rv64_inst", false,-1);
        tracep->declBit(c+555,"npc u_ysyx_22050598_idu_decode sxxiw_shamt_legl", false,-1);
        tracep->declBit(c+465,"npc u_ysyx_22050598_idu_decode sxxiw_shamt_ilgl", false,-1);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile rst", false,-1);
        tracep->declBus(c+459,"npc u_ysyx_22050598_regfile read_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+460,"npc u_ysyx_22050598_regfile read_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+466,"npc u_ysyx_22050598_regfile read_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+259,"npc u_ysyx_22050598_regfile read_rs2_data", false,-1, 63,0);
        tracep->declBit(c+6,"npc u_ysyx_22050598_regfile write_en", false,-1);
        tracep->declBus(c+461,"npc u_ysyx_22050598_regfile write_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile write_rd_data", false,-1, 63,0);
        tracep->declQuad(c+257,"npc u_ysyx_22050598_regfile ebreak_a0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+275+i*2,"npc u_ysyx_22050598_regfile rf_r", true,(i+0), 63,0);}}
        tracep->declBus(c+63,"npc u_ysyx_22050598_regfile rf_wen", false,-1, 31,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+64,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+65,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+65,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+67,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+68,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+68,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+70,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+71,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+71,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+73,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+74,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+74,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+76,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+77,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+77,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+79,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+80,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+80,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+82,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+83,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+83,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+85,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+86,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+86,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+88,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+91,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+92,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+92,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+94,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+95,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+95,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+97,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+98,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+98,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+100,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+101,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+101,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+103,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+104,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+104,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+106,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+107,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+107,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+109,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+110,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+110,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+112,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+113,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+113,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+115,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+116,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+116,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+118,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+119,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+119,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+121,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+122,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+122,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+124,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+125,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+125,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+127,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+128,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+128,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+130,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+131,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+131,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+133,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+134,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+134,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+136,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+137,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+137,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+139,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+140,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+140,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+142,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+143,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+143,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+145,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+146,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+146,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+148,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+149,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+149,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+151,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+152,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+152,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+154,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+261,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+155,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+155,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+459,"npc ysyx_22050598_idu_forward id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+460,"npc ysyx_22050598_idu_forward id_rs2_idx", false,-1, 4,0);
        tracep->declBus(c+2,"npc ysyx_22050598_idu_forward alu_op_a_sel", false,-1, 2,0);
        tracep->declBus(c+3,"npc ysyx_22050598_idu_forward alu_op_b_sel", false,-1, 1,0);
        tracep->declBus(c+461,"npc ysyx_22050598_idu_forward id_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+466,"npc ysyx_22050598_idu_forward rs1_data", false,-1, 63,0);
        tracep->declQuad(c+259,"npc ysyx_22050598_idu_forward rs2_data", false,-1, 63,0);
        tracep->declQuad(c+4,"npc ysyx_22050598_idu_forward id_imm", false,-1, 63,0);
        tracep->declQuad(c+453,"npc ysyx_22050598_idu_forward pc_data", false,-1, 63,0);
        tracep->declBus(c+19,"npc ysyx_22050598_idu_forward id_branch_bus", false,-1, 5,0);
        tracep->declBit(c+14,"npc ysyx_22050598_idu_forward id_inst_is_csri", false,-1);
        tracep->declBit(c+463,"npc ysyx_22050598_idu_forward id_inst_is_store", false,-1);
        tracep->declBus(c+574,"npc ysyx_22050598_idu_forward ex_rd_idx", false,-1, 4,0);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward ex_rd_en", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward ex_load_en", false,-1);
        tracep->declQuad(c+576,"npc ysyx_22050598_idu_forward ex_alu_data", false,-1, 63,0);
        tracep->declBus(c+574,"npc ysyx_22050598_idu_forward mem_rd_idx", false,-1, 4,0);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward mem_rd_en", false,-1);
        tracep->declQuad(c+576,"npc ysyx_22050598_idu_forward mem_data", false,-1, 63,0);
        tracep->declBus(c+574,"npc ysyx_22050598_idu_forward wb_rd_idx", false,-1, 4,0);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward wb_rd_en", false,-1);
        tracep->declQuad(c+576,"npc ysyx_22050598_idu_forward wb_data", false,-1, 63,0);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward load_stall_signal", false,-1);
        tracep->declQuad(c+263,"npc ysyx_22050598_idu_forward alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+265,"npc ysyx_22050598_idu_forward alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+267,"npc ysyx_22050598_idu_forward ex_bs_data", false,-1, 63,0);
        tracep->declBus(c+556,"npc ysyx_22050598_idu_forward id_rs1_idx_vaild", false,-1, 4,0);
        tracep->declBus(c+557,"npc ysyx_22050598_idu_forward id_rs2_idx_vaild", false,-1, 4,0);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward ex_rd_idx_not_zero", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward mem_rd_idx_not_zero", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward wb_rd_idx_not_zero", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward ex_forward_rs1", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward mem_forward_rs1", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward wb_forward_rs1", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward ex_forward_rs2", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward mem_forward_rs2", false,-1);
        tracep->declBit(c+575,"npc ysyx_22050598_idu_forward wb_forward_rs2", false,-1);
        tracep->declQuad(c+466,"npc ysyx_22050598_idu_forward forward_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+259,"npc ysyx_22050598_idu_forward forward_rs2_data", false,-1, 63,0);
        tracep->declBus(c+1,"npc u_ysyx_22050598_exu_alu ex_alu_op_type", false,-1, 9,0);
        tracep->declQuad(c+263,"npc u_ysyx_22050598_exu_alu ex_alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+265,"npc u_ysyx_22050598_exu_alu ex_alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+453,"npc u_ysyx_22050598_exu_alu ex_pc", false,-1, 63,0);
        tracep->declQuad(c+267,"npc u_ysyx_22050598_exu_alu ex_bs_data", false,-1, 63,0);
        tracep->declBus(c+461,"npc u_ysyx_22050598_exu_alu ex_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+6,"npc u_ysyx_22050598_exu_alu ex_write_reg_en", false,-1);
        tracep->declBit(c+9,"npc u_ysyx_22050598_exu_alu ex_inst_is_jalr", false,-1);
        tracep->declBit(c+462,"npc u_ysyx_22050598_exu_alu ex_inst_is_jal", false,-1);
        tracep->declBit(c+463,"npc u_ysyx_22050598_exu_alu ex_inst_is_store", false,-1);
        tracep->declBit(c+10,"npc u_ysyx_22050598_exu_alu ex_inst_is_set", false,-1);
        tracep->declBit(c+11,"npc u_ysyx_22050598_exu_alu ex_inst_is_srax", false,-1);
        tracep->declBit(c+12,"npc u_ysyx_22050598_exu_alu ex_inst_5_shamt", false,-1);
        tracep->declBit(c+16,"npc u_ysyx_22050598_exu_alu ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+17,"npc u_ysyx_22050598_exu_alu ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+19,"npc u_ysyx_22050598_exu_alu ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+20,"npc u_ysyx_22050598_exu_alu ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+464,"npc u_ysyx_22050598_exu_alu ex_ls_req", false,-1);
        tracep->declBit(c+21,"npc u_ysyx_22050598_exu_alu ex_inst_is_rv64", false,-1);
        tracep->declQuad(c+468,"npc u_ysyx_22050598_exu_alu ex_alu_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+6,"npc u_ysyx_22050598_exu_alu ex_alu_rd_data_en", false,-1);
        tracep->declQuad(c+470,"npc u_ysyx_22050598_exu_alu ex_alu_pc_o", false,-1, 63,0);
        tracep->declBit(c+181,"npc u_ysyx_22050598_exu_alu ex_alu_pc_en_o", false,-1);
        tracep->declBit(c+22,"npc u_ysyx_22050598_exu_alu ex_load_en_o", false,-1);
        tracep->declBit(c+463,"npc u_ysyx_22050598_exu_alu ex_store_en_o", false,-1);
        tracep->declQuad(c+269,"npc u_ysyx_22050598_exu_alu ex_store_data_o", false,-1, 63,0);
        tracep->declBus(c+461,"npc u_ysyx_22050598_exu_alu ex_write_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+157,"npc u_ysyx_22050598_exu_alu add_or_sub", false,-1);
        tracep->declBit(c+158,"npc u_ysyx_22050598_exu_alu add_sub_cin", false,-1);
        tracep->declArray(c+184,"npc u_ysyx_22050598_exu_alu adder_op1", false,-1, 64,0);
        tracep->declArray(c+187,"npc u_ysyx_22050598_exu_alu adder_op2", false,-1, 64,0);
        tracep->declArray(c+190,"npc u_ysyx_22050598_exu_alu add_sub_op_a", false,-1, 64,0);
        tracep->declArray(c+339,"npc u_ysyx_22050598_exu_alu add_sub_op_b", false,-1, 64,0);
        tracep->declArray(c+190,"npc u_ysyx_22050598_exu_alu add_sub_in_a", false,-1, 64,0);
        tracep->declArray(c+193,"npc u_ysyx_22050598_exu_alu add_sub_in_b", false,-1, 64,0);
        tracep->declArray(c+342,"npc u_ysyx_22050598_exu_alu sum_sub_data", false,-1, 64,0);
        tracep->declQuad(c+345,"npc u_ysyx_22050598_exu_alu sum_sub_w_result", false,-1, 63,0);
        tracep->declQuad(c+347,"npc u_ysyx_22050598_exu_alu sum_sub_result", false,-1, 63,0);
        tracep->declBus(c+349,"npc u_ysyx_22050598_exu_alu inst_rv64_a_op", false,-1, 31,0);
        tracep->declBus(c+350,"npc u_ysyx_22050598_exu_alu inst_rv64_b_op", false,-1, 31,0);
        tracep->declQuad(c+351,"npc u_ysyx_22050598_exu_alu inst_rv32_a_op", false,-1, 63,0);
        tracep->declQuad(c+353,"npc u_ysyx_22050598_exu_alu inst_rv32_b_op", false,-1, 63,0);
        tracep->declQuad(c+355,"npc u_ysyx_22050598_exu_alu mul_op_a", false,-1, 63,0);
        tracep->declQuad(c+357,"npc u_ysyx_22050598_exu_alu mul_op_b", false,-1, 63,0);
        tracep->declArray(c+359,"npc u_ysyx_22050598_exu_alu mulu_res", false,-1, 127,0);
        tracep->declArray(c+363,"npc u_ysyx_22050598_exu_alu muls_res", false,-1, 127,0);
        tracep->declArray(c+367,"npc u_ysyx_22050598_exu_alu mulsu_res", false,-1, 127,0);
        tracep->declBus(c+196,"npc u_ysyx_22050598_exu_alu mulw_op_a", false,-1, 31,0);
        tracep->declBus(c+197,"npc u_ysyx_22050598_exu_alu mulw_op_b", false,-1, 31,0);
        tracep->declQuad(c+371,"npc u_ysyx_22050598_exu_alu temp_mulw_res", false,-1, 63,0);
        tracep->declQuad(c+373,"npc u_ysyx_22050598_exu_alu mulw_res", false,-1, 63,0);
        tracep->declQuad(c+198,"npc u_ysyx_22050598_exu_alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+375,"npc u_ysyx_22050598_exu_alu div_op_a", false,-1, 63,0);
        tracep->declQuad(c+377,"npc u_ysyx_22050598_exu_alu div_op_b", false,-1, 63,0);
        tracep->declQuad(c+379,"npc u_ysyx_22050598_exu_alu divu_res", false,-1, 63,0);
        tracep->declQuad(c+381,"npc u_ysyx_22050598_exu_alu div_res", false,-1, 63,0);
        tracep->declBus(c+383,"npc u_ysyx_22050598_exu_alu divw_op_a", false,-1, 31,0);
        tracep->declBus(c+384,"npc u_ysyx_22050598_exu_alu divw_op_b", false,-1, 31,0);
        tracep->declBus(c+385,"npc u_ysyx_22050598_exu_alu temp_divwu_res", false,-1, 31,0);
        tracep->declBus(c+386,"npc u_ysyx_22050598_exu_alu temp_divw_res", false,-1, 31,0);
        tracep->declQuad(c+387,"npc u_ysyx_22050598_exu_alu divwu_res", false,-1, 63,0);
        tracep->declQuad(c+389,"npc u_ysyx_22050598_exu_alu divw_res", false,-1, 63,0);
        tracep->declQuad(c+200,"npc u_ysyx_22050598_exu_alu div_result", false,-1, 63,0);
        tracep->declQuad(c+391,"npc u_ysyx_22050598_exu_alu mod_op_a", false,-1, 63,0);
        tracep->declQuad(c+393,"npc u_ysyx_22050598_exu_alu mod_op_b", false,-1, 63,0);
        tracep->declQuad(c+395,"npc u_ysyx_22050598_exu_alu remu_mod", false,-1, 63,0);
        tracep->declQuad(c+397,"npc u_ysyx_22050598_exu_alu rem_mod", false,-1, 63,0);
        tracep->declBus(c+399,"npc u_ysyx_22050598_exu_alu modw_op_a", false,-1, 31,0);
        tracep->declBus(c+400,"npc u_ysyx_22050598_exu_alu modw_op_b", false,-1, 31,0);
        tracep->declBus(c+401,"npc u_ysyx_22050598_exu_alu temp_remwu_mod", false,-1, 31,0);
        tracep->declBus(c+402,"npc u_ysyx_22050598_exu_alu temp_remw_mod", false,-1, 31,0);
        tracep->declQuad(c+403,"npc u_ysyx_22050598_exu_alu remwu_mod", false,-1, 63,0);
        tracep->declQuad(c+405,"npc u_ysyx_22050598_exu_alu remw_mod", false,-1, 63,0);
        tracep->declQuad(c+202,"npc u_ysyx_22050598_exu_alu mod_result", false,-1, 63,0);
        tracep->declBit(c+159,"npc u_ysyx_22050598_exu_alu alu_op_is_shift", false,-1);
        tracep->declQuad(c+407,"npc u_ysyx_22050598_exu_alu temp_shift_op_a", false,-1, 63,0);
        tracep->declBus(c+204,"npc u_ysyx_22050598_exu_alu temp_shift_op_b_6", false,-1, 5,0);
        tracep->declBus(c+205,"npc u_ysyx_22050598_exu_alu temp_shift_op_b_5", false,-1, 4,0);
        tracep->declQuad(c+409,"npc u_ysyx_22050598_exu_alu temp_shift_op_a_64", false,-1, 63,0);
        tracep->declBus(c+411,"npc u_ysyx_22050598_exu_alu temp_shift_op_a_32", false,-1, 31,0);
        tracep->declArray(c+206,"npc u_ysyx_22050598_exu_alu shift_op_a_32", false,-1, 64,0);
        tracep->declArray(c+209,"npc u_ysyx_22050598_exu_alu shift_op_a_64", false,-1, 64,0);
        tracep->declArray(c+212,"npc u_ysyx_22050598_exu_alu shift_op_a", false,-1, 64,0);
        tracep->declBus(c+215,"npc u_ysyx_22050598_exu_alu shift_op_b", false,-1, 5,0);
        tracep->declArray(c+412,"npc u_ysyx_22050598_exu_alu temp_shift_result", false,-1, 64,0);
        tracep->declBus(c+415,"npc u_ysyx_22050598_exu_alu shift_result_32_rev", false,-1, 31,0);
        tracep->declQuad(c+416,"npc u_ysyx_22050598_exu_alu shift_result_64_rev", false,-1, 63,0);
        tracep->declQuad(c+216,"npc u_ysyx_22050598_exu_alu shift_result", false,-1, 63,0);
        tracep->declQuad(c+218,"npc u_ysyx_22050598_exu_alu or_op_a", false,-1, 63,0);
        tracep->declQuad(c+220,"npc u_ysyx_22050598_exu_alu or_op_b", false,-1, 63,0);
        tracep->declQuad(c+222,"npc u_ysyx_22050598_exu_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+224,"npc u_ysyx_22050598_exu_alu and_op_a", false,-1, 63,0);
        tracep->declQuad(c+226,"npc u_ysyx_22050598_exu_alu and_op_b", false,-1, 63,0);
        tracep->declQuad(c+228,"npc u_ysyx_22050598_exu_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+230,"npc u_ysyx_22050598_exu_alu xor_op_a", false,-1, 63,0);
        tracep->declQuad(c+232,"npc u_ysyx_22050598_exu_alu xor_op_b", false,-1, 63,0);
        tracep->declQuad(c+234,"npc u_ysyx_22050598_exu_alu xor_result", false,-1, 63,0);
        tracep->declBit(c+160,"npc u_ysyx_22050598_exu_alu ex_inst_brach_en", false,-1);
        tracep->declBit(c+418,"npc u_ysyx_22050598_exu_alu branch_cmp", false,-1);
        tracep->declBit(c+419,"npc u_ysyx_22050598_exu_alu branch_cmp_zero", false,-1);
        tracep->declBit(c+236,"npc u_ysyx_22050598_exu_alu inst_beq_en", false,-1);
        tracep->declBit(c+237,"npc u_ysyx_22050598_exu_alu inst_bne_en", false,-1);
        tracep->declBit(c+238,"npc u_ysyx_22050598_exu_alu inst_blt_en", false,-1);
        tracep->declBit(c+239,"npc u_ysyx_22050598_exu_alu inst_bge_en", false,-1);
        tracep->declBit(c+240,"npc u_ysyx_22050598_exu_alu inst_bltu_en", false,-1);
        tracep->declBit(c+241,"npc u_ysyx_22050598_exu_alu inst_bgeu_en", false,-1);
        tracep->declBit(c+242,"npc u_ysyx_22050598_exu_alu branch_en", false,-1);
        tracep->declBit(c+161,"npc u_ysyx_22050598_exu_alu ex_inst_jump_en", false,-1);
        tracep->declQuad(c+558,"npc u_ysyx_22050598_exu_alu pc_op_a", false,-1, 63,0);
        tracep->declQuad(c+243,"npc u_ysyx_22050598_exu_alu pc_op_b", false,-1, 63,0);
        tracep->declQuad(c+420,"npc u_ysyx_22050598_exu_alu jump_brach_pc", false,-1, 63,0);
        tracep->declQuad(c+560,"npc u_ysyx_22050598_exu_alu ex_jump_pc_res", false,-1, 63,0);
        tracep->declQuad(c+422,"npc u_ysyx_22050598_exu_alu ex_temp_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_csr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_csr rst", false,-1);
        tracep->declBus(c+18,"npc u_ysyx_22050598_csr ex_csr_bus_i", false,-1, 5,0);
        tracep->declQuad(c+265,"npc u_ysyx_22050598_csr csr_imm_i", false,-1, 63,0);
        tracep->declQuad(c+263,"npc u_ysyx_22050598_csr csr_reg_i", false,-1, 63,0);
        tracep->declQuad(c+267,"npc u_ysyx_22050598_csr csr_zimm_i", false,-1, 63,0);
        tracep->declQuad(c+453,"npc u_ysyx_22050598_csr csr_ecall_pc", false,-1, 63,0);
        tracep->declBit(c+13,"npc u_ysyx_22050598_csr ex_inst_is_mret_i", false,-1);
        tracep->declBit(c+8,"npc u_ysyx_22050598_csr ex_inst_is_ecall_i", false,-1);
        tracep->declQuad(c+271,"npc u_ysyx_22050598_csr csr_rd_pc_data", false,-1, 63,0);
        tracep->declQuad(c+424,"npc u_ysyx_22050598_csr csr_mstatus_data", false,-1, 63,0);
        tracep->declQuad(c+426,"npc u_ysyx_22050598_csr csr_mtvec_data", false,-1, 63,0);
        tracep->declQuad(c+562,"npc u_ysyx_22050598_csr csr_mepc_data", false,-1, 63,0);
        tracep->declQuad(c+245,"npc u_ysyx_22050598_csr csr_mcause_data", false,-1, 63,0);
        tracep->declQuad(c+162,"npc u_ysyx_22050598_csr csr_mstatus_data_r", false,-1, 63,0);
        tracep->declQuad(c+164,"npc u_ysyx_22050598_csr csr_mtvec_data_r", false,-1, 63,0);
        tracep->declQuad(c+166,"npc u_ysyx_22050598_csr csr_mepc_data_r", false,-1, 63,0);
        tracep->declQuad(c+168,"npc u_ysyx_22050598_csr csr_mcause_data_r", false,-1, 63,0);
        tracep->declBit(c+428,"npc u_ysyx_22050598_csr mstatus_r_ena", false,-1);
        tracep->declBit(c+429,"npc u_ysyx_22050598_csr mtvec_r_ena", false,-1);
        tracep->declBit(c+247,"npc u_ysyx_22050598_csr mepc_r_ena", false,-1);
        tracep->declBit(c+248,"npc u_ysyx_22050598_csr mcause_r_ena", false,-1);
        tracep->declBit(c+170,"npc u_ysyx_22050598_csr csr_ena", false,-1);
        tracep->declQuad(c+430,"npc u_ysyx_22050598_csr read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+432,"npc u_ysyx_22050598_csr write_csr_data", false,-1, 63,0);
        tracep->declBit(c+434,"npc u_ysyx_22050598_csr csr_imm_is_0x300", false,-1);
        tracep->declBit(c+435,"npc u_ysyx_22050598_csr csr_imm_is_0x305", false,-1);
        tracep->declBit(c+436,"npc u_ysyx_22050598_csr csr_imm_is_0x341", false,-1);
        tracep->declBit(c+437,"npc u_ysyx_22050598_csr csr_imm_is_0x342", false,-1);
        tracep->declBit(c+428,"npc u_ysyx_22050598_csr csr_mstatus_ena", false,-1);
        tracep->declBit(c+429,"npc u_ysyx_22050598_csr csr_mtvec_ena", false,-1);
        tracep->declBit(c+438,"npc u_ysyx_22050598_csr csr_mepc_ena", false,-1);
        tracep->declBit(c+439,"npc u_ysyx_22050598_csr csr_mcause_ena", false,-1);
        tracep->declBit(c+171,"npc u_ysyx_22050598_csr write_csr_or", false,-1);
        tracep->declQuad(c+440,"npc u_ysyx_22050598_csr write_csr_or_data1", false,-1, 63,0);
        tracep->declQuad(c+442,"npc u_ysyx_22050598_csr write_csr_or_data2", false,-1, 63,0);
        tracep->declQuad(c+444,"npc u_ysyx_22050598_csr write_csr_or_data", false,-1, 63,0);
        tracep->declBit(c+172,"npc u_ysyx_22050598_csr write_csr_self", false,-1);
        tracep->declQuad(c+249,"npc u_ysyx_22050598_csr write_csr_self_data", false,-1, 63,0);
        tracep->declBit(c+173,"npc u_ysyx_22050598_csr write_csr_and", false,-1);
        tracep->declQuad(c+251,"npc u_ysyx_22050598_csr write_csr_and_data1", false,-1, 63,0);
        tracep->declQuad(c+253,"npc u_ysyx_22050598_csr write_csr_and_data2", false,-1, 63,0);
        tracep->declQuad(c+446,"npc u_ysyx_22050598_csr write_csr_and_data", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_csr mstatus_dfflr DW", false,-1, 31,0);
        tracep->declQuad(c+578,"npc u_ysyx_22050598_csr mstatus_dfflr RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+428,"npc u_ysyx_22050598_csr mstatus_dfflr lden", false,-1);
        tracep->declQuad(c+424,"npc u_ysyx_22050598_csr mstatus_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+162,"npc u_ysyx_22050598_csr mstatus_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_csr mstatus_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_csr mstatus_dfflr rst_n", false,-1);
        tracep->declQuad(c+162,"npc u_ysyx_22050598_csr mstatus_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_csr mtvec_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+429,"npc u_ysyx_22050598_csr mtvec_dfflr lden", false,-1);
        tracep->declQuad(c+426,"npc u_ysyx_22050598_csr mtvec_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+164,"npc u_ysyx_22050598_csr mtvec_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_csr mtvec_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_csr mtvec_dfflr rst_n", false,-1);
        tracep->declQuad(c+164,"npc u_ysyx_22050598_csr mtvec_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_csr mepc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+247,"npc u_ysyx_22050598_csr mepc_dfflr lden", false,-1);
        tracep->declQuad(c+562,"npc u_ysyx_22050598_csr mepc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+166,"npc u_ysyx_22050598_csr mepc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_csr mepc_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_csr mepc_dfflr rst_n", false,-1);
        tracep->declQuad(c+166,"npc u_ysyx_22050598_csr mepc_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+568,"npc u_ysyx_22050598_csr mcause_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+248,"npc u_ysyx_22050598_csr mcause_dfflr lden", false,-1);
        tracep->declQuad(c+245,"npc u_ysyx_22050598_csr mcause_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+168,"npc u_ysyx_22050598_csr mcause_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+450,"npc u_ysyx_22050598_csr mcause_dfflr clk", false,-1);
        tracep->declBit(c+451,"npc u_ysyx_22050598_csr mcause_dfflr rst_n", false,-1);
        tracep->declQuad(c+168,"npc u_ysyx_22050598_csr mcause_dfflr qout_r", false,-1, 63,0);
        tracep->declQuad(c+271,"npc u_ysyx_22050598_exu_rd_mux csr_rd_data", false,-1, 63,0);
        tracep->declQuad(c+468,"npc u_ysyx_22050598_exu_rd_mux alu_rd_data", false,-1, 63,0);
        tracep->declBit(c+170,"npc u_ysyx_22050598_exu_rd_mux csr_ena", false,-1);
        tracep->declQuad(c+273,"npc u_ysyx_22050598_exu_rd_mux alu_rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+269,"npc u_ysyx_22050598_lsu store_data", false,-1, 63,0);
        tracep->declQuad(c+273,"npc u_ysyx_22050598_lsu ls_loc", false,-1, 63,0);
        tracep->declBit(c+22,"npc u_ysyx_22050598_lsu load_en", false,-1);
        tracep->declBit(c+463,"npc u_ysyx_22050598_lsu store_en", false,-1);
        tracep->declBus(c+15,"npc u_ysyx_22050598_lsu ls_type", false,-1, 1,0);
        tracep->declBit(c+174,"npc u_ysyx_22050598_lsu load_unsigned", false,-1);
        tracep->declQuad(c+182,"npc u_ysyx_22050598_lsu load_data", false,-1, 63,0);
        tracep->declQuad(c+273,"npc u_ysyx_22050598_lsu raddr", false,-1, 63,0);
        tracep->declQuad(c+448,"npc u_ysyx_22050598_lsu rdata", false,-1, 63,0);
        tracep->declQuad(c+273,"npc u_ysyx_22050598_lsu waddr", false,-1, 63,0);
        tracep->declQuad(c+255,"npc u_ysyx_22050598_lsu wdata", false,-1, 63,0);
        tracep->declBus(c+175,"npc u_ysyx_22050598_lsu rlen", false,-1, 7,0);
        tracep->declBus(c+175,"npc u_ysyx_22050598_lsu wlen", false,-1, 7,0);
        tracep->declBit(c+176,"npc u_ysyx_22050598_lsu size_b", false,-1);
        tracep->declBit(c+177,"npc u_ysyx_22050598_lsu size_hw", false,-1);
        tracep->declBit(c+178,"npc u_ysyx_22050598_lsu size_w", false,-1);
        tracep->declBit(c+179,"npc u_ysyx_22050598_lsu size_dw", false,-1);
        tracep->declBit(c+7,"npc u_ysyx_22050598_EBREAK ebreak_flag", false,-1);
        tracep->declQuad(c+257,"npc u_ysyx_22050598_EBREAK ebreak_a0", false,-1, 63,0);
    }
}

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vnpc___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vnpc___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vnpc___024root__traceRegister(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vnpc___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vnpc___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vnpc___024root__traceCleanup, vlSelf);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vnpc___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vnpc___024root* const __restrict vlSelf = static_cast<Vnpc___024root*>(voidSelf);
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vnpc___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vnpc___024root__traceFullSub0(Vnpc___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vnpc__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp30;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<4>/*127:0*/ __Vtemp40;
    VlWide<4>/*127:0*/ __Vtemp41;
    VlWide<4>/*127:0*/ __Vtemp42;
    VlWide<4>/*127:0*/ __Vtemp43;
    VlWide<4>/*127:0*/ __Vtemp44;
    VlWide<4>/*127:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<4>/*127:0*/ __Vtemp51;
    VlWide<4>/*127:0*/ __Vtemp52;
    VlWide<4>/*127:0*/ __Vtemp53;
    VlWide<4>/*127:0*/ __Vtemp54;
    VlWide<4>/*127:0*/ __Vtemp55;
    VlWide<4>/*127:0*/ __Vtemp56;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullSData(oldp+1,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode),10);
        tracep->fullCData(oldp+2,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a),3);
        tracep->fullCData(oldp+3,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b),2);
        tracep->fullQData(oldp+4,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm),64);
        tracep->fullBit(oldp+6,(vlSelf->npc__DOT__id_ex_w_reg_en));
        tracep->fullBit(oldp+7,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ebreak));
        tracep->fullBit(oldp+8,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall));
        tracep->fullBit(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr));
        tracep->fullBit(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en));
        tracep->fullBit(oldp+11,(vlSelf->npc__DOT__id_ex_inst_is_srax));
        tracep->fullBit(oldp+12,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))));
        tracep->fullBit(oldp+13,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret));
        tracep->fullBit(oldp+14,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri));
        tracep->fullCData(oldp+15,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type),2);
        tracep->fullBit(oldp+16,(vlSelf->npc__DOT__id_ex_inst_divrem_bus));
        tracep->fullCData(oldp+17,(vlSelf->npc__DOT__id_ex_inst_mul_bus),5);
        tracep->fullCData(oldp+18,(vlSelf->npc__DOT__id_ex_csr_bus),6);
        tracep->fullCData(oldp+19,(vlSelf->npc__DOT__id_ex_branch_bus),6);
        tracep->fullCData(oldp+20,(vlSelf->npc__DOT__id_ex_unsigned_bus),2);
        tracep->fullBit(oldp+21,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst));
        tracep->fullBit(oldp+22,(vlSelf->npc__DOT__ex_load_en_o));
        tracep->fullQData(oldp+23,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r),64);
        tracep->fullQData(oldp+25,((0xfffffffffffffff8ULL 
                                    & vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
        tracep->fullQData(oldp+27,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__rdata),64);
        tracep->fullBit(oldp+29,(vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__sign_reg__DOT__qout_r));
        tracep->fullBit(oldp+30,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu));
        tracep->fullBit(oldp+31,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai));
        tracep->fullBit(oldp+32,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw));
        tracep->fullBit(oldp+33,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw));
        tracep->fullBit(oldp+34,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+35,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu));
        tracep->fullBit(oldp+36,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra));
        tracep->fullBit(oldp+37,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div));
        tracep->fullBit(oldp+38,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul));
        tracep->fullBit(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh));
        tracep->fullBit(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+41,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+42,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem));
        tracep->fullBit(oldp+43,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw));
        tracep->fullBit(oldp+44,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw));
        tracep->fullBit(oldp+45,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw));
        tracep->fullBit(oldp+46,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw));
        tracep->fullBit(oldp+47,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw));
        tracep->fullBit(oldp+48,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw));
        tracep->fullBit(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu));
        tracep->fullBit(oldp+50,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+51,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu));
        tracep->fullBit(oldp+52,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu));
        tracep->fullBit(oldp+53,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+54,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+55,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+56,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+57,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+58,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+59,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+60,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))));
        tracep->fullBit(oldp+61,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))));
        tracep->fullCData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type),6);
        tracep->fullIData(oldp+63,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen),32);
        tracep->fullBit(oldp+64,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 1U))));
        tracep->fullQData(oldp+65,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+67,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 2U))));
        tracep->fullQData(oldp+68,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+70,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 3U))));
        tracep->fullQData(oldp+71,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+73,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 4U))));
        tracep->fullQData(oldp+74,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+76,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 5U))));
        tracep->fullQData(oldp+77,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+79,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 6U))));
        tracep->fullQData(oldp+80,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+82,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 7U))));
        tracep->fullQData(oldp+83,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+85,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 8U))));
        tracep->fullQData(oldp+86,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+88,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 9U))));
        tracep->fullQData(oldp+89,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+91,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 0xaU))));
        tracep->fullQData(oldp+92,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+94,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 0xbU))));
        tracep->fullQData(oldp+95,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+97,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                        >> 0xcU))));
        tracep->fullQData(oldp+98,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+100,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xdU))));
        tracep->fullQData(oldp+101,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+103,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xeU))));
        tracep->fullQData(oldp+104,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+106,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xfU))));
        tracep->fullQData(oldp+107,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+109,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x10U))));
        tracep->fullQData(oldp+110,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+112,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x11U))));
        tracep->fullQData(oldp+113,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+115,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x12U))));
        tracep->fullQData(oldp+116,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+118,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x13U))));
        tracep->fullQData(oldp+119,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+121,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x14U))));
        tracep->fullQData(oldp+122,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+124,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x15U))));
        tracep->fullQData(oldp+125,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+127,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x16U))));
        tracep->fullQData(oldp+128,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+130,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x17U))));
        tracep->fullQData(oldp+131,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+133,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x18U))));
        tracep->fullQData(oldp+134,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+136,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x19U))));
        tracep->fullQData(oldp+137,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+139,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+140,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+142,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1bU))));
        tracep->fullQData(oldp+143,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+145,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1cU))));
        tracep->fullQData(oldp+146,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+148,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1dU))));
        tracep->fullQData(oldp+149,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+151,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1eU))));
        tracep->fullQData(oldp+152,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+154,((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                   >> 0x1fU)));
        tracep->fullQData(oldp+155,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+157,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub));
        tracep->fullBit(oldp+158,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                         >> 8U))));
        tracep->fullBit(oldp+159,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift));
        tracep->fullBit(oldp+160,((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))));
        tracep->fullBit(oldp+161,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en));
        tracep->fullQData(oldp+162,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mstatus_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+164,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mtvec_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+166,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mepc_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+168,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__mcause_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+170,((0U != (IData)(vlSelf->npc__DOT__id_ex_csr_bus))));
        tracep->fullBit(oldp+171,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or));
        tracep->fullBit(oldp+172,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))))));
        tracep->fullBit(oldp+173,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and));
        tracep->fullBit(oldp+174,((1U & (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))));
        tracep->fullCData(oldp+175,(((((1U & (- (IData)(
                                                        (0U 
                                                         == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                       | (2U & (- (IData)(
                                                          (1U 
                                                           == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                      | (4U & (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type)))))) 
                                     | (8U & (- (IData)(
                                                        (3U 
                                                         == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))))),8);
        tracep->fullBit(oldp+176,((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
        tracep->fullBit(oldp+177,((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
        tracep->fullBit(oldp+178,((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
        tracep->fullBit(oldp+179,((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))));
        tracep->fullBit(oldp+180,((1U & (((((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 5U) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 4U) 
                                                   & (0U 
                                                      != 
                                                      (((QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                               | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                   >> 3U) 
                                                  & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                              | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 2U) 
                                                 & ((~ 
                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                    | (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                             | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                 >> 1U) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                            | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                               & ((~ 
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                  | (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))));
        tracep->fullBit(oldp+181,((1U & (((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                >> 5U) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                              | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  >> 4U) 
                                                 & (0U 
                                                    != 
                                                    (((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                             | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                 >> 3U) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                            | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                >> 2U) 
                                               & ((~ 
                                                   vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                  | (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                  << 0x20U) 
                                                                 | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                           | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                               >> 1U) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                          | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                             & ((~ 
                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                | (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))));
        tracep->fullQData(oldp+182,((((((- (QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                            >> 7U)) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                              >> 0xfU)) 
                                                                     & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                      | ((- (QData)((IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                         & (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                            & (~ (IData)(vlSelf->npc__DOT__id_ex_unsigned_bus)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                     | ((- (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))),64);
        __Vtemp30[0U] = (IData)(vlSelf->npc__DOT__alu_op_a);
        __Vtemp30[1U] = (IData)((vlSelf->npc__DOT__alu_op_a 
                                 >> 0x20U));
        __Vtemp30[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                   >> 1U)) & (IData)(
                                                     (vlSelf->npc__DOT__alu_op_a 
                                                      >> 0x3fU))));
        tracep->fullWData(oldp+184,(__Vtemp30),65);
        __Vtemp31[0U] = (IData)(vlSelf->npc__DOT__alu_op_b);
        __Vtemp31[1U] = (IData)((vlSelf->npc__DOT__alu_op_b 
                                 >> 0x20U));
        __Vtemp31[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                   >> 1U)) & (IData)(
                                                     (vlSelf->npc__DOT__alu_op_b 
                                                      >> 0x3fU))));
        tracep->fullWData(oldp+187,(__Vtemp31),65);
        __Vtemp34[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                         & (IData)(vlSelf->npc__DOT__alu_op_a));
        __Vtemp34[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                         & (IData)((vlSelf->npc__DOT__alu_op_a 
                                    >> 0x20U)));
        __Vtemp34[2U] = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                               & ((~ ((IData)(vlSelf->npc__DOT__id_ex_unsigned_bus) 
                                      >> 1U)) & (IData)(
                                                        (vlSelf->npc__DOT__alu_op_a 
                                                         >> 0x3fU)))));
        tracep->fullWData(oldp+190,(__Vtemp34),65);
        if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))) {
            __Vtemp39[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
            __Vtemp39[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
            __Vtemp39[2U] = (1U & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]));
        } else {
            __Vtemp39[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
            __Vtemp39[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
            __Vtemp39[2U] = (1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
        }
        tracep->fullWData(oldp+193,(__Vtemp39),65);
        tracep->fullIData(oldp+196,(((- (IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                    >> 7U)))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)),32);
        tracep->fullIData(oldp+197,(((- (IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                    >> 7U)))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)),32);
        VL_EXTEND_WQ(128,64, __Vtemp40, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp41, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WQ(128,64, __Vtemp43, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp44, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp45, __Vtemp43, __Vtemp44);
        tracep->fullQData(oldp+198,(((((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                >> 4U))))) 
                                         & (((QData)((IData)(
                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                  >> 3U))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                 >> 2U))))) 
                                          & (((QData)((IData)(
                                                              __Vtemp42[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp42[2U]))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus) 
                                                                >> 1U))))) 
                                         & (((QData)((IData)(
                                                             __Vtemp45[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp45[2U]))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__id_ex_inst_mul_bus))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                           >> 0x1fU)))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))))),64);
        tracep->fullQData(oldp+200,((((((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                                        & VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                 & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                          & VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                                 >> 0x1fU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                                     | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                                >> 0x1fU)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))))),64);
        tracep->fullQData(oldp+202,((((((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst)))))) 
                                        & VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                                 & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                          & VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus)) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                                 >> 0x1fU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                                     | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_divrem_bus) 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                                >> 0x1fU)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))))),64);
        tracep->fullCData(oldp+204,((0x3fU & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                              & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),6);
        tracep->fullCData(oldp+205,((0x1fU & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                              & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),5);
        __Vtemp46[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        __Vtemp46[1U] = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                                     ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                         >> 0x1fU)))))));
        __Vtemp46[2U] = (IData)(((0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                         >> 0x1fU)))))) 
                                 >> 0x20U));
        tracep->fullWData(oldp+206,(__Vtemp46),65);
        __Vtemp47[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
        __Vtemp47[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                 >> 0x20U));
        __Vtemp47[2U] = ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                         & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                    >> 0x3fU)));
        tracep->fullWData(oldp+209,(__Vtemp47),65);
        if (vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst) {
            __Vtemp50[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
            __Vtemp50[1U] = (IData)((0x1ffffffffULL 
                                     & (- (QData)((IData)(
                                                          ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                              >> 0x1fU)))))));
            __Vtemp50[2U] = (IData)(((0x1ffffffffULL 
                                      & (- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                                                            & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                               >> 0x1fU)))))) 
                                     >> 0x20U));
        } else {
            __Vtemp50[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
            __Vtemp50[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                     >> 0x20U));
            __Vtemp50[2U] = ((IData)(vlSelf->npc__DOT__id_ex_inst_is_srax) 
                             & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                        >> 0x3fU)));
        }
        tracep->fullWData(oldp+212,(__Vtemp50),65);
        tracep->fullCData(oldp+215,((0x3fU & ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                               | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))
                                               ? (0x1fU 
                                                  & ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                     & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                               : ((IData)(vlSelf->npc__DOT__alu_op_b) 
                                                  & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))))))),6);
        tracep->fullQData(oldp+216,(((((- (QData)((IData)(
                                                          (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                            >> 4U) 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))) 
                                       & (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                                 >> 4U) 
                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__rv64_inst))))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 3U))))) 
                                        & (((QData)((IData)(
                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])))))),64);
        tracep->fullQData(oldp+218,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                            >> 2U))))) 
                                     & vlSelf->npc__DOT__alu_op_a)),64);
        tracep->fullQData(oldp+220,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                            >> 2U))))) 
                                     & vlSelf->npc__DOT__alu_op_b)),64);
        tracep->fullQData(oldp+222,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                             >> 2U))))) 
                                      & vlSelf->npc__DOT__alu_op_a) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__alu_op_b))),64);
        tracep->fullQData(oldp+224,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                            >> 1U))))) 
                                     & vlSelf->npc__DOT__alu_op_a)),64);
        tracep->fullQData(oldp+226,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                            >> 1U))))) 
                                     & vlSelf->npc__DOT__alu_op_b)),64);
        tracep->fullQData(oldp+228,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                             >> 1U))))) 
                                      & vlSelf->npc__DOT__alu_op_a) 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__alu_op_b))),64);
        tracep->fullQData(oldp+230,(((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                     & vlSelf->npc__DOT__alu_op_a)),64);
        tracep->fullQData(oldp+232,(((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                     & vlSelf->npc__DOT__alu_op_b)),64);
        tracep->fullQData(oldp+234,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                      & vlSelf->npc__DOT__alu_op_a) 
                                     ^ ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))))) 
                                        & vlSelf->npc__DOT__alu_op_b))),64);
        tracep->fullBit(oldp+236,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                          >> 5U) & 
                                         (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (((QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))));
        tracep->fullBit(oldp+237,((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                    >> 4U) & (0U != 
                                              (((QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))));
        tracep->fullBit(oldp+238,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                          >> 3U) & 
                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
        tracep->fullBit(oldp+239,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                          >> 2U) & 
                                         ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                          | (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (((QData)((IData)(
                                                                          vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                          << 0x20U) 
                                                         | (QData)((IData)(
                                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
        tracep->fullBit(oldp+240,((1U & (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                          >> 1U) & 
                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                         & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (((QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
        tracep->fullBit(oldp+242,((1U & ((((((((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                               >> 5U) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (((QData)((IData)(
                                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                             | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                 >> 4U) 
                                                & (0U 
                                                   != 
                                                   (((QData)((IData)(
                                                                     vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                            | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                >> 3U) 
                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                           | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                               >> 2U) 
                                              & ((~ 
                                                  vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                 | (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                          | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                              >> 1U) 
                                             & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                         | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                            & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                               | (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (((QData)((IData)(
                                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))))));
        tracep->fullQData(oldp+243,((((- (QData)((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                      & vlSelf->npc__DOT__ex_bs_data) 
                                     | (4ULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)))))),64);
        tracep->fullQData(oldp+245,(((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                      & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena)))) 
                                     | (0xbULL & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))))),64);
        tracep->fullBit(oldp+247,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))));
        tracep->fullBit(oldp+248,(((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))));
        tracep->fullQData(oldp+249,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                             >> 5U))))) 
                                      & vlSelf->npc__DOT__alu_op_a) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__ex_bs_data))),64);
        tracep->fullQData(oldp+251,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_and))))),64);
        tracep->fullQData(oldp+253,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__id_ex_csr_bus) 
                                                             >> 3U))))) 
                                      & vlSelf->npc__DOT__alu_op_a) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__id_ex_csr_bus))))) 
                                        & vlSelf->npc__DOT__ex_bs_data))),64);
        tracep->fullQData(oldp+255,((((((- (QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                        << 0x18U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                           << 0x10U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__ex_store_data_o)))))))))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                          & (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->npc__DOT__ex_store_data_o)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->npc__DOT__ex_store_data_o))))))))) 
                                      | ((- (QData)((IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                         & (((QData)((IData)(vlSelf->npc__DOT__ex_store_data_o)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__ex_store_data_o))))) 
                                     | ((- (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))))) 
                                        & vlSelf->npc__DOT__ex_store_data_o))),64);
        tracep->fullQData(oldp+257,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                    [0xaU]),64);
        tracep->fullQData(oldp+259,(vlSelf->npc__DOT__read_rs2_data),64);
        tracep->fullQData(oldp+261,(vlSelf->npc__DOT__rd_data),64);
        tracep->fullQData(oldp+263,(vlSelf->npc__DOT__alu_op_a),64);
        tracep->fullQData(oldp+265,(vlSelf->npc__DOT__alu_op_b),64);
        tracep->fullQData(oldp+267,(vlSelf->npc__DOT__ex_bs_data),64);
        tracep->fullQData(oldp+269,(vlSelf->npc__DOT__ex_store_data_o),64);
        tracep->fullQData(oldp+271,(vlSelf->npc__DOT__csr_rd_data),64);
        tracep->fullQData(oldp+273,(vlSelf->npc__DOT__alu_rd_data_o),64);
        tracep->fullQData(oldp+275,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0]),64);
        tracep->fullQData(oldp+277,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1]),64);
        tracep->fullQData(oldp+279,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2]),64);
        tracep->fullQData(oldp+281,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3]),64);
        tracep->fullQData(oldp+283,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4]),64);
        tracep->fullQData(oldp+285,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5]),64);
        tracep->fullQData(oldp+287,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6]),64);
        tracep->fullQData(oldp+289,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7]),64);
        tracep->fullQData(oldp+291,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8]),64);
        tracep->fullQData(oldp+293,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9]),64);
        tracep->fullQData(oldp+295,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[10]),64);
        tracep->fullQData(oldp+297,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[11]),64);
        tracep->fullQData(oldp+299,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[12]),64);
        tracep->fullQData(oldp+301,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[13]),64);
        tracep->fullQData(oldp+303,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[14]),64);
        tracep->fullQData(oldp+305,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[15]),64);
        tracep->fullQData(oldp+307,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[16]),64);
        tracep->fullQData(oldp+309,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[17]),64);
        tracep->fullQData(oldp+311,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[18]),64);
        tracep->fullQData(oldp+313,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[19]),64);
        tracep->fullQData(oldp+315,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[20]),64);
        tracep->fullQData(oldp+317,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[21]),64);
        tracep->fullQData(oldp+319,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[22]),64);
        tracep->fullQData(oldp+321,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[23]),64);
        tracep->fullQData(oldp+323,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[24]),64);
        tracep->fullQData(oldp+325,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[25]),64);
        tracep->fullQData(oldp+327,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[26]),64);
        tracep->fullQData(oldp+329,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[27]),64);
        tracep->fullQData(oldp+331,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[28]),64);
        tracep->fullQData(oldp+333,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[29]),64);
        tracep->fullQData(oldp+335,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[30]),64);
        tracep->fullQData(oldp+337,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[31]),64);
        tracep->fullWData(oldp+339,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b),65);
        tracep->fullWData(oldp+342,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data),65);
        tracep->fullQData(oldp+345,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))),64);
        tracep->fullQData(oldp+347,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result),64);
        tracep->fullIData(oldp+349,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op),32);
        tracep->fullIData(oldp+350,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op),32);
        tracep->fullQData(oldp+351,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op),64);
        tracep->fullQData(oldp+353,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op),64);
        tracep->fullQData(oldp+355,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a),64);
        tracep->fullQData(oldp+357,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b),64);
        VL_EXTEND_WQ(128,64, __Vtemp51, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp52, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp53, __Vtemp51, __Vtemp52);
        tracep->fullWData(oldp+359,(__Vtemp53),128);
        tracep->fullWData(oldp+363,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res),128);
        VL_EXTEND_WQ(128,64, __Vtemp54, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp55, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp56, __Vtemp54, __Vtemp55);
        tracep->fullWData(oldp+367,(__Vtemp56),128);
        tracep->fullQData(oldp+371,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res),64);
        tracep->fullQData(oldp+373,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                     >> 0x1fU)))))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))),64);
        tracep->fullQData(oldp+375,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a),64);
        tracep->fullQData(oldp+377,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b),64);
        tracep->fullQData(oldp+379,(VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
        tracep->fullQData(oldp+381,(VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
        tracep->fullIData(oldp+383,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a),32);
        tracep->fullIData(oldp+384,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b),32);
        tracep->fullIData(oldp+385,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res),32);
        tracep->fullIData(oldp+386,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res),32);
        tracep->fullQData(oldp+387,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res))))),64);
        tracep->fullQData(oldp+389,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))),64);
        tracep->fullQData(oldp+391,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a),64);
        tracep->fullQData(oldp+393,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b),64);
        tracep->fullQData(oldp+395,(VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
        tracep->fullQData(oldp+397,(VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
        tracep->fullIData(oldp+399,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a),32);
        tracep->fullIData(oldp+400,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b),32);
        tracep->fullIData(oldp+401,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod),32);
        tracep->fullIData(oldp+402,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod),32);
        tracep->fullQData(oldp+403,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod))))),64);
        tracep->fullQData(oldp+405,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))),64);
        tracep->fullQData(oldp+407,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a),64);
        tracep->fullQData(oldp+409,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64),64);
        tracep->fullIData(oldp+411,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32),32);
        tracep->fullWData(oldp+412,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result),65);
        tracep->fullIData(oldp+415,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev),32);
        tracep->fullQData(oldp+416,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev),64);
        tracep->fullBit(oldp+418,((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])));
        tracep->fullBit(oldp+419,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))));
        tracep->fullQData(oldp+420,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc),64);
        tracep->fullQData(oldp+422,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data),64);
        tracep->fullQData(oldp+424,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena))))),64);
        tracep->fullQData(oldp+426,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena))))),64);
        tracep->fullBit(oldp+428,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mstatus_ena));
        tracep->fullBit(oldp+429,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mtvec_ena));
        tracep->fullQData(oldp+430,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__read_csr_data),64);
        tracep->fullQData(oldp+432,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data),64);
        tracep->fullBit(oldp+434,((0x300U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__alu_op_b)))));
        tracep->fullBit(oldp+435,((0x305U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__alu_op_b)))));
        tracep->fullBit(oldp+436,((0x341U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__alu_op_b)))));
        tracep->fullBit(oldp+437,((0x342U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__alu_op_b)))));
        tracep->fullBit(oldp+438,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena));
        tracep->fullBit(oldp+439,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mcause_ena));
        tracep->fullQData(oldp+440,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1),64);
        tracep->fullQData(oldp+442,(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2),64);
        tracep->fullQData(oldp+444,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                                     | vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2)),64);
        tracep->fullQData(oldp+446,((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data1 
                                     & (~ vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_or_data2))),64);
        tracep->fullQData(oldp+448,(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata),64);
        tracep->fullBit(oldp+450,(vlSelf->clk));
        tracep->fullBit(oldp+451,(vlSelf->rst));
        tracep->fullIData(oldp+452,(vlSelf->inst),32);
        tracep->fullQData(oldp+453,(vlSelf->pc_now),64);
        tracep->fullQData(oldp+455,(vlSelf->fdata),64);
        tracep->fullQData(oldp+457,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))
                                      ? vlSelf->npc__DOT__csr_rd_data
                                      : (((- (QData)((IData)(
                                                             (0U 
                                                              != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                          & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                         | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                            & (((- (QData)((IData)(
                                                                   (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst))))) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                               | (0xfffffffffffffffeULL 
                                                  & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))))),64);
        tracep->fullCData(oldp+459,((0x1fU & (vlSelf->inst 
                                              >> 0xfU))),5);
        tracep->fullCData(oldp+460,((0x1fU & (vlSelf->inst 
                                              >> 0x14U))),5);
        tracep->fullCData(oldp+461,((0x1fU & (vlSelf->inst 
                                              >> 7U))),5);
        tracep->fullBit(oldp+462,((0x6fU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+463,((0x23U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+464,(((3U == (0x7fU & vlSelf->inst)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->inst)))));
        tracep->fullBit(oldp+465,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                   & (vlSelf->inst 
                                      >> 0x19U))));
        tracep->fullQData(oldp+466,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                    [(0x1fU & (vlSelf->inst 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+468,((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                     & (- (QData)((IData)(
                                                          ((IData)(vlSelf->npc__DOT__id_ex_w_reg_en) 
                                                           | (0x23U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)))))))),64);
        tracep->fullQData(oldp+470,((((- (QData)((IData)(
                                                         (0U 
                                                          != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                     | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                        & (((- (QData)((IData)(
                                                               (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))))) 
                                            & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                           | (0xfffffffffffffffeULL 
                                              & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                 & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))))),64);
        tracep->fullQData(oldp+472,(((1U & ((((((((
                                                   (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 5U) 
                                                    & (~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))) 
                                                   | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                       >> 4U) 
                                                      & (0U 
                                                         != 
                                                         (((QData)((IData)(
                                                                           vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))) 
                                                  | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                      >> 3U) 
                                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                                 | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                     >> 2U) 
                                                    & ((~ 
                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                       | (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                       << 0x20U) 
                                                                      | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                                | (((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                    >> 1U) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])) 
                                               | ((IData)(vlSelf->npc__DOT__id_ex_branch_bus) 
                                                  & ((~ 
                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                                     | (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (((QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                                     << 0x20U) 
                                                                    | (QData)((IData)(
                                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))) 
                                              | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en)) 
                                             | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret)) 
                                            | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))
                                      ? (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mret) 
                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall))
                                          ? vlSelf->npc__DOT__csr_rd_data
                                          : (((- (QData)((IData)(
                                                                 (0U 
                                                                  != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                             | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                                & (((- (QData)((IData)(
                                                                       (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->inst))))) 
                                                    & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                                   | (0xfffffffffffffffeULL 
                                                      & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result))))))
                                      : (4ULL + vlSelf->npc__DOT__u_ysyx_22050598_IFU__DOT__pc_dfflr_resetval__DOT__qout_r))),64);
        tracep->fullCData(oldp+474,((7U & (vlSelf->inst 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+475,((0U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+476,((1U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+477,((2U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+478,((3U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+479,((4U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+480,((5U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+481,((6U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullBit(oldp+482,((7U == (7U & (vlSelf->inst 
                                                >> 0xcU)))));
        tracep->fullCData(oldp+483,((vlSelf->inst >> 0x19U)),7);
        tracep->fullBit(oldp+484,((0U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+485,((0x20U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+486,((1U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+487,((4U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+488,((8U == (vlSelf->inst 
                                          >> 0x19U))));
        tracep->fullBit(oldp+489,((0x10U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+490,((0x18U == (vlSelf->inst 
                                             >> 0x19U))));
        tracep->fullBit(oldp+491,((0U == (0x1fU & (vlSelf->inst 
                                                   >> 0xfU)))));
        tracep->fullBit(oldp+492,((0U == (0x1fU & (vlSelf->inst 
                                                   >> 0x14U)))));
        tracep->fullBit(oldp+493,((1U == (0x1fU & (vlSelf->inst 
                                                   >> 0x14U)))));
        tracep->fullBit(oldp+494,((2U == (0x1fU & (vlSelf->inst 
                                                   >> 0x14U)))));
        tracep->fullBit(oldp+495,((0U == (0x1fU & (vlSelf->inst 
                                                   >> 7U)))));
        tracep->fullCData(oldp+496,((0x7fU & vlSelf->inst)),7);
        tracep->fullBit(oldp+497,((0x13U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+498,((0x33U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+499,((0x1bU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+500,((0x3bU == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+501,((0x17U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+502,((0x63U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+503,((0x67U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+504,((3U == (0x7fU & vlSelf->inst))));
        tracep->fullBit(oldp+505,((0x37U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+506,((0x73U == (0x7fU 
                                             & vlSelf->inst))));
        tracep->fullBit(oldp+507,((0x10U == (vlSelf->inst 
                                             >> 0x1aU))));
        tracep->fullBit(oldp+508,((0U == (vlSelf->inst 
                                          >> 0x1aU))));
        tracep->fullBit(oldp+509,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+510,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+511,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+512,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+513,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+514,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+515,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+516,((IData)((0x1bU == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+517,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+518,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0x20U == (vlSelf->inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+519,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+520,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+521,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+522,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+523,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+524,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+525,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (1U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+526,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (1U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+527,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+528,(((IData)((0x3bU == 
                                            (0x707fU 
                                             & vlSelf->inst))) 
                                   & (0x20U == (vlSelf->inst 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+529,(((IData)((0x503bU 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (1U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+530,(((IData)((0x703bU 
                                            == (0x707fU 
                                                & vlSelf->inst))) 
                                   & (1U == (vlSelf->inst 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+531,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+532,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+533,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+534,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+535,((IData)((3U == (0x707fU 
                                                  & vlSelf->inst)))));
        tracep->fullBit(oldp+536,((IData)((0x4003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+537,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+538,((IData)((0x1003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+539,((IData)((0x2003U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+540,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->inst)))));
        tracep->fullBit(oldp+541,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+542,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+543,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->inst)))));
        tracep->fullBit(oldp+544,((((IData)((0x4003U 
                                             == (0x707fU 
                                                 & vlSelf->inst))) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu))));
        tracep->fullQData(oldp+545,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->inst 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+547,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 ((0x7e0U 
                                                                   & (vlSelf->inst 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->inst 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+549,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->inst 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->inst 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->inst 
                                                                           >> 7U)))))))),64);
        tracep->fullQData(oldp+551,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->inst))))),64);
        tracep->fullQData(oldp+553,((((- (QData)((IData)(
                                                         (vlSelf->inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->inst 
                                                                            >> 0x14U)))))))),64);
        tracep->fullBit(oldp+555,((1U & (~ (vlSelf->inst 
                                            >> 0x19U)))));
        tracep->fullCData(oldp+556,((0x1fU & ((vlSelf->inst 
                                               >> 0xfU) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                               >> 2U))))))),5);
        tracep->fullCData(oldp+557,((0x1fU & ((vlSelf->inst 
                                               >> 0x14U) 
                                              & (- (IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                               >> 1U))))))),5);
        tracep->fullQData(oldp+558,((vlSelf->pc_now 
                                     & (- (QData)((IData)(
                                                          ((0U 
                                                            != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))))),64);
        tracep->fullQData(oldp+560,((((- (QData)((IData)(
                                                         (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                     | (0xfffffffffffffffeULL 
                                        & ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))),64);
        tracep->fullQData(oldp+562,(((vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__write_csr_data 
                                      & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_csr__DOT__csr_mepc_ena)))) 
                                     | (vlSelf->pc_now 
                                        & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_ecall)))))),64);
        tracep->fullBit(oldp+564,(vlSelf->npc__DOT__wb_rd_en));
        tracep->fullCData(oldp+565,(vlSelf->npc__DOT__wb_rd_idx),5);
        tracep->fullQData(oldp+566,(vlSelf->npc__DOT__wb_data),64);
        tracep->fullIData(oldp+568,(0x40U),32);
        tracep->fullQData(oldp+569,(0x80000000ULL),64);
        tracep->fullBit(oldp+571,(1U));
        tracep->fullIData(oldp+572,(1U),32);
        tracep->fullBit(oldp+573,(1U));
        tracep->fullCData(oldp+574,(0U),5);
        tracep->fullBit(oldp+575,(0U));
        tracep->fullQData(oldp+576,(0ULL),64);
        tracep->fullQData(oldp+578,(0xa00001800ULL),64);
    }
}
