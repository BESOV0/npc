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
        tracep->declQuad(c+694,"test_if_pc", false,-1, 63,0);
        tracep->declBus(c+696,"test_if_inst", false,-1, 31,0);
        tracep->declQuad(c+697,"test_id_pc", false,-1, 63,0);
        tracep->declBus(c+699,"test_id_inst", false,-1, 31,0);
        tracep->declQuad(c+700,"test_ex_pc", false,-1, 63,0);
        tracep->declBus(c+702,"test_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+703,"test_ls_pc", false,-1, 63,0);
        tracep->declBus(c+705,"test_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+706,"test_wb_pc", false,-1, 63,0);
        tracep->declBus(c+708,"test_wb_inst", false,-1, 31,0);
        tracep->declBit(c+709,"clk", false,-1);
        tracep->declBit(c+710,"rst", false,-1);
        tracep->declQuad(c+694,"npc test_if_pc", false,-1, 63,0);
        tracep->declBus(c+696,"npc test_if_inst", false,-1, 31,0);
        tracep->declQuad(c+697,"npc test_id_pc", false,-1, 63,0);
        tracep->declBus(c+699,"npc test_id_inst", false,-1, 31,0);
        tracep->declQuad(c+700,"npc test_ex_pc", false,-1, 63,0);
        tracep->declBus(c+702,"npc test_ex_inst", false,-1, 31,0);
        tracep->declQuad(c+703,"npc test_ls_pc", false,-1, 63,0);
        tracep->declBus(c+705,"npc test_ls_inst", false,-1, 31,0);
        tracep->declQuad(c+706,"npc test_wb_pc", false,-1, 63,0);
        tracep->declBus(c+708,"npc test_wb_inst", false,-1, 31,0);
        tracep->declBit(c+709,"npc clk", false,-1);
        tracep->declBit(c+710,"npc rst", false,-1);
        tracep->declQuad(c+626,"npc ebreak_a0", false,-1, 63,0);
        tracep->declQuad(c+1,"npc if_bpu_pc_op", false,-1, 63,0);
        tracep->declBit(c+3,"npc if_prdt_taken", false,-1);
        tracep->declBus(c+4,"npc if_id_inst", false,-1, 31,0);
        tracep->declQuad(c+5,"npc if_id_pc", false,-1, 63,0);
        tracep->declBus(c+711,"npc if_inst", false,-1, 31,0);
        tracep->declQuad(c+712,"npc if_pc_i", false,-1, 63,0);
        tracep->declQuad(c+7,"npc id_pc", false,-1, 63,0);
        tracep->declBus(c+9,"npc id_inst", false,-1, 31,0);
        tracep->declBus(c+10,"npc id_ex_op_type", false,-1, 9,0);
        tracep->declBus(c+11,"npc id_op_a_sel", false,-1, 2,0);
        tracep->declBus(c+12,"npc id_op_b_sel", false,-1, 1,0);
        tracep->declQuad(c+13,"npc id_imm", false,-1, 63,0);
        tracep->declBus(c+15,"npc id_read_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"npc id_read_rs2_idx", false,-1, 4,0);
        tracep->declBit(c+17,"npc id_ex_w_reg_en", false,-1);
        tracep->declBus(c+18,"npc id_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+19,"npc id_ex_inst_is_ebreak", false,-1);
        tracep->declBit(c+20,"npc id_ex_inst_is_ecall", false,-1);
        tracep->declBit(c+21,"npc id_ex_inst_is_jalr", false,-1);
        tracep->declBit(c+22,"npc id_ex_inst_is_jal", false,-1);
        tracep->declBit(c+23,"npc id_ex_inst_is_store", false,-1);
        tracep->declBit(c+24,"npc id_ex_inst_is_set", false,-1);
        tracep->declBit(c+25,"npc id_ex_inst_is_srax", false,-1);
        tracep->declBit(c+26,"npc id_ex_inst_5_shamt", false,-1);
        tracep->declBit(c+27,"npc id_ex_inst_is_mret", false,-1);
        tracep->declBit(c+28,"npc id_ex_inst_is_csri", false,-1);
        tracep->declBus(c+29,"npc id_ex_ls_data_bus", false,-1, 1,0);
        tracep->declBit(c+30,"npc id_ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+31,"npc id_ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+32,"npc id_ex_csr_bus", false,-1, 5,0);
        tracep->declBus(c+33,"npc id_ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+34,"npc id_ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+35,"npc id_ex_ls_req", false,-1);
        tracep->declBit(c+36,"npc id_ex_inst_is_rv64", false,-1);
        tracep->declBit(c+37,"npc id_inst_is_illegal", false,-1);
        tracep->declQuad(c+608,"npc id_read_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+610,"npc id_read_rs2_data", false,-1, 63,0);
        tracep->declQuad(c+612,"npc id_ex_alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+614,"npc id_ex_alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+616,"npc id_ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBit(c+38,"npc forward_load_stall", false,-1);
        tracep->declBus(c+39,"npc ex_inst", false,-1, 31,0);
        tracep->declBus(c+40,"npc ex_op_type", false,-1, 9,0);
        tracep->declQuad(c+41,"npc ex_alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+43,"npc ex_alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+45,"npc ex_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"npc ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBus(c+49,"npc ex_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+50,"npc ex_w_reg_en", false,-1);
        tracep->declBit(c+51,"npc ex_inst_is_ebreak", false,-1);
        tracep->declBit(c+52,"npc ex_inst_is_ecall", false,-1);
        tracep->declBit(c+53,"npc ex_inst_is_jalr", false,-1);
        tracep->declBit(c+54,"npc ex_inst_is_jal", false,-1);
        tracep->declBit(c+55,"npc ex_inst_is_store", false,-1);
        tracep->declBit(c+56,"npc ex_inst_is_set", false,-1);
        tracep->declBit(c+57,"npc ex_inst_is_srax", false,-1);
        tracep->declBit(c+58,"npc ex_inst_5_shamt", false,-1);
        tracep->declBit(c+59,"npc ex_inst_is_mret", false,-1);
        tracep->declBus(c+60,"npc ex_ls_data_bus", false,-1, 1,0);
        tracep->declBit(c+61,"npc ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+62,"npc ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+63,"npc ex_csr_bus", false,-1, 5,0);
        tracep->declBus(c+64,"npc ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+65,"npc ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+66,"npc ex_ls_req", false,-1);
        tracep->declBit(c+67,"npc ex_inst_is_rv64", false,-1);
        tracep->declBit(c+68,"npc ex_inst_is_illegal", false,-1);
        tracep->declQuad(c+69,"npc ex_ls_alu_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+50,"npc ex_ls_alu_rd_data_en", false,-1);
        tracep->declQuad(c+71,"npc ex_ls_alu_pc", false,-1, 63,0);
        tracep->declBit(c+73,"npc ex_ls_alu_pc_en", false,-1);
        tracep->declBit(c+74,"npc ex_ls_load_en", false,-1);
        tracep->declBit(c+55,"npc ex_ls_store_en", false,-1);
        tracep->declQuad(c+75,"npc ex_ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+77,"npc ex_csr_rd_pc_data", false,-1, 63,0);
        tracep->declQuad(c+79,"npc ex_rd_data", false,-1, 63,0);
        tracep->declBit(c+81,"npc ex_pc_data_ena", false,-1);
        tracep->declQuad(c+82,"npc ex_pc_data", false,-1, 63,0);
        tracep->declBus(c+84,"npc ls_inst", false,-1, 31,0);
        tracep->declQuad(c+85,"npc ls_pc", false,-1, 63,0);
        tracep->declQuad(c+87,"npc ls_alu_rd_ls_data", false,-1, 63,0);
        tracep->declQuad(c+89,"npc ls_store_data", false,-1, 63,0);
        tracep->declBit(c+91,"npc ls_alu_rd_data_en", false,-1);
        tracep->declBit(c+92,"npc ls_load_en", false,-1);
        tracep->declBit(c+93,"npc ls_store_en", false,-1);
        tracep->declBus(c+94,"npc ls_ls_data_type", false,-1, 1,0);
        tracep->declBus(c+95,"npc ls_rd_idx", false,-1, 4,0);
        tracep->declBit(c+96,"npc ls_inst_is_ebreak", false,-1);
        tracep->declBit(c+97,"npc ls_load_unsigned", false,-1);
        tracep->declBus(c+98,"npc wb_inst", false,-1, 31,0);
        tracep->declQuad(c+99,"npc wb_pc", false,-1, 63,0);
        tracep->declQuad(c+101,"npc ls_wb_load_data", false,-1, 63,0);
        tracep->declQuad(c+103,"npc ls_rd_data", false,-1, 63,0);
        tracep->declQuad(c+105,"npc wb_rd_data", false,-1, 63,0);
        tracep->declBit(c+107,"npc wb_rd_en", false,-1);
        tracep->declBus(c+108,"npc wb_rd_idx", false,-1, 4,0);
        tracep->declBit(c+109,"npc wb_inst_is_ebreak", false,-1);
        tracep->declBus(c+110,"npc pipeline_flush", false,-1, 2,0);
        tracep->declBus(c+111,"npc pipeline_stall", false,-1, 4,0);
        tracep->declBus(c+4,"npc ysyx_22050598_ifu_bpu if_inst", false,-1, 31,0);
        tracep->declQuad(c+1,"npc ysyx_22050598_ifu_bpu bpu_pc_add_op", false,-1, 63,0);
        tracep->declBit(c+3,"npc ysyx_22050598_ifu_bpu prdt_taken", false,-1);
        tracep->declBit(c+112,"npc ysyx_22050598_ifu_bpu inst_is_jal", false,-1);
        tracep->declBit(c+113,"npc ysyx_22050598_ifu_bpu inst_is_bxx", false,-1);
        tracep->declQuad(c+114,"npc ysyx_22050598_ifu_bpu Bimm", false,-1, 63,0);
        tracep->declQuad(c+116,"npc ysyx_22050598_ifu_bpu Jimm", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ifu clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ifu rst", false,-1);
        tracep->declBit(c+38,"npc u_ysyx_22050598_ifu pc_stall", false,-1);
        tracep->declBit(c+118,"npc u_ysyx_22050598_ifu flush_pc_en", false,-1);
        tracep->declQuad(c+82,"npc u_ysyx_22050598_ifu flush_pc", false,-1, 63,0);
        tracep->declBit(c+3,"npc u_ysyx_22050598_ifu prdt_pc_en", false,-1);
        tracep->declQuad(c+1,"npc u_ysyx_22050598_ifu prdt_pc_add_op", false,-1, 63,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_ifu pc_now", false,-1, 63,0);
        tracep->declBus(c+4,"npc u_ysyx_22050598_ifu id_inst", false,-1, 31,0);
        tracep->declBit(c+119,"npc u_ysyx_22050598_ifu pc_r_ena", false,-1);
        tracep->declQuad(c+120,"npc u_ysyx_22050598_ifu pc_in", false,-1, 63,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_ifu pc_r", false,-1, 63,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_ifu pc_add_op1", false,-1, 63,0);
        tracep->declQuad(c+122,"npc u_ysyx_22050598_ifu pc_add_op2", false,-1, 63,0);
        tracep->declQuad(c+124,"npc u_ysyx_22050598_ifu pc_add_res", false,-1, 63,0);
        tracep->declQuad(c+126,"npc u_ysyx_22050598_ifu raddr", false,-1, 63,0);
        tracep->declQuad(c+128,"npc u_ysyx_22050598_ifu rdata", false,-1, 63,0);
        tracep->declBit(c+130,"npc u_ysyx_22050598_ifu sign_r", false,-1);
        tracep->declBus(c+714,"npc u_ysyx_22050598_ifu pc_dfflr_resetval DW", false,-1, 31,0);
        tracep->declQuad(c+715,"npc u_ysyx_22050598_ifu pc_dfflr_resetval RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+119,"npc u_ysyx_22050598_ifu pc_dfflr_resetval lden", false,-1);
        tracep->declQuad(c+120,"npc u_ysyx_22050598_ifu pc_dfflr_resetval dnxt", false,-1, 63,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_ifu pc_dfflr_resetval qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ifu pc_dfflr_resetval clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ifu pc_dfflr_resetval rst_n", false,-1);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_ifu pc_dfflr_resetval qout_r", false,-1, 63,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ifu sign_reg DW", false,-1, 31,0);
        tracep->declBus(c+718,"npc u_ysyx_22050598_ifu sign_reg RESET_VAL", false,-1, 0,0);
        tracep->declBit(c+719,"npc u_ysyx_22050598_ifu sign_reg lden", false,-1);
        tracep->declBus(c+719,"npc u_ysyx_22050598_ifu sign_reg dnxt", false,-1, 0,0);
        tracep->declBus(c+130,"npc u_ysyx_22050598_ifu sign_reg qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ifu sign_reg clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ifu sign_reg rst_n", false,-1);
        tracep->declBus(c+130,"npc u_ysyx_22050598_ifu sign_reg qout_r", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_IF_ID clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_IF_ID rst", false,-1);
        tracep->declBus(c+4,"npc u_ysyx_22050598_IF_ID if_inst", false,-1, 31,0);
        tracep->declQuad(c+5,"npc u_ysyx_22050598_IF_ID if_pc_i", false,-1, 63,0);
        tracep->declBit(c+131,"npc u_ysyx_22050598_IF_ID if_flush", false,-1);
        tracep->declBit(c+132,"npc u_ysyx_22050598_IF_ID if_stall", false,-1);
        tracep->declQuad(c+7,"npc u_ysyx_22050598_IF_ID if_pc_o", false,-1, 63,0);
        tracep->declBus(c+9,"npc u_ysyx_22050598_IF_ID if_inst_o", false,-1, 31,0);
        tracep->declBus(c+133,"npc u_ysyx_22050598_IF_ID temp_inst", false,-1, 31,0);
        tracep->declQuad(c+134,"npc u_ysyx_22050598_IF_ID temp_pc", false,-1, 63,0);
        tracep->declBit(c+720,"npc u_ysyx_22050598_IF_ID temp_flush", false,-1);
        tracep->declQuad(c+7,"npc u_ysyx_22050598_IF_ID pc_r", false,-1, 63,0);
        tracep->declBus(c+9,"npc u_ysyx_22050598_IF_ID inst_r", false,-1, 31,0);
        tracep->declBit(c+136,"npc u_ysyx_22050598_IF_ID if_en", false,-1);
        tracep->declBus(c+714,"npc u_ysyx_22050598_IF_ID pc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+136,"npc u_ysyx_22050598_IF_ID pc_dfflr lden", false,-1);
        tracep->declQuad(c+134,"npc u_ysyx_22050598_IF_ID pc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+7,"npc u_ysyx_22050598_IF_ID pc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_IF_ID pc_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_IF_ID pc_dfflr rst_n", false,-1);
        tracep->declQuad(c+7,"npc u_ysyx_22050598_IF_ID pc_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+721,"npc u_ysyx_22050598_IF_ID inst_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+136,"npc u_ysyx_22050598_IF_ID inst_dfflr lden", false,-1);
        tracep->declBus(c+133,"npc u_ysyx_22050598_IF_ID inst_dfflr dnxt", false,-1, 31,0);
        tracep->declBus(c+9,"npc u_ysyx_22050598_IF_ID inst_dfflr qout", false,-1, 31,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_IF_ID inst_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_IF_ID inst_dfflr rst_n", false,-1);
        tracep->declBus(c+9,"npc u_ysyx_22050598_IF_ID inst_dfflr qout_r", false,-1, 31,0);
        tracep->declBus(c+9,"npc u_ysyx_22050598_idu_decode id_inst_i", false,-1, 31,0);
        tracep->declBus(c+10,"npc u_ysyx_22050598_idu_decode id_op_type_o", false,-1, 9,0);
        tracep->declBus(c+11,"npc u_ysyx_22050598_idu_decode id_op_a_sel_o", false,-1, 2,0);
        tracep->declBus(c+12,"npc u_ysyx_22050598_idu_decode id_op_b_sel_o", false,-1, 1,0);
        tracep->declQuad(c+13,"npc u_ysyx_22050598_idu_decode id_imm_o", false,-1, 63,0);
        tracep->declBus(c+15,"npc u_ysyx_22050598_idu_decode id_read_rs1_idx_o", false,-1, 4,0);
        tracep->declBus(c+16,"npc u_ysyx_22050598_idu_decode id_read_rs2_idx_o", false,-1, 4,0);
        tracep->declBit(c+17,"npc u_ysyx_22050598_idu_decode id_w_reg_en_o", false,-1);
        tracep->declBus(c+18,"npc u_ysyx_22050598_idu_decode id_write_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+19,"npc u_ysyx_22050598_idu_decode id_inst_is_ebreak_o", false,-1);
        tracep->declBit(c+20,"npc u_ysyx_22050598_idu_decode id_inst_is_ecall_o", false,-1);
        tracep->declBit(c+21,"npc u_ysyx_22050598_idu_decode id_inst_is_jalr_o", false,-1);
        tracep->declBit(c+22,"npc u_ysyx_22050598_idu_decode id_inst_is_jal_o", false,-1);
        tracep->declBit(c+23,"npc u_ysyx_22050598_idu_decode id_inst_is_store_o", false,-1);
        tracep->declBit(c+24,"npc u_ysyx_22050598_idu_decode id_inst_is_set_o", false,-1);
        tracep->declBit(c+25,"npc u_ysyx_22050598_idu_decode id_inst_is_srax_o", false,-1);
        tracep->declBit(c+26,"npc u_ysyx_22050598_idu_decode id_inst_5_shamt_o", false,-1);
        tracep->declBit(c+27,"npc u_ysyx_22050598_idu_decode id_inst_is_mret_o", false,-1);
        tracep->declBit(c+28,"npc u_ysyx_22050598_idu_decode id_inst_is_csri_o", false,-1);
        tracep->declBus(c+29,"npc u_ysyx_22050598_idu_decode id_ls_data_bus_o", false,-1, 1,0);
        tracep->declBit(c+30,"npc u_ysyx_22050598_idu_decode id_inst_divrem_bus_o", false,-1);
        tracep->declBus(c+31,"npc u_ysyx_22050598_idu_decode id_inst_mul_bus_o", false,-1, 4,0);
        tracep->declBus(c+32,"npc u_ysyx_22050598_idu_decode id_csr_bus_o", false,-1, 5,0);
        tracep->declBus(c+33,"npc u_ysyx_22050598_idu_decode id_branch_bus_o", false,-1, 5,0);
        tracep->declBus(c+34,"npc u_ysyx_22050598_idu_decode id_unsigned_bus_o", false,-1, 1,0);
        tracep->declBit(c+35,"npc u_ysyx_22050598_idu_decode id_ls_req_o", false,-1);
        tracep->declBit(c+36,"npc u_ysyx_22050598_idu_decode id_inst_is_rv64_o", false,-1);
        tracep->declBit(c+37,"npc u_ysyx_22050598_idu_decode id_inst_is_illegal_o", false,-1);
        tracep->declBus(c+137,"npc u_ysyx_22050598_idu_decode func3", false,-1, 2,0);
        tracep->declBit(c+138,"npc u_ysyx_22050598_idu_decode func3_000", false,-1);
        tracep->declBit(c+139,"npc u_ysyx_22050598_idu_decode func3_001", false,-1);
        tracep->declBit(c+140,"npc u_ysyx_22050598_idu_decode func3_010", false,-1);
        tracep->declBit(c+141,"npc u_ysyx_22050598_idu_decode func3_011", false,-1);
        tracep->declBit(c+142,"npc u_ysyx_22050598_idu_decode func3_100", false,-1);
        tracep->declBit(c+143,"npc u_ysyx_22050598_idu_decode func3_101", false,-1);
        tracep->declBit(c+144,"npc u_ysyx_22050598_idu_decode func3_110", false,-1);
        tracep->declBit(c+145,"npc u_ysyx_22050598_idu_decode func3_111", false,-1);
        tracep->declBus(c+146,"npc u_ysyx_22050598_idu_decode func7", false,-1, 6,0);
        tracep->declBit(c+147,"npc u_ysyx_22050598_idu_decode func7_0000000", false,-1);
        tracep->declBit(c+148,"npc u_ysyx_22050598_idu_decode func7_0100000", false,-1);
        tracep->declBit(c+149,"npc u_ysyx_22050598_idu_decode func7_0000001", false,-1);
        tracep->declBit(c+150,"npc u_ysyx_22050598_idu_decode func7_0000100", false,-1);
        tracep->declBit(c+151,"npc u_ysyx_22050598_idu_decode func7_0001000", false,-1);
        tracep->declBit(c+152,"npc u_ysyx_22050598_idu_decode func7_0010000", false,-1);
        tracep->declBit(c+153,"npc u_ysyx_22050598_idu_decode func7_0011000", false,-1);
        tracep->declBus(c+15,"npc u_ysyx_22050598_idu_decode rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"npc u_ysyx_22050598_idu_decode rs2_idx", false,-1, 4,0);
        tracep->declBus(c+18,"npc u_ysyx_22050598_idu_decode rd_idx", false,-1, 4,0);
        tracep->declBit(c+154,"npc u_ysyx_22050598_idu_decode rs1_00000", false,-1);
        tracep->declBit(c+155,"npc u_ysyx_22050598_idu_decode rs2_00000", false,-1);
        tracep->declBit(c+156,"npc u_ysyx_22050598_idu_decode rs2_00001", false,-1);
        tracep->declBit(c+157,"npc u_ysyx_22050598_idu_decode rs2_00010", false,-1);
        tracep->declBit(c+158,"npc u_ysyx_22050598_idu_decode rd_00000", false,-1);
        tracep->declBus(c+159,"npc u_ysyx_22050598_idu_decode opcode", false,-1, 6,0);
        tracep->declBit(c+160,"npc u_ysyx_22050598_idu_decode opcode_alui", false,-1);
        tracep->declBit(c+161,"npc u_ysyx_22050598_idu_decode opcode_alur", false,-1);
        tracep->declBit(c+162,"npc u_ysyx_22050598_idu_decode opcode_aluiw", false,-1);
        tracep->declBit(c+163,"npc u_ysyx_22050598_idu_decode opcode_alurw", false,-1);
        tracep->declBit(c+164,"npc u_ysyx_22050598_idu_decode opcode_auipc", false,-1);
        tracep->declBit(c+165,"npc u_ysyx_22050598_idu_decode opcode_branch", false,-1);
        tracep->declBit(c+22,"npc u_ysyx_22050598_idu_decode opcode_jal", false,-1);
        tracep->declBit(c+166,"npc u_ysyx_22050598_idu_decode opcode_jalr", false,-1);
        tracep->declBit(c+167,"npc u_ysyx_22050598_idu_decode opcode_load", false,-1);
        tracep->declBit(c+23,"npc u_ysyx_22050598_idu_decode opcode_store", false,-1);
        tracep->declBit(c+168,"npc u_ysyx_22050598_idu_decode opcode_lui", false,-1);
        tracep->declBit(c+169,"npc u_ysyx_22050598_idu_decode opcode_system", false,-1);
        tracep->declBit(c+170,"npc u_ysyx_22050598_idu_decode func6_010000", false,-1);
        tracep->declBit(c+171,"npc u_ysyx_22050598_idu_decode func6_000000", false,-1);
        tracep->declBit(c+172,"npc u_ysyx_22050598_idu_decode inst_addi", false,-1);
        tracep->declBit(c+173,"npc u_ysyx_22050598_idu_decode inst_slti", false,-1);
        tracep->declBit(c+174,"npc u_ysyx_22050598_idu_decode inst_sltiu", false,-1);
        tracep->declBit(c+175,"npc u_ysyx_22050598_idu_decode inst_xori", false,-1);
        tracep->declBit(c+176,"npc u_ysyx_22050598_idu_decode inst_ori", false,-1);
        tracep->declBit(c+177,"npc u_ysyx_22050598_idu_decode inst_andi", false,-1);
        tracep->declBit(c+178,"npc u_ysyx_22050598_idu_decode inst_slli", false,-1);
        tracep->declBit(c+179,"npc u_ysyx_22050598_idu_decode inst_srli", false,-1);
        tracep->declBit(c+180,"npc u_ysyx_22050598_idu_decode inst_srai", false,-1);
        tracep->declBit(c+181,"npc u_ysyx_22050598_idu_decode inst_addiw", false,-1);
        tracep->declBit(c+182,"npc u_ysyx_22050598_idu_decode inst_slliw", false,-1);
        tracep->declBit(c+183,"npc u_ysyx_22050598_idu_decode inst_srliw", false,-1);
        tracep->declBit(c+184,"npc u_ysyx_22050598_idu_decode inst_sraiw", false,-1);
        tracep->declBit(c+185,"npc u_ysyx_22050598_idu_decode inst_add", false,-1);
        tracep->declBit(c+186,"npc u_ysyx_22050598_idu_decode inst_sub", false,-1);
        tracep->declBit(c+187,"npc u_ysyx_22050598_idu_decode inst_sll", false,-1);
        tracep->declBit(c+188,"npc u_ysyx_22050598_idu_decode inst_slt", false,-1);
        tracep->declBit(c+189,"npc u_ysyx_22050598_idu_decode inst_sltu", false,-1);
        tracep->declBit(c+190,"npc u_ysyx_22050598_idu_decode inst_xor", false,-1);
        tracep->declBit(c+191,"npc u_ysyx_22050598_idu_decode inst_srl", false,-1);
        tracep->declBit(c+192,"npc u_ysyx_22050598_idu_decode inst_sra", false,-1);
        tracep->declBit(c+193,"npc u_ysyx_22050598_idu_decode inst_or", false,-1);
        tracep->declBit(c+194,"npc u_ysyx_22050598_idu_decode inst_and", false,-1);
        tracep->declBit(c+195,"npc u_ysyx_22050598_idu_decode inst_div", false,-1);
        tracep->declBit(c+196,"npc u_ysyx_22050598_idu_decode inst_divu", false,-1);
        tracep->declBit(c+197,"npc u_ysyx_22050598_idu_decode inst_mul", false,-1);
        tracep->declBit(c+198,"npc u_ysyx_22050598_idu_decode inst_mulh", false,-1);
        tracep->declBit(c+199,"npc u_ysyx_22050598_idu_decode inst_mulhsu", false,-1);
        tracep->declBit(c+200,"npc u_ysyx_22050598_idu_decode inst_mulhu", false,-1);
        tracep->declBit(c+201,"npc u_ysyx_22050598_idu_decode inst_rem", false,-1);
        tracep->declBit(c+202,"npc u_ysyx_22050598_idu_decode inst_remu", false,-1);
        tracep->declBit(c+203,"npc u_ysyx_22050598_idu_decode inst_addw", false,-1);
        tracep->declBit(c+204,"npc u_ysyx_22050598_idu_decode inst_subw", false,-1);
        tracep->declBit(c+205,"npc u_ysyx_22050598_idu_decode inst_sllw", false,-1);
        tracep->declBit(c+206,"npc u_ysyx_22050598_idu_decode inst_srlw", false,-1);
        tracep->declBit(c+207,"npc u_ysyx_22050598_idu_decode inst_sraw", false,-1);
        tracep->declBit(c+208,"npc u_ysyx_22050598_idu_decode inst_mulw", false,-1);
        tracep->declBit(c+209,"npc u_ysyx_22050598_idu_decode inst_divw", false,-1);
        tracep->declBit(c+210,"npc u_ysyx_22050598_idu_decode inst_divuw", false,-1);
        tracep->declBit(c+211,"npc u_ysyx_22050598_idu_decode inst_remw", false,-1);
        tracep->declBit(c+212,"npc u_ysyx_22050598_idu_decode inst_remuw", false,-1);
        tracep->declBit(c+213,"npc u_ysyx_22050598_idu_decode inst_beq", false,-1);
        tracep->declBit(c+214,"npc u_ysyx_22050598_idu_decode inst_bne", false,-1);
        tracep->declBit(c+215,"npc u_ysyx_22050598_idu_decode inst_blt", false,-1);
        tracep->declBit(c+216,"npc u_ysyx_22050598_idu_decode inst_bge", false,-1);
        tracep->declBit(c+217,"npc u_ysyx_22050598_idu_decode inst_bltu", false,-1);
        tracep->declBit(c+218,"npc u_ysyx_22050598_idu_decode inst_bgeu", false,-1);
        tracep->declBit(c+22,"npc u_ysyx_22050598_idu_decode inst_jal", false,-1);
        tracep->declBit(c+21,"npc u_ysyx_22050598_idu_decode inst_jalr", false,-1);
        tracep->declBit(c+168,"npc u_ysyx_22050598_idu_decode inst_lui", false,-1);
        tracep->declBit(c+164,"npc u_ysyx_22050598_idu_decode inst_auipc", false,-1);
        tracep->declBit(c+219,"npc u_ysyx_22050598_idu_decode inst_lb", false,-1);
        tracep->declBit(c+220,"npc u_ysyx_22050598_idu_decode inst_lbu", false,-1);
        tracep->declBit(c+221,"npc u_ysyx_22050598_idu_decode inst_ld", false,-1);
        tracep->declBit(c+222,"npc u_ysyx_22050598_idu_decode inst_lh", false,-1);
        tracep->declBit(c+223,"npc u_ysyx_22050598_idu_decode inst_lhu", false,-1);
        tracep->declBit(c+224,"npc u_ysyx_22050598_idu_decode inst_lw", false,-1);
        tracep->declBit(c+225,"npc u_ysyx_22050598_idu_decode inst_lwu", false,-1);
        tracep->declBit(c+226,"npc u_ysyx_22050598_idu_decode inst_sb", false,-1);
        tracep->declBit(c+227,"npc u_ysyx_22050598_idu_decode inst_sh", false,-1);
        tracep->declBit(c+228,"npc u_ysyx_22050598_idu_decode inst_sw", false,-1);
        tracep->declBit(c+229,"npc u_ysyx_22050598_idu_decode inst_sd", false,-1);
        tracep->declBit(c+19,"npc u_ysyx_22050598_idu_decode inst_ebreak", false,-1);
        tracep->declBit(c+20,"npc u_ysyx_22050598_idu_decode inst_ecall", false,-1);
        tracep->declBit(c+27,"npc u_ysyx_22050598_idu_decode inst_mret", false,-1);
        tracep->declBit(c+230,"npc u_ysyx_22050598_idu_decode inst_csrrw", false,-1);
        tracep->declBit(c+231,"npc u_ysyx_22050598_idu_decode inst_csrrs", false,-1);
        tracep->declBit(c+232,"npc u_ysyx_22050598_idu_decode inst_csrrc", false,-1);
        tracep->declBit(c+233,"npc u_ysyx_22050598_idu_decode inst_csrrwi", false,-1);
        tracep->declBit(c+234,"npc u_ysyx_22050598_idu_decode inst_csrrsi", false,-1);
        tracep->declBit(c+235,"npc u_ysyx_22050598_idu_decode inst_csrrci", false,-1);
        tracep->declBit(c+236,"npc u_ysyx_22050598_idu_decode csr_need_rs1", false,-1);
        tracep->declBit(c+28,"npc u_ysyx_22050598_idu_decode inst_is_csri", false,-1);
        tracep->declBit(c+237,"npc u_ysyx_22050598_idu_decode inst_is_csr", false,-1);
        tracep->declBus(c+10,"npc u_ysyx_22050598_idu_decode inst_opcode", false,-1, 9,0);
        tracep->declBit(c+24,"npc u_ysyx_22050598_idu_decode inst_set_en", false,-1);
        tracep->declBit(c+238,"npc u_ysyx_22050598_idu_decode cmp_unsigned", false,-1);
        tracep->declBit(c+239,"npc u_ysyx_22050598_idu_decode load_unsigned", false,-1);
        tracep->declBus(c+240,"npc u_ysyx_22050598_idu_decode inst_type", false,-1, 5,0);
        tracep->declQuad(c+241,"npc u_ysyx_22050598_idu_decode Iimm", false,-1, 63,0);
        tracep->declQuad(c+243,"npc u_ysyx_22050598_idu_decode Simm", false,-1, 63,0);
        tracep->declQuad(c+245,"npc u_ysyx_22050598_idu_decode Bimm", false,-1, 63,0);
        tracep->declQuad(c+247,"npc u_ysyx_22050598_idu_decode Uimm", false,-1, 63,0);
        tracep->declQuad(c+249,"npc u_ysyx_22050598_idu_decode Jimm", false,-1, 63,0);
        tracep->declQuad(c+13,"npc u_ysyx_22050598_idu_decode imm", false,-1, 63,0);
        tracep->declBus(c+11,"npc u_ysyx_22050598_idu_decode alu_operand_sel_a", false,-1, 2,0);
        tracep->declBus(c+12,"npc u_ysyx_22050598_idu_decode alu_operand_sel_b", false,-1, 1,0);
        tracep->declBus(c+29,"npc u_ysyx_22050598_idu_decode ls_type", false,-1, 1,0);
        tracep->declBit(c+36,"npc u_ysyx_22050598_idu_decode rv64_inst", false,-1);
        tracep->declBit(c+251,"npc u_ysyx_22050598_idu_decode sxxiw_shamt_legl", false,-1);
        tracep->declBit(c+37,"npc u_ysyx_22050598_idu_decode sxxiw_shamt_ilgl", false,-1);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile rst", false,-1);
        tracep->declBus(c+15,"npc u_ysyx_22050598_regfile read_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"npc u_ysyx_22050598_regfile read_rs2_idx", false,-1, 4,0);
        tracep->declQuad(c+608,"npc u_ysyx_22050598_regfile read_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+610,"npc u_ysyx_22050598_regfile read_rs2_data", false,-1, 63,0);
        tracep->declBit(c+107,"npc u_ysyx_22050598_regfile write_en", false,-1);
        tracep->declBus(c+108,"npc u_ysyx_22050598_regfile write_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile write_rd_data", false,-1, 63,0);
        tracep->declQuad(c+626,"npc u_ysyx_22050598_regfile ebreak_a0", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+628+i*2,"npc u_ysyx_22050598_regfile rf_r", true,(i+0), 63,0);}}
        tracep->declBus(c+252,"npc u_ysyx_22050598_regfile rf_wen", false,-1, 31,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+253,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+254,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+254,"npc u_ysyx_22050598_regfile regfile[1] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+256,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+257,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+257,"npc u_ysyx_22050598_regfile regfile[2] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+259,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+260,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+260,"npc u_ysyx_22050598_regfile regfile[3] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+262,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+263,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+263,"npc u_ysyx_22050598_regfile regfile[4] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+265,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+266,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+266,"npc u_ysyx_22050598_regfile regfile[5] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+268,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+269,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+269,"npc u_ysyx_22050598_regfile regfile[6] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+271,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+272,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+272,"npc u_ysyx_22050598_regfile regfile[7] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+274,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+275,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+275,"npc u_ysyx_22050598_regfile regfile[8] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+277,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+278,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+278,"npc u_ysyx_22050598_regfile regfile[9] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+280,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+281,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+281,"npc u_ysyx_22050598_regfile regfile[10] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+283,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+284,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+284,"npc u_ysyx_22050598_regfile regfile[11] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+286,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+287,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+287,"npc u_ysyx_22050598_regfile regfile[12] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+289,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+290,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+290,"npc u_ysyx_22050598_regfile regfile[13] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+292,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+293,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+293,"npc u_ysyx_22050598_regfile regfile[14] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+295,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+296,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+296,"npc u_ysyx_22050598_regfile regfile[15] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+298,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+299,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+299,"npc u_ysyx_22050598_regfile regfile[16] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+301,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+302,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+302,"npc u_ysyx_22050598_regfile regfile[17] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+304,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+305,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+305,"npc u_ysyx_22050598_regfile regfile[18] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+307,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+308,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+308,"npc u_ysyx_22050598_regfile regfile[19] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+310,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+311,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+311,"npc u_ysyx_22050598_regfile regfile[20] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+313,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+314,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+314,"npc u_ysyx_22050598_regfile regfile[21] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+316,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+317,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+317,"npc u_ysyx_22050598_regfile regfile[22] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+319,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+320,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+320,"npc u_ysyx_22050598_regfile regfile[23] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+322,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+323,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+323,"npc u_ysyx_22050598_regfile regfile[24] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+325,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+326,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+326,"npc u_ysyx_22050598_regfile regfile[25] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+328,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+329,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+329,"npc u_ysyx_22050598_regfile regfile[26] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+331,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+332,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+332,"npc u_ysyx_22050598_regfile regfile[27] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+334,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+335,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+335,"npc u_ysyx_22050598_regfile regfile[28] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+337,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+338,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+338,"npc u_ysyx_22050598_regfile regfile[29] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+340,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+341,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+341,"npc u_ysyx_22050598_regfile regfile[30] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+343,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr lden", false,-1);
        tracep->declQuad(c+105,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+344,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr rst_n", false,-1);
        tracep->declQuad(c+344,"npc u_ysyx_22050598_regfile regfile[31] genblk1 regfile_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+15,"npc ysyx_22050598_idu_forward id_rs1_idx", false,-1, 4,0);
        tracep->declBus(c+16,"npc ysyx_22050598_idu_forward id_rs2_idx", false,-1, 4,0);
        tracep->declBus(c+11,"npc ysyx_22050598_idu_forward alu_op_a_sel", false,-1, 2,0);
        tracep->declBus(c+12,"npc ysyx_22050598_idu_forward alu_op_b_sel", false,-1, 1,0);
        tracep->declBus(c+18,"npc ysyx_22050598_idu_forward id_rd_idx", false,-1, 4,0);
        tracep->declQuad(c+608,"npc ysyx_22050598_idu_forward rs1_data", false,-1, 63,0);
        tracep->declQuad(c+610,"npc ysyx_22050598_idu_forward rs2_data", false,-1, 63,0);
        tracep->declQuad(c+13,"npc ysyx_22050598_idu_forward id_imm", false,-1, 63,0);
        tracep->declQuad(c+7,"npc ysyx_22050598_idu_forward pc_data", false,-1, 63,0);
        tracep->declBus(c+33,"npc ysyx_22050598_idu_forward id_branch_bus", false,-1, 5,0);
        tracep->declBit(c+28,"npc ysyx_22050598_idu_forward id_inst_is_csri", false,-1);
        tracep->declBit(c+23,"npc ysyx_22050598_idu_forward id_inst_is_store", false,-1);
        tracep->declBus(c+49,"npc ysyx_22050598_idu_forward ex_rd_idx", false,-1, 4,0);
        tracep->declBit(c+50,"npc ysyx_22050598_idu_forward ex_rd_en", false,-1);
        tracep->declBit(c+74,"npc ysyx_22050598_idu_forward ex_load_en", false,-1);
        tracep->declQuad(c+79,"npc ysyx_22050598_idu_forward ex_alu_data", false,-1, 63,0);
        tracep->declBus(c+95,"npc ysyx_22050598_idu_forward mem_rd_idx", false,-1, 4,0);
        tracep->declBit(c+91,"npc ysyx_22050598_idu_forward mem_rd_en", false,-1);
        tracep->declQuad(c+103,"npc ysyx_22050598_idu_forward mem_data", false,-1, 63,0);
        tracep->declBus(c+108,"npc ysyx_22050598_idu_forward wb_rd_idx", false,-1, 4,0);
        tracep->declBit(c+107,"npc ysyx_22050598_idu_forward wb_rd_en", false,-1);
        tracep->declQuad(c+105,"npc ysyx_22050598_idu_forward wb_data", false,-1, 63,0);
        tracep->declBit(c+38,"npc ysyx_22050598_idu_forward forward_load_stall", false,-1);
        tracep->declQuad(c+612,"npc ysyx_22050598_idu_forward alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+614,"npc ysyx_22050598_idu_forward alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+616,"npc ysyx_22050598_idu_forward ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBus(c+346,"npc ysyx_22050598_idu_forward id_rs1_idx_vaild", false,-1, 4,0);
        tracep->declBus(c+347,"npc ysyx_22050598_idu_forward id_rs2_idx_vaild", false,-1, 4,0);
        tracep->declBit(c+348,"npc ysyx_22050598_idu_forward ex_rd_idx_not_zero", false,-1);
        tracep->declBit(c+349,"npc ysyx_22050598_idu_forward mem_rd_idx_not_zero", false,-1);
        tracep->declBit(c+350,"npc ysyx_22050598_idu_forward wb_rd_idx_not_zero", false,-1);
        tracep->declBit(c+351,"npc ysyx_22050598_idu_forward ex_forward_rs1", false,-1);
        tracep->declBit(c+352,"npc ysyx_22050598_idu_forward mem_forward_rs1", false,-1);
        tracep->declBit(c+353,"npc ysyx_22050598_idu_forward wb_forward_rs1", false,-1);
        tracep->declBit(c+354,"npc ysyx_22050598_idu_forward ex_forward_rs2", false,-1);
        tracep->declBit(c+355,"npc ysyx_22050598_idu_forward mem_forward_rs2", false,-1);
        tracep->declBit(c+356,"npc ysyx_22050598_idu_forward wb_forward_rs2", false,-1);
        tracep->declQuad(c+618,"npc ysyx_22050598_idu_forward forward_rs1_data", false,-1, 63,0);
        tracep->declQuad(c+692,"npc ysyx_22050598_idu_forward forward_rs2_data", false,-1, 63,0);
        tracep->declBit(c+357,"npc ysyx_22050598_idu_forward ex_load_stall_rs1", false,-1);
        tracep->declBit(c+358,"npc ysyx_22050598_idu_forward ex_load_stall_rs2", false,-1);
        tracep->declBus(c+9,"npc u_ysyx_22050598_ID_EX id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+39,"npc u_ysyx_22050598_ID_EX id_ex_inst_o", false,-1, 31,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX rst", false,-1);
        tracep->declBit(c+359,"npc u_ysyx_22050598_ID_EX id_ex_flush", false,-1);
        tracep->declBit(c+360,"npc u_ysyx_22050598_ID_EX id_ex_stall", false,-1);
        tracep->declBus(c+10,"npc u_ysyx_22050598_ID_EX id_ex_op_type", false,-1, 9,0);
        tracep->declQuad(c+612,"npc u_ysyx_22050598_ID_EX alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+614,"npc u_ysyx_22050598_ID_EX alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+7,"npc u_ysyx_22050598_ID_EX id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+616,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBus(c+18,"npc u_ysyx_22050598_ID_EX id_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+17,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en", false,-1);
        tracep->declBit(c+19,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_ebreak", false,-1);
        tracep->declBit(c+20,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_ecall", false,-1);
        tracep->declBit(c+21,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_jalr", false,-1);
        tracep->declBit(c+22,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_jal", false,-1);
        tracep->declBit(c+23,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_store", false,-1);
        tracep->declBit(c+24,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_set", false,-1);
        tracep->declBit(c+25,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_srax", false,-1);
        tracep->declBit(c+26,"npc u_ysyx_22050598_ID_EX id_ex_inst_5_shamt", false,-1);
        tracep->declBit(c+27,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_mret", false,-1);
        tracep->declBit(c+28,"npc u_ysyx_22050598_ID_EX id_inst_is_csri", false,-1);
        tracep->declBus(c+29,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus", false,-1, 1,0);
        tracep->declBit(c+30,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+31,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+32,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus", false,-1, 5,0);
        tracep->declBus(c+33,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+34,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+35,"npc u_ysyx_22050598_ID_EX id_ex_ls_req", false,-1);
        tracep->declBit(c+36,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64", false,-1);
        tracep->declBit(c+37,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal", false,-1);
        tracep->declBus(c+40,"npc u_ysyx_22050598_ID_EX id_ex_op_type_o", false,-1, 9,0);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_ID_EX alu_op_a_o", false,-1, 63,0);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_ID_EX alu_op_b_o", false,-1, 63,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_ID_EX id_ex_pc_o", false,-1, 63,0);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_o", false,-1, 63,0);
        tracep->declBus(c+49,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+50,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_o", false,-1);
        tracep->declBit(c+51,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_ebreak_o", false,-1);
        tracep->declBit(c+52,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_ecall_o", false,-1);
        tracep->declBit(c+53,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_jalr_o", false,-1);
        tracep->declBit(c+54,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_jal_o", false,-1);
        tracep->declBit(c+55,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_store_o", false,-1);
        tracep->declBit(c+56,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_set_o", false,-1);
        tracep->declBit(c+57,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_srax_o", false,-1);
        tracep->declBit(c+58,"npc u_ysyx_22050598_ID_EX id_ex_inst_5_shamt_o", false,-1);
        tracep->declBit(c+59,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_mret_o", false,-1);
        tracep->declBus(c+60,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_o", false,-1, 1,0);
        tracep->declBit(c+61,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_o", false,-1);
        tracep->declBus(c+62,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_o", false,-1, 4,0);
        tracep->declBus(c+63,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_o", false,-1, 5,0);
        tracep->declBus(c+64,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_o", false,-1, 5,0);
        tracep->declBus(c+65,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_o", false,-1, 1,0);
        tracep->declBit(c+66,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_o", false,-1);
        tracep->declBit(c+67,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_o", false,-1);
        tracep->declBit(c+68,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_o", false,-1);
        tracep->declBus(c+361,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus", false,-1, 8,0);
        tracep->declBus(c+362,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst_bus", false,-1, 8,0);
        tracep->declBus(c+363,"npc u_ysyx_22050598_ID_EX temp_id_ex_op_type", false,-1, 9,0);
        tracep->declQuad(c+620,"npc u_ysyx_22050598_ID_EX temp_alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+622,"npc u_ysyx_22050598_ID_EX temp_alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+364,"npc u_ysyx_22050598_ID_EX temp_id_ex_pc", false,-1, 63,0);
        tracep->declQuad(c+624,"npc u_ysyx_22050598_ID_EX temp_id_ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBus(c+366,"npc u_ysyx_22050598_ID_EX temp_id_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+367,"npc u_ysyx_22050598_ID_EX temp_id_ex_w_reg_en", false,-1);
        tracep->declBus(c+368,"npc u_ysyx_22050598_ID_EX temp_id_ex_ls_data_bus", false,-1, 1,0);
        tracep->declBit(c+369,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+370,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+371,"npc u_ysyx_22050598_ID_EX temp_id_ex_csr_bus", false,-1, 5,0);
        tracep->declBus(c+372,"npc u_ysyx_22050598_ID_EX temp_id_ex_branch_bus", false,-1, 5,0);
        tracep->declBus(c+373,"npc u_ysyx_22050598_ID_EX temp_id_ex_unsigned_bus", false,-1, 1,0);
        tracep->declBit(c+374,"npc u_ysyx_22050598_ID_EX temp_id_ex_ls_req", false,-1);
        tracep->declBit(c+375,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst_is_rv64", false,-1);
        tracep->declBit(c+376,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst_is_illegal", false,-1);
        tracep->declBus(c+377,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_r", false,-1, 8,0);
        tracep->declBus(c+40,"npc u_ysyx_22050598_ID_EX id_ex_op_type_r", false,-1, 9,0);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_ID_EX alu_op_a_r", false,-1, 63,0);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_ID_EX alu_op_b_r", false,-1, 63,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_ID_EX id_ex_pc_r", false,-1, 63,0);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_r", false,-1, 63,0);
        tracep->declBus(c+49,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_r", false,-1, 4,0);
        tracep->declBit(c+50,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_r", false,-1);
        tracep->declBus(c+60,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_r", false,-1, 1,0);
        tracep->declBit(c+61,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_r", false,-1);
        tracep->declBus(c+62,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_r", false,-1, 4,0);
        tracep->declBus(c+63,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_r", false,-1, 5,0);
        tracep->declBus(c+64,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_r", false,-1, 5,0);
        tracep->declBus(c+65,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_r", false,-1, 1,0);
        tracep->declBit(c+66,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_r", false,-1);
        tracep->declBit(c+67,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_r", false,-1);
        tracep->declBit(c+68,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_r", false,-1);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_en", false,-1);
        tracep->declBit(c+379,"npc u_ysyx_22050598_ID_EX id_ex_inst_btype", false,-1);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_pc_en", false,-1);
        tracep->declBit(c+380,"npc u_ysyx_22050598_ID_EX id_ex_den", false,-1);
        tracep->declBus(c+381,"npc u_ysyx_22050598_ID_EX temp_id_ex_inst", false,-1, 31,0);
        tracep->declBus(c+39,"npc u_ysyx_22050598_ID_EX id_ex_inst_r", false,-1, 31,0);
        tracep->declBus(c+722,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr lden", false,-1);
        tracep->declBus(c+362,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr dnxt", false,-1, 8,0);
        tracep->declBus(c+377,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr qout", false,-1, 8,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+377,"npc u_ysyx_22050598_ID_EX id_ex_inst_bus_dfflr qout_r", false,-1, 8,0);
        tracep->declBus(c+723,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr lden", false,-1);
        tracep->declBus(c+363,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr dnxt", false,-1, 9,0);
        tracep->declBus(c+40,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr qout", false,-1, 9,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr rst_n", false,-1);
        tracep->declBus(c+40,"npc u_ysyx_22050598_ID_EX id_ex_op_type_dfflr qout_r", false,-1, 9,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr lden", false,-1);
        tracep->declQuad(c+620,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr rst_n", false,-1);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_ID_EX alu_op_a_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr lden", false,-1);
        tracep->declQuad(c+622,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr rst_n", false,-1);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_ID_EX alu_op_b_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr lden", false,-1);
        tracep->declQuad(c+364,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr rst_n", false,-1);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_ID_EX id_ex_pc_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+380,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr lden", false,-1);
        tracep->declQuad(c+624,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr rst_n", false,-1);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_ID_EX id_ex_bs_zimm_data_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+724,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr lden", false,-1);
        tracep->declBus(c+366,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr dnxt", false,-1, 4,0);
        tracep->declBus(c+49,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr qout", false,-1, 4,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr rst_n", false,-1);
        tracep->declBus(c+49,"npc u_ysyx_22050598_ID_EX id_write_rd_idx_dfflr qout_r", false,-1, 4,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr lden", false,-1);
        tracep->declBus(c+367,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+50,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr rst_n", false,-1);
        tracep->declBus(c+50,"npc u_ysyx_22050598_ID_EX id_ex_w_reg_en_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+725,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr lden", false,-1);
        tracep->declBus(c+368,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr dnxt", false,-1, 1,0);
        tracep->declBus(c+60,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr qout", false,-1, 1,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+60,"npc u_ysyx_22050598_ID_EX id_ex_ls_data_bus_dfflr qout_r", false,-1, 1,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr lden", false,-1);
        tracep->declBus(c+369,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+61,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+61,"npc u_ysyx_22050598_ID_EX id_ex_inst_divrem_bus_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+724,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr lden", false,-1);
        tracep->declBus(c+370,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr dnxt", false,-1, 4,0);
        tracep->declBus(c+62,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr qout", false,-1, 4,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+62,"npc u_ysyx_22050598_ID_EX id_ex_inst_mul_bus_dfflr qout_r", false,-1, 4,0);
        tracep->declBus(c+726,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr lden", false,-1);
        tracep->declBus(c+371,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr dnxt", false,-1, 5,0);
        tracep->declBus(c+63,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr qout", false,-1, 5,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+63,"npc u_ysyx_22050598_ID_EX id_ex_csr_bus_dfflr qout_r", false,-1, 5,0);
        tracep->declBus(c+726,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr lden", false,-1);
        tracep->declBus(c+372,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr dnxt", false,-1, 5,0);
        tracep->declBus(c+64,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr qout", false,-1, 5,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+64,"npc u_ysyx_22050598_ID_EX id_ex_branch_bus_dfflr qout_r", false,-1, 5,0);
        tracep->declBus(c+725,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr lden", false,-1);
        tracep->declBus(c+373,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr dnxt", false,-1, 1,0);
        tracep->declBus(c+65,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr qout", false,-1, 1,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+65,"npc u_ysyx_22050598_ID_EX id_ex_unsigned_bus_dfflr qout_r", false,-1, 1,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr lden", false,-1);
        tracep->declBus(c+374,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+66,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr rst_n", false,-1);
        tracep->declBus(c+66,"npc u_ysyx_22050598_ID_EX id_ex_ls_req_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr lden", false,-1);
        tracep->declBus(c+375,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+67,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr rst_n", false,-1);
        tracep->declBus(c+67,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_rv64_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr lden", false,-1);
        tracep->declBus(c+376,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+68,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr rst_n", false,-1);
        tracep->declBus(c+68,"npc u_ysyx_22050598_ID_EX id_ex_inst_is_illegal_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+721,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+378,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr lden", false,-1);
        tracep->declBus(c+381,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr dnxt", false,-1, 31,0);
        tracep->declBus(c+39,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr qout", false,-1, 31,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr rst_n", false,-1);
        tracep->declBus(c+39,"npc u_ysyx_22050598_ID_EX id_ex_inst_dfflr qout_r", false,-1, 31,0);
        tracep->declBus(c+40,"npc u_ysyx_22050598_exu_alu ex_alu_op_type", false,-1, 9,0);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_exu_alu ex_alu_op_a", false,-1, 63,0);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_exu_alu ex_alu_op_b", false,-1, 63,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_exu_alu ex_pc", false,-1, 63,0);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_exu_alu ex_bs_zimm_data", false,-1, 63,0);
        tracep->declBit(c+50,"npc u_ysyx_22050598_exu_alu ex_write_reg_en", false,-1);
        tracep->declBit(c+53,"npc u_ysyx_22050598_exu_alu ex_inst_is_jalr", false,-1);
        tracep->declBit(c+54,"npc u_ysyx_22050598_exu_alu ex_inst_is_jal", false,-1);
        tracep->declBit(c+55,"npc u_ysyx_22050598_exu_alu ex_inst_is_store", false,-1);
        tracep->declBit(c+56,"npc u_ysyx_22050598_exu_alu ex_inst_is_set", false,-1);
        tracep->declBit(c+57,"npc u_ysyx_22050598_exu_alu ex_inst_is_srax", false,-1);
        tracep->declBit(c+58,"npc u_ysyx_22050598_exu_alu ex_inst_5_shamt", false,-1);
        tracep->declBit(c+61,"npc u_ysyx_22050598_exu_alu ex_inst_divrem_bus", false,-1);
        tracep->declBus(c+62,"npc u_ysyx_22050598_exu_alu ex_inst_mul_bus", false,-1, 4,0);
        tracep->declBus(c+64,"npc u_ysyx_22050598_exu_alu ex_branch_bus", false,-1, 5,0);
        tracep->declBit(c+382,"npc u_ysyx_22050598_exu_alu ex_unsigned_bus", false,-1);
        tracep->declBit(c+66,"npc u_ysyx_22050598_exu_alu ex_ls_req", false,-1);
        tracep->declBit(c+67,"npc u_ysyx_22050598_exu_alu ex_inst_is_rv64", false,-1);
        tracep->declQuad(c+69,"npc u_ysyx_22050598_exu_alu ex_alu_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+50,"npc u_ysyx_22050598_exu_alu ex_alu_rd_data_en", false,-1);
        tracep->declQuad(c+71,"npc u_ysyx_22050598_exu_alu ex_alu_pc_o", false,-1, 63,0);
        tracep->declBit(c+73,"npc u_ysyx_22050598_exu_alu ex_alu_pc_en_o", false,-1);
        tracep->declBit(c+74,"npc u_ysyx_22050598_exu_alu ex_load_en_o", false,-1);
        tracep->declBit(c+55,"npc u_ysyx_22050598_exu_alu ex_store_en_o", false,-1);
        tracep->declQuad(c+75,"npc u_ysyx_22050598_exu_alu ex_store_data_o", false,-1, 63,0);
        tracep->declBit(c+383,"npc u_ysyx_22050598_exu_alu add_or_sub", false,-1);
        tracep->declBit(c+384,"npc u_ysyx_22050598_exu_alu add_sub_cin", false,-1);
        tracep->declArray(c+385,"npc u_ysyx_22050598_exu_alu adder_op1", false,-1, 64,0);
        tracep->declArray(c+388,"npc u_ysyx_22050598_exu_alu adder_op2", false,-1, 64,0);
        tracep->declArray(c+391,"npc u_ysyx_22050598_exu_alu add_sub_op_a", false,-1, 64,0);
        tracep->declArray(c+394,"npc u_ysyx_22050598_exu_alu add_sub_op_b", false,-1, 64,0);
        tracep->declArray(c+391,"npc u_ysyx_22050598_exu_alu add_sub_in_a", false,-1, 64,0);
        tracep->declArray(c+397,"npc u_ysyx_22050598_exu_alu add_sub_in_b", false,-1, 64,0);
        tracep->declArray(c+400,"npc u_ysyx_22050598_exu_alu sum_sub_data", false,-1, 64,0);
        tracep->declQuad(c+403,"npc u_ysyx_22050598_exu_alu sum_sub_w_result", false,-1, 63,0);
        tracep->declQuad(c+405,"npc u_ysyx_22050598_exu_alu sum_sub_result", false,-1, 63,0);
        tracep->declBus(c+407,"npc u_ysyx_22050598_exu_alu inst_rv64_a_op", false,-1, 31,0);
        tracep->declBus(c+408,"npc u_ysyx_22050598_exu_alu inst_rv64_b_op", false,-1, 31,0);
        tracep->declQuad(c+409,"npc u_ysyx_22050598_exu_alu inst_rv32_a_op", false,-1, 63,0);
        tracep->declQuad(c+411,"npc u_ysyx_22050598_exu_alu inst_rv32_b_op", false,-1, 63,0);
        tracep->declQuad(c+413,"npc u_ysyx_22050598_exu_alu mul_op_a", false,-1, 63,0);
        tracep->declQuad(c+415,"npc u_ysyx_22050598_exu_alu mul_op_b", false,-1, 63,0);
        tracep->declArray(c+417,"npc u_ysyx_22050598_exu_alu mulu_res", false,-1, 127,0);
        tracep->declArray(c+421,"npc u_ysyx_22050598_exu_alu muls_res", false,-1, 127,0);
        tracep->declArray(c+425,"npc u_ysyx_22050598_exu_alu mulsu_res", false,-1, 127,0);
        tracep->declBus(c+429,"npc u_ysyx_22050598_exu_alu mulw_op_a", false,-1, 31,0);
        tracep->declBus(c+430,"npc u_ysyx_22050598_exu_alu mulw_op_b", false,-1, 31,0);
        tracep->declQuad(c+431,"npc u_ysyx_22050598_exu_alu temp_mulw_res", false,-1, 63,0);
        tracep->declQuad(c+433,"npc u_ysyx_22050598_exu_alu mulw_res", false,-1, 63,0);
        tracep->declQuad(c+435,"npc u_ysyx_22050598_exu_alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+437,"npc u_ysyx_22050598_exu_alu div_op_a", false,-1, 63,0);
        tracep->declQuad(c+439,"npc u_ysyx_22050598_exu_alu div_op_b", false,-1, 63,0);
        tracep->declQuad(c+441,"npc u_ysyx_22050598_exu_alu divu_res", false,-1, 63,0);
        tracep->declQuad(c+443,"npc u_ysyx_22050598_exu_alu div_res", false,-1, 63,0);
        tracep->declBus(c+445,"npc u_ysyx_22050598_exu_alu divw_op_a", false,-1, 31,0);
        tracep->declBus(c+446,"npc u_ysyx_22050598_exu_alu divw_op_b", false,-1, 31,0);
        tracep->declBus(c+447,"npc u_ysyx_22050598_exu_alu temp_divwu_res", false,-1, 31,0);
        tracep->declBus(c+448,"npc u_ysyx_22050598_exu_alu temp_divw_res", false,-1, 31,0);
        tracep->declQuad(c+449,"npc u_ysyx_22050598_exu_alu divwu_res", false,-1, 63,0);
        tracep->declQuad(c+451,"npc u_ysyx_22050598_exu_alu divw_res", false,-1, 63,0);
        tracep->declQuad(c+453,"npc u_ysyx_22050598_exu_alu div_result", false,-1, 63,0);
        tracep->declQuad(c+455,"npc u_ysyx_22050598_exu_alu mod_op_a", false,-1, 63,0);
        tracep->declQuad(c+457,"npc u_ysyx_22050598_exu_alu mod_op_b", false,-1, 63,0);
        tracep->declQuad(c+459,"npc u_ysyx_22050598_exu_alu remu_mod", false,-1, 63,0);
        tracep->declQuad(c+461,"npc u_ysyx_22050598_exu_alu rem_mod", false,-1, 63,0);
        tracep->declBus(c+463,"npc u_ysyx_22050598_exu_alu modw_op_a", false,-1, 31,0);
        tracep->declBus(c+464,"npc u_ysyx_22050598_exu_alu modw_op_b", false,-1, 31,0);
        tracep->declBus(c+465,"npc u_ysyx_22050598_exu_alu temp_remwu_mod", false,-1, 31,0);
        tracep->declBus(c+466,"npc u_ysyx_22050598_exu_alu temp_remw_mod", false,-1, 31,0);
        tracep->declQuad(c+467,"npc u_ysyx_22050598_exu_alu remwu_mod", false,-1, 63,0);
        tracep->declQuad(c+469,"npc u_ysyx_22050598_exu_alu remw_mod", false,-1, 63,0);
        tracep->declQuad(c+471,"npc u_ysyx_22050598_exu_alu mod_result", false,-1, 63,0);
        tracep->declBit(c+473,"npc u_ysyx_22050598_exu_alu alu_op_is_shift", false,-1);
        tracep->declQuad(c+474,"npc u_ysyx_22050598_exu_alu temp_shift_op_a", false,-1, 63,0);
        tracep->declBus(c+476,"npc u_ysyx_22050598_exu_alu temp_shift_op_b_6", false,-1, 5,0);
        tracep->declBus(c+477,"npc u_ysyx_22050598_exu_alu temp_shift_op_b_5", false,-1, 4,0);
        tracep->declQuad(c+478,"npc u_ysyx_22050598_exu_alu temp_shift_op_a_64", false,-1, 63,0);
        tracep->declBus(c+480,"npc u_ysyx_22050598_exu_alu temp_shift_op_a_32", false,-1, 31,0);
        tracep->declArray(c+481,"npc u_ysyx_22050598_exu_alu shift_op_a_32", false,-1, 64,0);
        tracep->declArray(c+484,"npc u_ysyx_22050598_exu_alu shift_op_a_64", false,-1, 64,0);
        tracep->declArray(c+487,"npc u_ysyx_22050598_exu_alu shift_op_a", false,-1, 64,0);
        tracep->declBus(c+490,"npc u_ysyx_22050598_exu_alu shift_op_b", false,-1, 5,0);
        tracep->declArray(c+491,"npc u_ysyx_22050598_exu_alu temp_shift_result", false,-1, 64,0);
        tracep->declBus(c+494,"npc u_ysyx_22050598_exu_alu shift_result_32_rev", false,-1, 31,0);
        tracep->declQuad(c+495,"npc u_ysyx_22050598_exu_alu shift_result_64_rev", false,-1, 63,0);
        tracep->declQuad(c+497,"npc u_ysyx_22050598_exu_alu shift_result", false,-1, 63,0);
        tracep->declQuad(c+499,"npc u_ysyx_22050598_exu_alu or_op_a", false,-1, 63,0);
        tracep->declQuad(c+501,"npc u_ysyx_22050598_exu_alu or_op_b", false,-1, 63,0);
        tracep->declQuad(c+503,"npc u_ysyx_22050598_exu_alu or_result", false,-1, 63,0);
        tracep->declQuad(c+505,"npc u_ysyx_22050598_exu_alu and_op_a", false,-1, 63,0);
        tracep->declQuad(c+507,"npc u_ysyx_22050598_exu_alu and_op_b", false,-1, 63,0);
        tracep->declQuad(c+509,"npc u_ysyx_22050598_exu_alu and_result", false,-1, 63,0);
        tracep->declQuad(c+511,"npc u_ysyx_22050598_exu_alu xor_op_a", false,-1, 63,0);
        tracep->declQuad(c+513,"npc u_ysyx_22050598_exu_alu xor_op_b", false,-1, 63,0);
        tracep->declQuad(c+515,"npc u_ysyx_22050598_exu_alu xor_result", false,-1, 63,0);
        tracep->declBit(c+517,"npc u_ysyx_22050598_exu_alu ex_inst_brach_en", false,-1);
        tracep->declBit(c+518,"npc u_ysyx_22050598_exu_alu branch_cmp", false,-1);
        tracep->declBit(c+519,"npc u_ysyx_22050598_exu_alu branch_cmp_zero", false,-1);
        tracep->declBit(c+520,"npc u_ysyx_22050598_exu_alu inst_beq_en", false,-1);
        tracep->declBit(c+521,"npc u_ysyx_22050598_exu_alu inst_bne_en", false,-1);
        tracep->declBit(c+522,"npc u_ysyx_22050598_exu_alu inst_blt_en", false,-1);
        tracep->declBit(c+523,"npc u_ysyx_22050598_exu_alu inst_bge_en", false,-1);
        tracep->declBit(c+524,"npc u_ysyx_22050598_exu_alu inst_bltu_en", false,-1);
        tracep->declBit(c+525,"npc u_ysyx_22050598_exu_alu inst_bgeu_en", false,-1);
        tracep->declBit(c+526,"npc u_ysyx_22050598_exu_alu branch_en", false,-1);
        tracep->declBit(c+527,"npc u_ysyx_22050598_exu_alu branch_not_jump", false,-1);
        tracep->declBit(c+528,"npc u_ysyx_22050598_exu_alu ex_inst_jump_en", false,-1);
        tracep->declQuad(c+529,"npc u_ysyx_22050598_exu_alu pc_op_a", false,-1, 63,0);
        tracep->declQuad(c+531,"npc u_ysyx_22050598_exu_alu pc_op_b", false,-1, 63,0);
        tracep->declQuad(c+533,"npc u_ysyx_22050598_exu_alu jump_brach_pc", false,-1, 63,0);
        tracep->declQuad(c+535,"npc u_ysyx_22050598_exu_alu ex_jump_pc_res", false,-1, 63,0);
        tracep->declQuad(c+537,"npc u_ysyx_22050598_exu_alu ex_temp_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_exu_csr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_exu_csr rst", false,-1);
        tracep->declBus(c+63,"npc u_ysyx_22050598_exu_csr ex_csr_bus_i", false,-1, 5,0);
        tracep->declQuad(c+43,"npc u_ysyx_22050598_exu_csr csr_imm_i", false,-1, 63,0);
        tracep->declQuad(c+41,"npc u_ysyx_22050598_exu_csr csr_reg_i", false,-1, 63,0);
        tracep->declQuad(c+47,"npc u_ysyx_22050598_exu_csr csr_zimm_i", false,-1, 63,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_exu_csr csr_ecall_pc", false,-1, 63,0);
        tracep->declBit(c+59,"npc u_ysyx_22050598_exu_csr ex_inst_is_mret_i", false,-1);
        tracep->declBit(c+52,"npc u_ysyx_22050598_exu_csr ex_inst_is_ecall_i", false,-1);
        tracep->declQuad(c+77,"npc u_ysyx_22050598_exu_csr csr_rd_pc_data", false,-1, 63,0);
        tracep->declQuad(c+539,"npc u_ysyx_22050598_exu_csr csr_mstatus_data", false,-1, 63,0);
        tracep->declQuad(c+541,"npc u_ysyx_22050598_exu_csr csr_mtvec_data", false,-1, 63,0);
        tracep->declQuad(c+543,"npc u_ysyx_22050598_exu_csr csr_mepc_data", false,-1, 63,0);
        tracep->declQuad(c+545,"npc u_ysyx_22050598_exu_csr csr_mcause_data", false,-1, 63,0);
        tracep->declQuad(c+547,"npc u_ysyx_22050598_exu_csr csr_mstatus_data_r", false,-1, 63,0);
        tracep->declQuad(c+549,"npc u_ysyx_22050598_exu_csr csr_mtvec_data_r", false,-1, 63,0);
        tracep->declQuad(c+551,"npc u_ysyx_22050598_exu_csr csr_mepc_data_r", false,-1, 63,0);
        tracep->declQuad(c+553,"npc u_ysyx_22050598_exu_csr csr_mcause_data_r", false,-1, 63,0);
        tracep->declBit(c+555,"npc u_ysyx_22050598_exu_csr mstatus_r_ena", false,-1);
        tracep->declBit(c+556,"npc u_ysyx_22050598_exu_csr mtvec_r_ena", false,-1);
        tracep->declBit(c+557,"npc u_ysyx_22050598_exu_csr mepc_r_ena", false,-1);
        tracep->declBit(c+558,"npc u_ysyx_22050598_exu_csr mcause_r_ena", false,-1);
        tracep->declBit(c+559,"npc u_ysyx_22050598_exu_csr csr_ena", false,-1);
        tracep->declQuad(c+560,"npc u_ysyx_22050598_exu_csr read_csr_data", false,-1, 63,0);
        tracep->declQuad(c+562,"npc u_ysyx_22050598_exu_csr write_csr_data", false,-1, 63,0);
        tracep->declBit(c+564,"npc u_ysyx_22050598_exu_csr csr_imm_is_0x300", false,-1);
        tracep->declBit(c+565,"npc u_ysyx_22050598_exu_csr csr_imm_is_0x305", false,-1);
        tracep->declBit(c+566,"npc u_ysyx_22050598_exu_csr csr_imm_is_0x341", false,-1);
        tracep->declBit(c+567,"npc u_ysyx_22050598_exu_csr csr_imm_is_0x342", false,-1);
        tracep->declBit(c+555,"npc u_ysyx_22050598_exu_csr csr_mstatus_ena", false,-1);
        tracep->declBit(c+556,"npc u_ysyx_22050598_exu_csr csr_mtvec_ena", false,-1);
        tracep->declBit(c+568,"npc u_ysyx_22050598_exu_csr csr_mepc_ena", false,-1);
        tracep->declBit(c+569,"npc u_ysyx_22050598_exu_csr csr_mcause_ena", false,-1);
        tracep->declBit(c+570,"npc u_ysyx_22050598_exu_csr write_csr_or", false,-1);
        tracep->declQuad(c+571,"npc u_ysyx_22050598_exu_csr write_csr_or_data1", false,-1, 63,0);
        tracep->declQuad(c+573,"npc u_ysyx_22050598_exu_csr write_csr_or_data2", false,-1, 63,0);
        tracep->declQuad(c+575,"npc u_ysyx_22050598_exu_csr write_csr_or_data", false,-1, 63,0);
        tracep->declBit(c+577,"npc u_ysyx_22050598_exu_csr write_csr_self", false,-1);
        tracep->declQuad(c+578,"npc u_ysyx_22050598_exu_csr write_csr_self_data", false,-1, 63,0);
        tracep->declBit(c+580,"npc u_ysyx_22050598_exu_csr write_csr_and", false,-1);
        tracep->declQuad(c+581,"npc u_ysyx_22050598_exu_csr write_csr_and_data1", false,-1, 63,0);
        tracep->declQuad(c+583,"npc u_ysyx_22050598_exu_csr write_csr_and_data2", false,-1, 63,0);
        tracep->declQuad(c+585,"npc u_ysyx_22050598_exu_csr write_csr_and_data", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_exu_csr mstatus_dfflr DW", false,-1, 31,0);
        tracep->declQuad(c+727,"npc u_ysyx_22050598_exu_csr mstatus_dfflr RESET_VAL", false,-1, 63,0);
        tracep->declBit(c+555,"npc u_ysyx_22050598_exu_csr mstatus_dfflr lden", false,-1);
        tracep->declQuad(c+539,"npc u_ysyx_22050598_exu_csr mstatus_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+547,"npc u_ysyx_22050598_exu_csr mstatus_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_exu_csr mstatus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_exu_csr mstatus_dfflr rst_n", false,-1);
        tracep->declQuad(c+547,"npc u_ysyx_22050598_exu_csr mstatus_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_exu_csr mtvec_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+556,"npc u_ysyx_22050598_exu_csr mtvec_dfflr lden", false,-1);
        tracep->declQuad(c+541,"npc u_ysyx_22050598_exu_csr mtvec_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+549,"npc u_ysyx_22050598_exu_csr mtvec_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_exu_csr mtvec_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_exu_csr mtvec_dfflr rst_n", false,-1);
        tracep->declQuad(c+549,"npc u_ysyx_22050598_exu_csr mtvec_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_exu_csr mepc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+557,"npc u_ysyx_22050598_exu_csr mepc_dfflr lden", false,-1);
        tracep->declQuad(c+543,"npc u_ysyx_22050598_exu_csr mepc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+551,"npc u_ysyx_22050598_exu_csr mepc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_exu_csr mepc_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_exu_csr mepc_dfflr rst_n", false,-1);
        tracep->declQuad(c+551,"npc u_ysyx_22050598_exu_csr mepc_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_exu_csr mcause_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+558,"npc u_ysyx_22050598_exu_csr mcause_dfflr lden", false,-1);
        tracep->declQuad(c+545,"npc u_ysyx_22050598_exu_csr mcause_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+553,"npc u_ysyx_22050598_exu_csr mcause_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_exu_csr mcause_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_exu_csr mcause_dfflr rst_n", false,-1);
        tracep->declQuad(c+553,"npc u_ysyx_22050598_exu_csr mcause_dfflr qout_r", false,-1, 63,0);
        tracep->declQuad(c+77,"npc u_ysyx_22050598_exu_rd_pc_mux csr_rd_pc_data", false,-1, 63,0);
        tracep->declQuad(c+69,"npc u_ysyx_22050598_exu_rd_pc_mux alu_rd_data", false,-1, 63,0);
        tracep->declQuad(c+71,"npc u_ysyx_22050598_exu_rd_pc_mux alu_pc_data", false,-1, 63,0);
        tracep->declBit(c+559,"npc u_ysyx_22050598_exu_rd_pc_mux csr_rd_en", false,-1);
        tracep->declBit(c+73,"npc u_ysyx_22050598_exu_rd_pc_mux alu_pc_en", false,-1);
        tracep->declBit(c+59,"npc u_ysyx_22050598_exu_rd_pc_mux csr_mret", false,-1);
        tracep->declBit(c+52,"npc u_ysyx_22050598_exu_rd_pc_mux csr_ecall", false,-1);
        tracep->declBit(c+81,"npc u_ysyx_22050598_exu_rd_pc_mux ex_pc_data_ena_o", false,-1);
        tracep->declQuad(c+79,"npc u_ysyx_22050598_exu_rd_pc_mux ex_rd_data_o", false,-1, 63,0);
        tracep->declQuad(c+82,"npc u_ysyx_22050598_exu_rd_pc_mux ex_pc_data_o", false,-1, 63,0);
        tracep->declBit(c+587,"npc u_ysyx_22050598_exu_rd_pc_mux csr_pc_en", false,-1);
        tracep->declBus(c+39,"npc u_ysyx_22050598_EX_LS ex_ls_inst", false,-1, 31,0);
        tracep->declBus(c+84,"npc u_ysyx_22050598_EX_LS ex_ls_inst_o", false,-1, 31,0);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_EX_LS ex_ls_pc", false,-1, 63,0);
        tracep->declQuad(c+85,"npc u_ysyx_22050598_EX_LS ex_ls_pc_o", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS rst", false,-1);
        tracep->declBit(c+588,"npc u_ysyx_22050598_EX_LS ex_ls_stall", false,-1);
        tracep->declQuad(c+79,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data", false,-1, 63,0);
        tracep->declBit(c+50,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_data_en", false,-1);
        tracep->declBit(c+74,"npc u_ysyx_22050598_EX_LS ex_ls_load_en", false,-1);
        tracep->declBit(c+55,"npc u_ysyx_22050598_EX_LS ex_ls_store_en", false,-1);
        tracep->declQuad(c+75,"npc u_ysyx_22050598_EX_LS ex_ls_store_data", false,-1, 63,0);
        tracep->declBus(c+60,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus", false,-1, 1,0);
        tracep->declBus(c+49,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx", false,-1, 4,0);
        tracep->declBit(c+589,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned", false,-1);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_o", false,-1, 63,0);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_o", false,-1, 63,0);
        tracep->declBit(c+91,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_data_en_o", false,-1);
        tracep->declBit(c+92,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_o", false,-1);
        tracep->declBit(c+93,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_o", false,-1);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_type_o", false,-1, 1,0);
        tracep->declBus(c+95,"npc u_ysyx_22050598_EX_LS ex_ls_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+97,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_o", false,-1);
        tracep->declBit(c+51,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak", false,-1);
        tracep->declBit(c+96,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_o", false,-1);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_r", false,-1, 63,0);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_r", false,-1, 63,0);
        tracep->declBit(c+91,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_data_en_r", false,-1);
        tracep->declBit(c+92,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_r", false,-1);
        tracep->declBit(c+93,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_r", false,-1);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_r", false,-1, 1,0);
        tracep->declBus(c+95,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_r", false,-1, 4,0);
        tracep->declBit(c+96,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_r", false,-1);
        tracep->declBit(c+97,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_r", false,-1);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_en", false,-1);
        tracep->declBit(c+591,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_en", false,-1);
        tracep->declBus(c+84,"npc u_ysyx_22050598_EX_LS ex_ls_inst_r", false,-1, 31,0);
        tracep->declQuad(c+85,"npc u_ysyx_22050598_EX_LS ex_ls_pc_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr lden", false,-1);
        tracep->declQuad(c+79,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr rst_n", false,-1);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_EX_LS ex_ls_alu_rd_ls_data_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr lden", false,-1);
        tracep->declBus(c+50,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+91,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr rst_n", false,-1);
        tracep->declBus(c+91,"npc u_ysyx_22050598_EX_LS ex_ls_rd_data_en_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr lden", false,-1);
        tracep->declBus(c+74,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+92,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr rst_n", false,-1);
        tracep->declBus(c+92,"npc u_ysyx_22050598_EX_LS ex_ls_load_en_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr lden", false,-1);
        tracep->declBus(c+55,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+93,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr rst_n", false,-1);
        tracep->declBus(c+93,"npc u_ysyx_22050598_EX_LS ex_ls_store_en_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+725,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr lden", false,-1);
        tracep->declBus(c+60,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr dnxt", false,-1, 1,0);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr qout", false,-1, 1,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr rst_n", false,-1);
        tracep->declBus(c+94,"npc u_ysyx_22050598_EX_LS ex_ls_ls_data_bus_dfflr qout_r", false,-1, 1,0);
        tracep->declBus(c+724,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr lden", false,-1);
        tracep->declBus(c+49,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr dnxt", false,-1, 4,0);
        tracep->declBus(c+95,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr qout", false,-1, 4,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr rst_n", false,-1);
        tracep->declBus(c+95,"npc u_ysyx_22050598_EX_LS ex_ls_write_rd_idx_dfflr qout_r", false,-1, 4,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+591,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr lden", false,-1);
        tracep->declQuad(c+75,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr rst_n", false,-1);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_EX_LS ex_ls_store_data_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr lden", false,-1);
        tracep->declBus(c+589,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+97,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr rst_n", false,-1);
        tracep->declBus(c+97,"npc u_ysyx_22050598_EX_LS ex_ls_load_unsigned_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+717,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr lden", false,-1);
        tracep->declBus(c+51,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+96,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr rst_n", false,-1);
        tracep->declBus(c+96,"npc u_ysyx_22050598_EX_LS ex_ls_inst_is_ebreak_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+721,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr lden", false,-1);
        tracep->declBus(c+39,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr dnxt", false,-1, 31,0);
        tracep->declBus(c+84,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr qout", false,-1, 31,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr rst_n", false,-1);
        tracep->declBus(c+84,"npc u_ysyx_22050598_EX_LS ex_ls_inst_dfflr qout_r", false,-1, 31,0);
        tracep->declBus(c+714,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+590,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr lden", false,-1);
        tracep->declQuad(c+45,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+85,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr rst_n", false,-1);
        tracep->declQuad(c+85,"npc u_ysyx_22050598_EX_LS ex_ls_pc_dfflr qout_r", false,-1, 63,0);
        tracep->declQuad(c+89,"npc u_ysyx_22050598_lsu ls_store_data", false,-1, 63,0);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_lsu ls_loc", false,-1, 63,0);
        tracep->declBit(c+92,"npc u_ysyx_22050598_lsu load_en", false,-1);
        tracep->declBit(c+93,"npc u_ysyx_22050598_lsu store_en", false,-1);
        tracep->declBus(c+94,"npc u_ysyx_22050598_lsu ls_type", false,-1, 1,0);
        tracep->declBit(c+97,"npc u_ysyx_22050598_lsu load_unsigned", false,-1);
        tracep->declQuad(c+101,"npc u_ysyx_22050598_lsu load_data_o", false,-1, 63,0);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_lsu raddr", false,-1, 63,0);
        tracep->declQuad(c+592,"npc u_ysyx_22050598_lsu rdata", false,-1, 63,0);
        tracep->declQuad(c+87,"npc u_ysyx_22050598_lsu waddr", false,-1, 63,0);
        tracep->declQuad(c+594,"npc u_ysyx_22050598_lsu wdata", false,-1, 63,0);
        tracep->declBus(c+596,"npc u_ysyx_22050598_lsu rlen", false,-1, 7,0);
        tracep->declBus(c+596,"npc u_ysyx_22050598_lsu wlen", false,-1, 7,0);
        tracep->declBit(c+597,"npc u_ysyx_22050598_lsu size_b", false,-1);
        tracep->declBit(c+598,"npc u_ysyx_22050598_lsu size_hw", false,-1);
        tracep->declBit(c+599,"npc u_ysyx_22050598_lsu size_w", false,-1);
        tracep->declBit(c+600,"npc u_ysyx_22050598_lsu size_dw", false,-1);
        tracep->declQuad(c+87,"npc ysyx_22050598_lsu_rd_mux ls_alu_rd_data", false,-1, 63,0);
        tracep->declQuad(c+101,"npc ysyx_22050598_lsu_rd_mux ls_lsu_rd_data", false,-1, 63,0);
        tracep->declBit(c+92,"npc ysyx_22050598_lsu_rd_mux ls_load_en", false,-1);
        tracep->declQuad(c+103,"npc ysyx_22050598_lsu_rd_mux ls_rd_data", false,-1, 63,0);
        tracep->declBus(c+84,"npc ysyx_22050598_LS_WB ls_wb_inst", false,-1, 31,0);
        tracep->declBus(c+98,"npc ysyx_22050598_LS_WB ls_wb_inst_o", false,-1, 31,0);
        tracep->declQuad(c+85,"npc ysyx_22050598_LS_WB ls_wb_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"npc ysyx_22050598_LS_WB ls_wb_pc_o", false,-1, 63,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB rst", false,-1);
        tracep->declBit(c+601,"npc ysyx_22050598_LS_WB ls_wb_stall", false,-1);
        tracep->declQuad(c+103,"npc ysyx_22050598_LS_WB ls_wb_rd_data", false,-1, 63,0);
        tracep->declBit(c+91,"npc ysyx_22050598_LS_WB ls_wb_rd_en", false,-1);
        tracep->declBus(c+95,"npc ysyx_22050598_LS_WB ls_wb_rd_idx", false,-1, 4,0);
        tracep->declBit(c+96,"npc ysyx_22050598_LS_WB ls_wb_inst_is_ebreak", false,-1);
        tracep->declQuad(c+105,"npc ysyx_22050598_LS_WB ls_wb_rd_data_o", false,-1, 63,0);
        tracep->declBit(c+107,"npc ysyx_22050598_LS_WB ls_wb_rd_en_o", false,-1);
        tracep->declBus(c+108,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_o", false,-1, 4,0);
        tracep->declBit(c+109,"npc ysyx_22050598_LS_WB ls_wb_inst_is_ebreak_o", false,-1);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_en", false,-1);
        tracep->declQuad(c+105,"npc ysyx_22050598_LS_WB ls_wb_rd_data_r", false,-1, 63,0);
        tracep->declBit(c+107,"npc ysyx_22050598_LS_WB ls_wb_rd_en_r", false,-1);
        tracep->declBus(c+108,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_r", false,-1, 4,0);
        tracep->declBit(c+109,"npc ysyx_22050598_LS_WB ls_wb_inst_is_ebreak_r", false,-1);
        tracep->declBus(c+98,"npc ysyx_22050598_LS_WB ls_wb_inst_r", false,-1, 31,0);
        tracep->declQuad(c+99,"npc ysyx_22050598_LS_WB ls_wb_pc_r", false,-1, 63,0);
        tracep->declBus(c+714,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr lden", false,-1);
        tracep->declQuad(c+103,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+105,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr rst_n", false,-1);
        tracep->declQuad(c+105,"npc ysyx_22050598_LS_WB ls_wb_rd_data_dfflr qout_r", false,-1, 63,0);
        tracep->declBus(c+717,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr lden", false,-1);
        tracep->declBus(c+91,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+107,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr rst_n", false,-1);
        tracep->declBus(c+107,"npc ysyx_22050598_LS_WB ls_wb_rd_en_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+724,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr lden", false,-1);
        tracep->declBus(c+95,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr dnxt", false,-1, 4,0);
        tracep->declBus(c+108,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr qout", false,-1, 4,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr rst_n", false,-1);
        tracep->declBus(c+108,"npc ysyx_22050598_LS_WB ls_wb_rd_idx_dfflr qout_r", false,-1, 4,0);
        tracep->declBus(c+717,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr lden", false,-1);
        tracep->declBus(c+96,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr dnxt", false,-1, 0,0);
        tracep->declBus(c+109,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr qout", false,-1, 0,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr rst_n", false,-1);
        tracep->declBus(c+109,"npc ysyx_22050598_LS_WB ls_wb_ebreak_dfflr qout_r", false,-1, 0,0);
        tracep->declBus(c+721,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr lden", false,-1);
        tracep->declBus(c+84,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr dnxt", false,-1, 31,0);
        tracep->declBus(c+98,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr qout", false,-1, 31,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr rst_n", false,-1);
        tracep->declBus(c+98,"npc ysyx_22050598_LS_WB ls_wb_inst_dfflr qout_r", false,-1, 31,0);
        tracep->declBus(c+714,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr DW", false,-1, 31,0);
        tracep->declBit(c+602,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr lden", false,-1);
        tracep->declQuad(c+85,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr dnxt", false,-1, 63,0);
        tracep->declQuad(c+99,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr qout", false,-1, 63,0);
        tracep->declBit(c+709,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr clk", false,-1);
        tracep->declBit(c+710,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr rst_n", false,-1);
        tracep->declQuad(c+99,"npc ysyx_22050598_LS_WB ls_wb_pc_dfflr qout_r", false,-1, 63,0);
        tracep->declBit(c+109,"npc u_ysyx_22050598_EBREAK ebreak_flag", false,-1);
        tracep->declQuad(c+626,"npc u_ysyx_22050598_EBREAK ebreak_a0", false,-1, 63,0);
        tracep->declQuad(c+82,"npc ysyx_22050598_pipeline_ctrl ex_pc_data", false,-1, 63,0);
        tracep->declBit(c+81,"npc ysyx_22050598_pipeline_ctrl ex_pc_ena", false,-1);
        tracep->declQuad(c+7,"npc ysyx_22050598_pipeline_ctrl id_pc_data", false,-1, 63,0);
        tracep->declBus(c+110,"npc ysyx_22050598_pipeline_ctrl pipeline_flush", false,-1, 2,0);
        tracep->declBit(c+38,"npc ysyx_22050598_pipeline_ctrl forward_load_stall", false,-1);
        tracep->declBus(c+111,"npc ysyx_22050598_pipeline_ctrl pipeline_stall", false,-1, 4,0);
        tracep->declQuad(c+603,"npc ysyx_22050598_pipeline_ctrl temp_ex_pc_data", false,-1, 63,0);
        tracep->declQuad(c+605,"npc ysyx_22050598_pipeline_ctrl temp_id_pc_data", false,-1, 63,0);
        tracep->declBit(c+607,"npc ysyx_22050598_pipeline_ctrl ex_id_not_equal", false,-1);
        tracep->declBit(c+607,"npc ysyx_22050598_pipeline_ctrl if_pc_ena", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp59;
    VlWide<3>/*95:0*/ __Vtemp60;
    VlWide<3>/*95:0*/ __Vtemp63;
    VlWide<3>/*95:0*/ __Vtemp68;
    VlWide<4>/*127:0*/ __Vtemp69;
    VlWide<4>/*127:0*/ __Vtemp70;
    VlWide<4>/*127:0*/ __Vtemp71;
    VlWide<4>/*127:0*/ __Vtemp72;
    VlWide<4>/*127:0*/ __Vtemp73;
    VlWide<4>/*127:0*/ __Vtemp74;
    VlWide<4>/*127:0*/ __Vtemp75;
    VlWide<4>/*127:0*/ __Vtemp76;
    VlWide<4>/*127:0*/ __Vtemp77;
    VlWide<4>/*127:0*/ __Vtemp78;
    VlWide<4>/*127:0*/ __Vtemp79;
    VlWide<4>/*127:0*/ __Vtemp80;
    VlWide<3>/*95:0*/ __Vtemp81;
    VlWide<3>/*95:0*/ __Vtemp82;
    VlWide<3>/*95:0*/ __Vtemp85;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,((((- (QData)((IData)(
                                                       (0x6fU 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->npc__DOT__if_id_inst))))) 
                                    & (((- (QData)((IData)(
                                                           (vlSelf->npc__DOT__if_id_inst 
                                                            >> 0x1fU)))) 
                                        << 0x14U) | (QData)((IData)(
                                                                    ((0xff000U 
                                                                      & vlSelf->npc__DOT__if_id_inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->npc__DOT__if_id_inst 
                                                                              >> 0x14U)))))))) 
                                   | ((- (QData)((IData)(
                                                         (0x63U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->npc__DOT__if_id_inst))))) 
                                      & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))),64);
        tracep->fullBit(oldp+3,(((0x6fU == (0x7fU & vlSelf->npc__DOT__if_id_inst)) 
                                 | ((0x63U == (0x7fU 
                                               & vlSelf->npc__DOT__if_id_inst)) 
                                    & (IData)((vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                               >> 0x3fU))))));
        tracep->fullIData(oldp+4,(vlSelf->npc__DOT__if_id_inst),32);
        tracep->fullQData(oldp+5,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r),64);
        tracep->fullQData(oldp+7,(vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r),64);
        tracep->fullIData(oldp+9,(vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r),32);
        tracep->fullSData(oldp+10,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode),10);
        tracep->fullCData(oldp+11,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a),3);
        tracep->fullCData(oldp+12,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b),2);
        tracep->fullQData(oldp+13,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm),64);
        tracep->fullCData(oldp+15,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0xfU))),5);
        tracep->fullCData(oldp+16,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 0x14U))),5);
        tracep->fullBit(oldp+17,((IData)((0U != (0x33U 
                                                 & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))));
        tracep->fullCData(oldp+18,((0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                             >> 7U))),5);
        tracep->fullBit(oldp+19,((1U & ((((((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x73U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x19U))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xfU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x14U))))))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 7U)))))))));
        tracep->fullBit(oldp+20,((1U & ((((((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x73U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x19U))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xfU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0x14U)))))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 7U)))))))));
        tracep->fullBit(oldp+21,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_jalr));
        tracep->fullBit(oldp+22,((1U & (~ (IData)((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (0x6fU 
                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+23,((1U & (~ (IData)((0U 
                                                   != 
                                                   (0x7fU 
                                                    & (0x23U 
                                                       ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+24,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_set_en));
        tracep->fullBit(oldp+25,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw))));
        tracep->fullBit(oldp+26,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw))));
        tracep->fullBit(oldp+27,((1U & ((((((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x73U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (7U 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU)))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (0x7fU 
                                                          & (0x18U 
                                                             ^ 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0x19U))))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xfU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x14U))))))) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 7U)))))))));
        tracep->fullBit(oldp+28,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri));
        tracep->fullCData(oldp+29,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type),2);
        tracep->fullBit(oldp+30,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw))));
        tracep->fullCData(oldp+31,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                     << 4U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                << 3U) 
                                               | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw)))))),5);
        tracep->fullCData(oldp+32,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                     << 5U) | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                                << 4U) 
                                               | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci))))))),6);
        tracep->fullCData(oldp+33,(vlSelf->npc__DOT__id_ex_branch_bus),6);
        tracep->fullCData(oldp+34,(((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                        | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                      | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                     << 1U) | (1U & 
                                               ((((~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x7fU 
                                                               & (3U 
                                                                  ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (7U 
                                                                 & (4U 
                                                                    ^ 
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0xcU))))))) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu))))),2);
        tracep->fullBit(oldp+35,((1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (3U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x23U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))));
        tracep->fullBit(oldp+36,((1U & ((~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x3bU 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                        | (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x1bU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))))));
        tracep->fullBit(oldp+37,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                     >> 0x19U))));
        tracep->fullBit(oldp+38,(vlSelf->npc__DOT__forward_load_stall));
        tracep->fullIData(oldp+39,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_dfflr__DOT__qout_r),32);
        tracep->fullSData(oldp+40,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r),10);
        tracep->fullQData(oldp+41,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+43,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+45,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+47,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r),64);
        tracep->fullCData(oldp+49,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r),5);
        tracep->fullBit(oldp+50,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+51,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 8U))));
        tracep->fullBit(oldp+52,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 7U))));
        tracep->fullBit(oldp+53,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 6U))));
        tracep->fullBit(oldp+54,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 5U))));
        tracep->fullBit(oldp+55,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 4U))));
        tracep->fullBit(oldp+56,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 3U))));
        tracep->fullBit(oldp+57,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 2U))));
        tracep->fullBit(oldp+58,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                        >> 1U))));
        tracep->fullBit(oldp+59,((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))));
        tracep->fullCData(oldp+60,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_data_bus_dfflr__DOT__qout_r),2);
        tracep->fullBit(oldp+61,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r));
        tracep->fullCData(oldp+62,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r),5);
        tracep->fullCData(oldp+63,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r),6);
        tracep->fullCData(oldp+64,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r),6);
        tracep->fullCData(oldp+65,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r),2);
        tracep->fullBit(oldp+66,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_ls_req_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+67,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+68,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_illegal_dfflr__DOT__qout_r));
        tracep->fullQData(oldp+69,((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                                             | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 4U)))))))),64);
        tracep->fullQData(oldp+71,((((- (QData)((IData)(
                                                        (0U 
                                                         != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc) 
                                    | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))) 
                                       & (((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                  >> 5U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                          | (0xfffffffffffffffeULL 
                                             & ((- (QData)((IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                       >> 6U))))) 
                                                & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))))),64);
        tracep->fullBit(oldp+73,((1U & ((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                        | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                           >> 6U)))));
        tracep->fullBit(oldp+74,(vlSelf->npc__DOT__ex_ls_load_en));
        tracep->fullQData(oldp+75,((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r 
                                    & (- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                             >> 4U))))))),64);
        tracep->fullQData(oldp+77,(vlSelf->npc__DOT__ex_csr_rd_pc_data),64);
        tracep->fullQData(oldp+79,(vlSelf->npc__DOT__ex_rd_data),64);
        tracep->fullBit(oldp+81,(vlSelf->npc__DOT__ex_pc_data_ena));
        tracep->fullQData(oldp+82,(vlSelf->npc__DOT__ex_pc_data),64);
        tracep->fullIData(oldp+84,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_dfflr__DOT__qout_r),32);
        tracep->fullQData(oldp+85,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_pc_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+87,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_alu_rd_ls_data_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+89,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+91,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+92,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_en_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+93,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_en_dfflr__DOT__qout_r));
        tracep->fullCData(oldp+94,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r),2);
        tracep->fullCData(oldp+95,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r),5);
        tracep->fullBit(oldp+96,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_inst_is_ebreak_dfflr__DOT__qout_r));
        tracep->fullBit(oldp+97,(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r));
        tracep->fullIData(oldp+98,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_inst_dfflr__DOT__qout_r),32);
        tracep->fullQData(oldp+99,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_pc_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+101,((((((- (QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(
                                                                           (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                            >> 7U)) 
                                                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata)))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                          & (((- (QData)((IData)(
                                                                 (1U 
                                                                  & ((IData)(
                                                                             (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                              >> 0xfU)) 
                                                                     & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r))))))) 
                                              << 0x10U) 
                                             | (QData)((IData)(
                                                               (0xffffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))))) 
                                      | ((- (QData)((IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                         & (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(
                                                                                (vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata 
                                                                                >> 0x1fU)) 
                                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_load_unsigned_dfflr__DOT__qout_r)))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))))) 
                                     | ((- (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata))),64);
        tracep->fullQData(oldp+103,(vlSelf->npc__DOT__ls_rd_data),64);
        tracep->fullQData(oldp+105,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+107,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r));
        tracep->fullCData(oldp+108,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r),5);
        tracep->fullBit(oldp+109,(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_ebreak_dfflr__DOT__qout_r));
        tracep->fullCData(oldp+110,(vlSelf->npc__DOT__pipeline_flush),3);
        tracep->fullCData(oldp+111,((3U & (- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))))),5);
        tracep->fullBit(oldp+112,((0x6fU == (0x7fU 
                                             & vlSelf->npc__DOT__if_id_inst))));
        tracep->fullBit(oldp+113,((0x63U == (0x7fU 
                                             & vlSelf->npc__DOT__if_id_inst))));
        tracep->fullQData(oldp+114,(vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm),64);
        tracep->fullQData(oldp+116,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__if_id_inst 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->npc__DOT__if_id_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->npc__DOT__if_id_inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 0x14U)))))))),64);
        tracep->fullBit(oldp+118,((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))));
        tracep->fullBit(oldp+119,((1U & (~ (IData)(vlSelf->npc__DOT__forward_load_stall)))));
        tracep->fullQData(oldp+120,(((1U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? vlSelf->npc__DOT__ex_pc_data
                                      : (vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                         + (((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->npc__DOT__if_id_inst)) 
                                             | ((0x63U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->npc__DOT__if_id_inst)) 
                                                & (IData)(
                                                          (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                           >> 0x3fU))))
                                             ? (((- (QData)((IData)(
                                                                    (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->npc__DOT__if_id_inst))))) 
                                                 & (((- (QData)((IData)(
                                                                        (vlSelf->npc__DOT__if_id_inst 
                                                                         >> 0x1fU)))) 
                                                     << 0x14U) 
                                                    | (QData)((IData)(
                                                                      ((0xff000U 
                                                                        & vlSelf->npc__DOT__if_id_inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->npc__DOT__if_id_inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->npc__DOT__if_id_inst 
                                                                                >> 0x14U)))))))) 
                                                | ((- (QData)((IData)(
                                                                      (0x63U 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->npc__DOT__if_id_inst))))) 
                                                   & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                             : 4ULL)))),64);
        tracep->fullQData(oldp+122,((((0x6fU == (0x7fU 
                                                 & vlSelf->npc__DOT__if_id_inst)) 
                                      | ((0x63U == 
                                          (0x7fU & vlSelf->npc__DOT__if_id_inst)) 
                                         & (IData)(
                                                   (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                    >> 0x3fU))))
                                      ? (((- (QData)((IData)(
                                                             (0x6fU 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->npc__DOT__if_id_inst))))) 
                                          & (((- (QData)((IData)(
                                                                 (vlSelf->npc__DOT__if_id_inst 
                                                                  >> 0x1fU)))) 
                                              << 0x14U) 
                                             | (QData)((IData)(
                                                               ((0xff000U 
                                                                 & vlSelf->npc__DOT__if_id_inst) 
                                                                | ((0x800U 
                                                                    & (vlSelf->npc__DOT__if_id_inst 
                                                                       >> 9U)) 
                                                                   | (0x7feU 
                                                                      & (vlSelf->npc__DOT__if_id_inst 
                                                                         >> 0x14U)))))))) 
                                         | ((- (QData)((IData)(
                                                               (0x63U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->npc__DOT__if_id_inst))))) 
                                            & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                      : 4ULL)),64);
        tracep->fullQData(oldp+124,((vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r 
                                     + (((0x6fU == 
                                          (0x7fU & vlSelf->npc__DOT__if_id_inst)) 
                                         | ((0x63U 
                                             == (0x7fU 
                                                 & vlSelf->npc__DOT__if_id_inst)) 
                                            & (IData)(
                                                      (vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm 
                                                       >> 0x3fU))))
                                         ? (((- (QData)((IData)(
                                                                (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->npc__DOT__if_id_inst))))) 
                                             & (((- (QData)((IData)(
                                                                    (vlSelf->npc__DOT__if_id_inst 
                                                                     >> 0x1fU)))) 
                                                 << 0x14U) 
                                                | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->npc__DOT__if_id_inst) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->npc__DOT__if_id_inst 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->npc__DOT__if_id_inst 
                                                                            >> 0x14U)))))))) 
                                            | ((- (QData)((IData)(
                                                                  (0x63U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->npc__DOT__if_id_inst))))) 
                                               & vlSelf->npc__DOT__ysyx_22050598_ifu_bpu__DOT__Bimm))
                                         : 4ULL))),64);
        tracep->fullQData(oldp+126,((0xfffffffffffffff8ULL 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
        tracep->fullQData(oldp+128,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__rdata),64);
        tracep->fullBit(oldp+130,(vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__sign_reg__DOT__qout_r));
        tracep->fullBit(oldp+131,((1U & ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                         >> 1U))));
        tracep->fullBit(oldp+132,((1U & ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                                         >> 1U))));
        tracep->fullIData(oldp+133,(((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0x13U : vlSelf->npc__DOT__if_id_inst)),32);
        tracep->fullQData(oldp+134,(((2U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_ifu__DOT__pc_dfflr_resetval__DOT__qout_r)),64);
        tracep->fullBit(oldp+136,((1U & (~ (1U & ((- (IData)((IData)(vlSelf->npc__DOT__forward_load_stall))) 
                                                  >> 1U))))));
        tracep->fullCData(oldp+137,((7U & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+138,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0xcU))))))));
        tracep->fullBit(oldp+139,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (1U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+140,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (2U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+141,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (3U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+142,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (4U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+143,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (5U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+144,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (6U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullBit(oldp+145,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (7U 
                                                     & (~ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0xcU)))))))));
        tracep->fullCData(oldp+146,((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                     >> 0x19U)),7);
        tracep->fullBit(oldp+147,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0x19U)))))));
        tracep->fullBit(oldp+148,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x20U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+149,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (1U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+150,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (4U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+151,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (8U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+152,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x10U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+153,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x18U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x19U)))))))));
        tracep->fullBit(oldp+154,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0xfU))))))));
        tracep->fullBit(oldp+155,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x14U))))))));
        tracep->fullBit(oldp+156,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (1U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x14U)))))))));
        tracep->fullBit(oldp+157,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (2U 
                                                        ^ 
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                         >> 0x14U)))))))));
        tracep->fullBit(oldp+158,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 7U))))))));
        tracep->fullCData(oldp+159,((0x7fU & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)),7);
        tracep->fullBit(oldp+160,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x13U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+161,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x33U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+162,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x1bU 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+163,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x3bU 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+164,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x17U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+165,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x63U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+166,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x67U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+167,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (3U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+168,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x37U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+169,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x7fU 
                                                     & (0x73U 
                                                        ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))));
        tracep->fullBit(oldp+170,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__func6_010000));
        tracep->fullBit(oldp+171,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0x1aU)))))));
        tracep->fullBit(oldp+172,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x13U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))));
        tracep->fullBit(oldp+173,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x13U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+174,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu));
        tracep->fullBit(oldp+175,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x13U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (4U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+176,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x13U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (6U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+177,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x13U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (~ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+178,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x13U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (1U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x1aU))))))));
        tracep->fullBit(oldp+179,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x13U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (5U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x1aU))))))));
        tracep->fullBit(oldp+180,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srai));
        tracep->fullBit(oldp+181,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x1bU 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))));
        tracep->fullBit(oldp+182,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw));
        tracep->fullBit(oldp+183,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw));
        tracep->fullBit(oldp+184,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw));
        tracep->fullBit(oldp+185,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+186,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x20U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+187,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (1U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+188,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (2U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+189,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu));
        tracep->fullBit(oldp+190,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (4U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+191,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (5U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+192,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sra));
        tracep->fullBit(oldp+193,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (6U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+194,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+195,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div));
        tracep->fullBit(oldp+196,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (5U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+197,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul));
        tracep->fullBit(oldp+198,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh));
        tracep->fullBit(oldp+199,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu));
        tracep->fullBit(oldp+200,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu));
        tracep->fullBit(oldp+201,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem));
        tracep->fullBit(oldp+202,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x33U 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+203,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x3bU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                        >> 0x19U))))))));
        tracep->fullBit(oldp+204,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x3bU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU)))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (0x20U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+205,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sllw));
        tracep->fullBit(oldp+206,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srlw));
        tracep->fullBit(oldp+207,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraw));
        tracep->fullBit(oldp+208,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw));
        tracep->fullBit(oldp+209,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw));
        tracep->fullBit(oldp+210,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x3bU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (5U 
                                                            ^ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+211,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw));
        tracep->fullBit(oldp+212,((1U & (((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x7fU 
                                                       & (0x3bU 
                                                          ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (7U 
                                                         & (~ 
                                                            (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                             >> 0xcU))))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0x19U))))))))));
        tracep->fullBit(oldp+213,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x63U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))));
        tracep->fullBit(oldp+214,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x63U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+215,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x63U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (4U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+216,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x63U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (5U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+217,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu));
        tracep->fullBit(oldp+218,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu));
        tracep->fullBit(oldp+219,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (3U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))));
        tracep->fullBit(oldp+220,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (3U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (4U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+221,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (3U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (3U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+222,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (3U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+223,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu));
        tracep->fullBit(oldp+224,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (3U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+225,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu));
        tracep->fullBit(oldp+226,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x23U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                           >> 0xcU)))))))));
        tracep->fullBit(oldp+227,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x23U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (1U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+228,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x23U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (2U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+229,((1U & ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0x7fU 
                                                      & (0x23U 
                                                         ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (7U 
                                                        & (3U 
                                                           ^ 
                                                           (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                            >> 0xcU))))))))));
        tracep->fullBit(oldp+230,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw));
        tracep->fullBit(oldp+231,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs));
        tracep->fullBit(oldp+232,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc));
        tracep->fullBit(oldp+233,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi));
        tracep->fullBit(oldp+234,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi));
        tracep->fullBit(oldp+235,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci));
        tracep->fullBit(oldp+236,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc))));
        tracep->fullBit(oldp+237,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs)) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))));
        tracep->fullBit(oldp+238,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu))));
        tracep->fullBit(oldp+239,((1U & ((((~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fU 
                                                        & (3U 
                                                           ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (4U 
                                                             ^ 
                                                             (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xcU))))))) 
                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)))));
        tracep->fullCData(oldp+240,(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type),6);
        tracep->fullQData(oldp+241,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 (0x7ffU 
                                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                     >> 0x14U)))))),64);
        tracep->fullQData(oldp+243,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x1fU)))) 
                                      << 0xbU) | (QData)((IData)(
                                                                 ((0x7e0U 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+245,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0x800U 
                                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                      << 4U)) 
                                                                  | ((0x7e0U 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                         >> 0x14U)) 
                                                                     | (0x1eU 
                                                                        & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                           >> 7U)))))))),64);
        tracep->fullQData(oldp+247,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))),64);
        tracep->fullQData(oldp+249,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0x1fU)))) 
                                      << 0x14U) | (QData)((IData)(
                                                                  ((0xff000U 
                                                                    & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r) 
                                                                   | ((0x800U 
                                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                          >> 9U)) 
                                                                      | (0x7feU 
                                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                            >> 0x14U)))))))),64);
        tracep->fullBit(oldp+251,((1U & (~ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                            >> 0x19U)))));
        tracep->fullIData(oldp+252,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen),32);
        tracep->fullBit(oldp+253,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 1U))));
        tracep->fullQData(oldp+254,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__1__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+256,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 2U))));
        tracep->fullQData(oldp+257,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__2__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+259,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 3U))));
        tracep->fullQData(oldp+260,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__3__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+262,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 4U))));
        tracep->fullQData(oldp+263,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__4__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+265,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 5U))));
        tracep->fullQData(oldp+266,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__5__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+268,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 6U))));
        tracep->fullQData(oldp+269,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__6__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+271,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 7U))));
        tracep->fullQData(oldp+272,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__7__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+274,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 8U))));
        tracep->fullQData(oldp+275,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__8__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+277,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 9U))));
        tracep->fullQData(oldp+278,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__9__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+280,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xaU))));
        tracep->fullQData(oldp+281,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__10__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+283,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xbU))));
        tracep->fullQData(oldp+284,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__11__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+286,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xcU))));
        tracep->fullQData(oldp+287,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__12__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+289,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xdU))));
        tracep->fullQData(oldp+290,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__13__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+292,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xeU))));
        tracep->fullQData(oldp+293,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__14__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+295,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0xfU))));
        tracep->fullQData(oldp+296,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__15__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+298,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x10U))));
        tracep->fullQData(oldp+299,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__16__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+301,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x11U))));
        tracep->fullQData(oldp+302,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__17__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+304,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x12U))));
        tracep->fullQData(oldp+305,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__18__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+307,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x13U))));
        tracep->fullQData(oldp+308,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__19__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+310,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x14U))));
        tracep->fullQData(oldp+311,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__20__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+313,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x15U))));
        tracep->fullQData(oldp+314,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__21__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+316,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x16U))));
        tracep->fullQData(oldp+317,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__22__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+319,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x17U))));
        tracep->fullQData(oldp+320,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__23__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+322,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x18U))));
        tracep->fullQData(oldp+323,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__24__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+325,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x19U))));
        tracep->fullQData(oldp+326,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__25__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+328,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1aU))));
        tracep->fullQData(oldp+329,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__26__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+331,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1bU))));
        tracep->fullQData(oldp+332,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__27__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+334,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1cU))));
        tracep->fullQData(oldp+335,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__28__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+337,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1dU))));
        tracep->fullQData(oldp+338,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__29__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+340,((1U & (vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                         >> 0x1eU))));
        tracep->fullQData(oldp+341,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__30__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+343,((vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_wen 
                                   >> 0x1fU)));
        tracep->fullQData(oldp+344,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__regfile__BRA__31__KET____DOT__genblk1__DOT__regfile_dfflr__DOT__qout_r),64);
        tracep->fullCData(oldp+346,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild),5);
        tracep->fullCData(oldp+347,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild),5);
        tracep->fullBit(oldp+348,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+349,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+350,((0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+351,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                     & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+352,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+353,((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+354,(((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                     & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+355,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+356,((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+357,((((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+358,((((IData)(vlSelf->npc__DOT__ex_ls_load_en) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                   ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs2_idx_vaild)))))) 
                                   & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+359,((1U & ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                         >> 2U))));
        tracep->fullBit(oldp+360,(0U));
        tracep->fullSData(oldp+361,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus),9);
        tracep->fullSData(oldp+362,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus))),9);
        tracep->fullSData(oldp+363,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0x200U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_opcode))),10);
        tracep->fullQData(oldp+364,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0ULL : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r)),64);
        tracep->fullCData(oldp+366,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (0x1fU 
                                              & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                 >> 7U)))),5);
        tracep->fullBit(oldp+367,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                             >> 2U)) 
                                         & (IData)(
                                                   (0U 
                                                    != 
                                                    (0x33U 
                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_type))))))));
        tracep->fullCData(oldp+368,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__ls_type))),2);
        tracep->fullBit(oldp+369,(((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                       >> 2U)) & ((
                                                   ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_rem) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_remw)) 
                                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_div)) 
                                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_divw)))));
        tracep->fullCData(oldp+370,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mul) 
                                               << 4U) 
                                              | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulh) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhsu) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulhu) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_mulw))))))),5);
        tracep->fullCData(oldp+371,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrw) 
                                               << 5U) 
                                              | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrs) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrc) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrwi) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrsi) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_csrrci)))))))),6);
        tracep->fullCData(oldp+372,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : (IData)(vlSelf->npc__DOT__id_ex_branch_bus))),6);
        tracep->fullCData(oldp+373,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : ((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltu) 
                                                  | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sltiu)) 
                                                 | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bltu)) 
                                                | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_bgeu)) 
                                               << 1U) 
                                              | (1U 
                                                 & ((((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (0x7fU 
                                                                   & (3U 
                                                                      ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (7U 
                                                                     & (4U 
                                                                        ^ 
                                                                        (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                         >> 0xcU))))))) 
                                                     | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lhu)) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_lwu)))))),2);
        tracep->fullBit(oldp+374,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                             >> 2U)) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (3U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (0x23U 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))));
        tracep->fullBit(oldp+375,((1U & ((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                             >> 2U)) 
                                         & ((~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x3bU 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x7fU 
                                                           & (0x1bU 
                                                              ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))));
        tracep->fullBit(oldp+376,(((~ ((IData)(vlSelf->npc__DOT__pipeline_flush) 
                                       >> 2U)) & ((
                                                   ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_slliw) 
                                                    | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_srliw)) 
                                                   | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_sraiw)) 
                                                  & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                     >> 0x19U)))));
        tracep->fullSData(oldp+377,(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r),9);
        tracep->fullBit(oldp+378,(1U));
        tracep->fullBit(oldp+379,((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))));
        tracep->fullBit(oldp+380,((1U & (((0U != (IData)(vlSelf->npc__DOT__id_ex_branch_bus)) 
                                          | (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x7fU 
                                                         & (0x23U 
                                                            ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)))))) 
                                         | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri)))));
        tracep->fullIData(oldp+381,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0U : vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r)),32);
        tracep->fullBit(oldp+382,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                         >> 1U))));
        tracep->fullBit(oldp+383,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub));
        tracep->fullBit(oldp+384,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                         >> 8U))));
        __Vtemp59[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r);
        __Vtemp59[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                 >> 0x20U));
        __Vtemp59[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                   >> 1U)) & (IData)(
                                                     (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                      >> 0x3fU))));
        tracep->fullWData(oldp+385,(__Vtemp59),65);
        __Vtemp60[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r);
        __Vtemp60[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                 >> 0x20U));
        __Vtemp60[2U] = (1U & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                   >> 1U)) & (IData)(
                                                     (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r 
                                                      >> 0x3fU))));
        tracep->fullWData(oldp+388,(__Vtemp60),65);
        __Vtemp63[0U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r));
        __Vtemp63[1U] = ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                         & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                    >> 0x20U)));
        __Vtemp63[2U] = (1U & ((- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_or_sub))) 
                               & ((~ ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r) 
                                      >> 1U)) & (IData)(
                                                        (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r 
                                                         >> 0x3fU)))));
        tracep->fullWData(oldp+391,(__Vtemp63),65);
        tracep->fullWData(oldp+394,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b),65);
        if ((0x100U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))) {
            __Vtemp68[0U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U]);
            __Vtemp68[1U] = (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U]);
            __Vtemp68[2U] = (1U & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]));
        } else {
            __Vtemp68[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[0U];
            __Vtemp68[1U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[1U];
            __Vtemp68[2U] = (1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__add_sub_op_b[2U]);
        }
        tracep->fullWData(oldp+397,(__Vtemp68),65);
        tracep->fullWData(oldp+400,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data),65);
        tracep->fullQData(oldp+403,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U] 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))),64);
        tracep->fullQData(oldp+405,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result),64);
        tracep->fullIData(oldp+407,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op),32);
        tracep->fullIData(oldp+408,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op),32);
        tracep->fullQData(oldp+409,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_a_op),64);
        tracep->fullQData(oldp+411,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv32_b_op),64);
        tracep->fullQData(oldp+413,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a),64);
        tracep->fullQData(oldp+415,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b),64);
        VL_EXTEND_WQ(128,64, __Vtemp69, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp70, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp71, __Vtemp69, __Vtemp70);
        tracep->fullWData(oldp+417,(__Vtemp71),128);
        tracep->fullWData(oldp+421,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res),128);
        VL_EXTEND_WQ(128,64, __Vtemp72, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp73, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp74, __Vtemp72, __Vtemp73);
        tracep->fullWData(oldp+425,(__Vtemp74),128);
        tracep->fullIData(oldp+429,(((- (IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                    >> 7U)))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_a_op)),32);
        tracep->fullIData(oldp+430,(((- (IData)((1U 
                                                 & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                    >> 7U)))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__inst_rv64_b_op)),32);
        tracep->fullQData(oldp+431,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res),64);
        tracep->fullQData(oldp+433,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(
                                                                    (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                     >> 0x1fU)))))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))),64);
        VL_EXTEND_WQ(128,64, __Vtemp75, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp76, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp77, __Vtemp75, __Vtemp76);
        VL_EXTEND_WQ(128,64, __Vtemp78, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_a);
        VL_EXTEND_WQ(128,64, __Vtemp79, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mul_op_b);
        VL_MUL_W(4, __Vtemp80, __Vtemp78, __Vtemp79);
        tracep->fullQData(oldp+435,(((((((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                >> 4U))))) 
                                         & (((QData)((IData)(
                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[1U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[0U])))) 
                                        | ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                  >> 3U))))) 
                                           & (((QData)((IData)(
                                                               vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__muls_res[2U]))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                 >> 2U))))) 
                                          & (((QData)((IData)(
                                                              __Vtemp77[3U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               __Vtemp77[2U]))))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r) 
                                                                >> 1U))))) 
                                         & (((QData)((IData)(
                                                             __Vtemp80[3U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              __Vtemp80[2U]))))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_mul_bus_dfflr__DOT__qout_r))))) 
                                        & (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res 
                                                                           >> 0x1fU)))))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_mulw_res)))))))),64);
        tracep->fullQData(oldp+437,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a),64);
        tracep->fullQData(oldp+439,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b),64);
        tracep->fullQData(oldp+441,(VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
        tracep->fullQData(oldp+443,(VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)),64);
        tracep->fullIData(oldp+445,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_a),32);
        tracep->fullIData(oldp+446,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__divw_op_b),32);
        tracep->fullIData(oldp+447,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res),32);
        tracep->fullIData(oldp+448,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res),32);
        tracep->fullQData(oldp+449,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res))))),64);
        tracep->fullQData(oldp+451,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))),64);
        tracep->fullQData(oldp+453,((((((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                                        & VL_DIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b)) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                 & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                          & VL_DIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__div_op_b))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res 
                                                                 >> 0x1fU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divwu_res)))))) 
                                     | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res 
                                                                >> 0x1fU)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_divw_res))))))),64);
        tracep->fullQData(oldp+455,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a),64);
        tracep->fullQData(oldp+457,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b),64);
        tracep->fullQData(oldp+459,(VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
        tracep->fullQData(oldp+461,(VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)),64);
        tracep->fullIData(oldp+463,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_a),32);
        tracep->fullIData(oldp+464,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__modw_op_b),32);
        tracep->fullIData(oldp+465,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod),32);
        tracep->fullIData(oldp+466,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod),32);
        tracep->fullQData(oldp+467,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod))))),64);
        tracep->fullQData(oldp+469,((((- (QData)((IData)(
                                                         (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                          >> 0x1fU)))) 
                                      << 0x1fU) | (QData)((IData)(
                                                                  (0x7fffffffU 
                                                                   & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))),64);
        tracep->fullQData(oldp+471,((((((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                            & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r)))))) 
                                        & VL_MODDIVS_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b)) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              & ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                                 & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                          & VL_MODDIV_QQQ(64, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_a, vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__mod_op_b))) 
                                      | ((- (QData)((IData)(
                                                            ((~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r)) 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                         & (((- (QData)((IData)(
                                                                (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod 
                                                                 >> 0x1fU)))) 
                                             << 0x1fU) 
                                            | (QData)((IData)(
                                                              (0x7fffffffU 
                                                               & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remwu_mod)))))) 
                                     | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_divrem_bus_dfflr__DOT__qout_r) 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                        & (((- (QData)((IData)(
                                                               (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod 
                                                                >> 0x1fU)))) 
                                            << 0x1fU) 
                                           | (QData)((IData)(
                                                             (0x7fffffffU 
                                                              & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_remw_mod))))))),64);
        tracep->fullBit(oldp+473,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift));
        tracep->fullQData(oldp+474,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a),64);
        tracep->fullCData(oldp+476,((0x3fU & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                              & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),6);
        tracep->fullCData(oldp+477,((0x1fU & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                              & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))),5);
        tracep->fullQData(oldp+478,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64),64);
        tracep->fullIData(oldp+480,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32),32);
        __Vtemp81[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
        __Vtemp81[1U] = (IData)((0x1ffffffffULL & (- (QData)((IData)(
                                                                     (1U 
                                                                      & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                          >> 2U) 
                                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                            >> 0x1fU))))))));
        __Vtemp81[2U] = (IData)(((0x1ffffffffULL & 
                                  (- (QData)((IData)(
                                                     (1U 
                                                      & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                          >> 2U) 
                                                         & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                            >> 0x1fU))))))) 
                                 >> 0x20U));
        tracep->fullWData(oldp+481,(__Vtemp81),65);
        __Vtemp82[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
        __Vtemp82[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                 >> 0x20U));
        __Vtemp82[2U] = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                >> 2U) & (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                                  >> 0x3fU))));
        tracep->fullWData(oldp+484,(__Vtemp82),65);
        if (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r) {
            __Vtemp85[0U] = vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32;
            __Vtemp85[1U] = (IData)((0x1ffffffffULL 
                                     & (- (QData)((IData)(
                                                          (1U 
                                                           & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                               >> 2U) 
                                                              & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                 >> 0x1fU))))))));
            __Vtemp85[2U] = (IData)(((0x1ffffffffULL 
                                      & (- (QData)((IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                >> 2U) 
                                                               & (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_32 
                                                                  >> 0x1fU))))))) 
                                     >> 0x20U));
        } else {
            __Vtemp85[0U] = (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64);
            __Vtemp85[1U] = (IData)((vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                     >> 0x20U));
            __Vtemp85[2U] = (1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                    >> 2U) & (IData)(
                                                     (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_op_a_64 
                                                      >> 0x3fU))));
        }
        tracep->fullWData(oldp+487,(__Vtemp85),65);
        tracep->fullCData(oldp+490,((0x3fU & ((2U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r))
                                               ? (0x1fU 
                                                  & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                     & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift)))))
                                               : ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r) 
                                                  & (- (IData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__alu_op_is_shift))))))),6);
        tracep->fullWData(oldp+491,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result),65);
        tracep->fullIData(oldp+494,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev),32);
        tracep->fullQData(oldp+495,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev),64);
        tracep->fullQData(oldp+497,(((((- (QData)((IData)(
                                                          (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                            >> 4U) 
                                                           & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))) 
                                       & (((QData)((IData)(
                                                           (- (IData)(
                                                                      (vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev 
                                                                       >> 0x1fU))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_32_rev)))) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                                 >> 4U) 
                                                                & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_is_rv64_dfflr__DOT__qout_r))))))) 
                                         & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__shift_result_64_rev)) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 3U))))) 
                                        & (((QData)((IData)(
                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[1U])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__temp_shift_result[0U])))))),64);
        tracep->fullQData(oldp+499,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                            >> 2U))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+501,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                            >> 2U))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+503,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                             >> 2U))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
        tracep->fullQData(oldp+505,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                            >> 1U))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+507,(((- (QData)((IData)(
                                                        (1U 
                                                         & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                            >> 1U))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+509,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                             >> 1U))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                     & ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
        tracep->fullQData(oldp+511,(((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+513,(((- (QData)((IData)(
                                                        (1U 
                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                     & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)),64);
        tracep->fullQData(oldp+515,((((- (QData)((IData)(
                                                         (1U 
                                                          & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                     ^ ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_op_type_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r))),64);
        tracep->fullBit(oldp+517,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+518,((1U & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U])));
        tracep->fullBit(oldp+519,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (((QData)((IData)(
                                                                      vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                      << 0x20U) 
                                                     | (QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))));
        tracep->fullBit(oldp+520,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                          >> 5U) & 
                                         (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (((QData)((IData)(
                                                                       vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U]))))))))));
        tracep->fullBit(oldp+521,((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                    >> 4U) & (0U != 
                                              (((QData)((IData)(
                                                                vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))));
        tracep->fullBit(oldp+522,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                          >> 3U) & 
                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
        tracep->fullBit(oldp+523,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
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
        tracep->fullBit(oldp+524,((1U & (((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                          >> 1U) & 
                                         vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]))));
        tracep->fullBit(oldp+525,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r) 
                                         & ((~ vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[2U]) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (((QData)((IData)(
                                                                            vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_data[0U])))))))))));
        tracep->fullBit(oldp+526,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en));
        tracep->fullBit(oldp+527,(((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                   & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en)))));
        tracep->fullBit(oldp+528,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en));
        tracep->fullQData(oldp+529,((vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                                     & (- (QData)((IData)(
                                                          ((0U 
                                                            != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                           | (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en))))))),64);
        tracep->fullQData(oldp+531,((((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r) 
                                     | (4ULL & (- (QData)((IData)(
                                                                  ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_inst_jump_en) 
                                                                   | ((0U 
                                                                       != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_branch_bus_dfflr__DOT__qout_r)) 
                                                                      & (~ (IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__branch_en)))))))))),64);
        tracep->fullQData(oldp+533,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__jump_brach_pc),64);
        tracep->fullQData(oldp+535,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                             >> 5U))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result) 
                                     | (0xfffffffffffffffeULL 
                                        & ((- (QData)((IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                  >> 6U))))) 
                                           & vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__sum_sub_result)))),64);
        tracep->fullQData(oldp+537,(vlSelf->npc__DOT__u_ysyx_22050598_exu_alu__DOT__ex_temp_rd_ls_data),64);
        tracep->fullQData(oldp+539,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena))))),64);
        tracep->fullQData(oldp+541,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena))))),64);
        tracep->fullQData(oldp+543,(((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                      & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena)))) 
                                     | (vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_pc_dfflr__DOT__qout_r 
                                        & (- (QData)((IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                 >> 7U)))))))),64);
        tracep->fullQData(oldp+545,(((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data 
                                      & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena)))) 
                                     | (0xbULL & (- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                                                        >> 7U)))))))),64);
        tracep->fullQData(oldp+547,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mstatus_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+549,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mtvec_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+551,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mepc_dfflr__DOT__qout_r),64);
        tracep->fullQData(oldp+553,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__mcause_dfflr__DOT__qout_r),64);
        tracep->fullBit(oldp+555,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mstatus_ena));
        tracep->fullBit(oldp+556,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mtvec_ena));
        tracep->fullBit(oldp+557,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena) 
                                         | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                            >> 7U)))));
        tracep->fullBit(oldp+558,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena) 
                                         | ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                            >> 7U)))));
        tracep->fullBit(oldp+559,((0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))));
        tracep->fullQData(oldp+560,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data),64);
        tracep->fullQData(oldp+562,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_data),64);
        tracep->fullBit(oldp+564,((0x300U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+565,((0x305U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+566,((0x341U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+567,((0x342U == (0xfffU 
                                              & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_b_dfflr__DOT__qout_r)))));
        tracep->fullBit(oldp+568,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mepc_ena));
        tracep->fullBit(oldp+569,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__csr_mcause_ena));
        tracep->fullBit(oldp+570,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or));
        tracep->fullQData(oldp+571,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1),64);
        tracep->fullQData(oldp+573,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2),64);
        tracep->fullQData(oldp+575,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                                     | vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2)),64);
        tracep->fullBit(oldp+577,((IData)((0U != (0x24U 
                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))))));
        tracep->fullQData(oldp+578,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                             >> 5U))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                               >> 2U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))),64);
        tracep->fullBit(oldp+580,(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and));
        tracep->fullQData(oldp+581,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__read_csr_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_and))))),64);
        tracep->fullQData(oldp+583,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r) 
                                                             >> 3U))))) 
                                      & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__alu_op_a_dfflr__DOT__qout_r) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_csr_bus_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_bs_zimm_data_dfflr__DOT__qout_r))),64);
        tracep->fullQData(oldp+585,((vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data1 
                                     & (~ vlSelf->npc__DOT__u_ysyx_22050598_exu_csr__DOT__write_csr_or_data2))),64);
        tracep->fullBit(oldp+587,(vlSelf->npc__DOT__u_ysyx_22050598_exu_rd_pc_mux__DOT__csr_pc_en));
        tracep->fullBit(oldp+588,(0U));
        tracep->fullBit(oldp+589,((1U & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_unsigned_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+590,(1U));
        tracep->fullBit(oldp+591,((1U & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_inst_bus_dfflr__DOT__qout_r) 
                                         >> 4U))));
        tracep->fullQData(oldp+592,(vlSelf->npc__DOT__u_ysyx_22050598_lsu__DOT__rdata),64);
        tracep->fullQData(oldp+594,((((((- (QData)((IData)(
                                                           (0U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                        & (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                        << 0x18U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                           << 0x10U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))))))))))) 
                                       | ((- (QData)((IData)(
                                                             (1U 
                                                              == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                          & (((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))))))) 
                                      | ((- (QData)((IData)(
                                                            (2U 
                                                             == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                         & (((QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))))) 
                                     | ((- (QData)((IData)(
                                                           (3U 
                                                            == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_store_data_dfflr__DOT__qout_r))),64);
        tracep->fullCData(oldp+596,(((((1U & (- (IData)(
                                                        (0U 
                                                         == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))) 
                                       | (2U & (- (IData)(
                                                          (1U 
                                                           == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                      | (4U & (- (IData)(
                                                         (2U 
                                                          == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r)))))) 
                                     | (8U & (- (IData)(
                                                        (3U 
                                                         == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))))))),8);
        tracep->fullBit(oldp+597,((0U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+598,((1U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+599,((2U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+600,((3U == (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_ls_data_bus_dfflr__DOT__qout_r))));
        tracep->fullBit(oldp+601,(0U));
        tracep->fullBit(oldp+602,(1U));
        tracep->fullQData(oldp+603,((vlSelf->npc__DOT__ex_pc_data 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))),64);
        tracep->fullQData(oldp+605,((vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                     & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))),64);
        tracep->fullBit(oldp+607,((0U != ((vlSelf->npc__DOT__ex_pc_data 
                                           & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena)))) 
                                          ^ (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r 
                                             & (- (QData)((IData)(vlSelf->npc__DOT__ex_pc_data_ena))))))));
        tracep->fullQData(oldp+608,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                    [(0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0xfU))]),64);
        tracep->fullQData(oldp+610,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                    [(0x1fU & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                               >> 0x14U))]),64);
        tracep->fullQData(oldp+612,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                             >> 2U))))) 
                                      & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                            & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                          ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                          & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                          ? vlSelf->npc__DOT__ex_rd_data
                                          : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                              ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                              & (0U 
                                                 != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                              ? vlSelf->npc__DOT__ls_rd_data
                                              : ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                  ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                  & (0U 
                                                     != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                  ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                  : 
                                                 vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                 [(0x1fU 
                                                   & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                      >> 0xfU))])))) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                               >> 1U))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r))),64);
        tracep->fullQData(oldp+614,((((- (QData)((IData)(
                                                         (1U 
                                                          & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                             >> 1U))))) 
                                      & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                                     | ((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                                        & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm))),64);
        tracep->fullQData(oldp+616,(((((- (QData)((IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                       & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                                      | ((- (QData)((IData)(
                                                            (1U 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x7fU 
                                                                            & (0x23U 
                                                                               ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                         & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data)) 
                                     | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                        & (QData)((IData)(
                                                          (0x1fU 
                                                           & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                              >> 0xfU))))))),64);
        tracep->fullQData(oldp+618,((((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                        & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != 
                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                      & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                      ? vlSelf->npc__DOT__ex_rd_data
                                      : ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                          ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                          & (0U != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                          ? vlSelf->npc__DOT__ls_rd_data
                                          : ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                               & (~ (IData)(
                                                            (0U 
                                                             != 
                                                             ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                              ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                              & (0U 
                                                 != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                              ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                              : vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                             [(0x1fU 
                                               & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                  >> 0xfU))])))),64);
        tracep->fullQData(oldp+620,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0ULL : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                        >> 2U))))) 
                                                 & (((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_ex_w_reg_en_dfflr__DOT__qout_r) 
                                                       & (~ (IData)(vlSelf->npc__DOT__ex_ls_load_en))) 
                                                      & (~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r) 
                                                                     ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                     & (0U 
                                                        != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_ID_EX__DOT__id_write_rd_idx_dfflr__DOT__qout_r)))
                                                     ? vlSelf->npc__DOT__ex_rd_data
                                                     : 
                                                    ((((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_rd_data_en_dfflr__DOT__qout_r) 
                                                       & (~ (IData)(
                                                                    (0U 
                                                                     != 
                                                                     ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r) 
                                                                      ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                      & (0U 
                                                         != (IData)(vlSelf->npc__DOT__u_ysyx_22050598_EX_LS__DOT__ex_ls_write_rd_idx_dfflr__DOT__qout_r)))
                                                      ? vlSelf->npc__DOT__ls_rd_data
                                                      : 
                                                     ((((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_en_dfflr__DOT__qout_r) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != 
                                                                      ((IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r) 
                                                                       ^ (IData)(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__id_rs1_idx_vaild)))))) 
                                                       & (0U 
                                                          != (IData)(vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_idx_dfflr__DOT__qout_r)))
                                                       ? vlSelf->npc__DOT__ysyx_22050598_LS_WB__DOT__ls_wb_rd_data_dfflr__DOT__qout_r
                                                       : 
                                                      vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                                      [
                                                      (0x1fU 
                                                       & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                          >> 0xfU))])))) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_a) 
                                                                          >> 1U))))) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__pc_dfflr__DOT__qout_r)))),64);
        tracep->fullQData(oldp+622,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0ULL : (((- (QData)((IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b) 
                                                                        >> 1U))))) 
                                                 & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data) 
                                                | ((- (QData)((IData)(
                                                                      (1U 
                                                                       & (IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__alu_operand_sel_b))))) 
                                                   & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm)))),64);
        tracep->fullQData(oldp+624,(((4U & (IData)(vlSelf->npc__DOT__pipeline_flush))
                                      ? 0ULL : ((((- (QData)((IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->npc__DOT__id_ex_branch_bus))))) 
                                                  & vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__imm) 
                                                 | ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (0x7fU 
                                                                                & (0x23U 
                                                                                ^ vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r))))))))) 
                                                    & vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data)) 
                                                | ((- (QData)((IData)(vlSelf->npc__DOT__u_ysyx_22050598_idu_decode__DOT__inst_is_csri))) 
                                                   & (QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__inst_dfflr__DOT__qout_r 
                                                                         >> 0xfU)))))))),64);
        tracep->fullQData(oldp+626,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r
                                    [0xaU]),64);
        tracep->fullQData(oldp+628,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[0]),64);
        tracep->fullQData(oldp+630,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[1]),64);
        tracep->fullQData(oldp+632,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[2]),64);
        tracep->fullQData(oldp+634,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[3]),64);
        tracep->fullQData(oldp+636,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[4]),64);
        tracep->fullQData(oldp+638,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[5]),64);
        tracep->fullQData(oldp+640,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[6]),64);
        tracep->fullQData(oldp+642,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[7]),64);
        tracep->fullQData(oldp+644,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[8]),64);
        tracep->fullQData(oldp+646,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[9]),64);
        tracep->fullQData(oldp+648,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[10]),64);
        tracep->fullQData(oldp+650,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[11]),64);
        tracep->fullQData(oldp+652,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[12]),64);
        tracep->fullQData(oldp+654,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[13]),64);
        tracep->fullQData(oldp+656,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[14]),64);
        tracep->fullQData(oldp+658,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[15]),64);
        tracep->fullQData(oldp+660,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[16]),64);
        tracep->fullQData(oldp+662,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[17]),64);
        tracep->fullQData(oldp+664,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[18]),64);
        tracep->fullQData(oldp+666,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[19]),64);
        tracep->fullQData(oldp+668,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[20]),64);
        tracep->fullQData(oldp+670,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[21]),64);
        tracep->fullQData(oldp+672,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[22]),64);
        tracep->fullQData(oldp+674,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[23]),64);
        tracep->fullQData(oldp+676,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[24]),64);
        tracep->fullQData(oldp+678,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[25]),64);
        tracep->fullQData(oldp+680,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[26]),64);
        tracep->fullQData(oldp+682,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[27]),64);
        tracep->fullQData(oldp+684,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[28]),64);
        tracep->fullQData(oldp+686,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[29]),64);
        tracep->fullQData(oldp+688,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[30]),64);
        tracep->fullQData(oldp+690,(vlSelf->npc__DOT__u_ysyx_22050598_regfile__DOT__rf_r[31]),64);
        tracep->fullQData(oldp+692,(vlSelf->npc__DOT__ysyx_22050598_idu_forward__DOT__forward_rs2_data),64);
        tracep->fullQData(oldp+694,(vlSelf->test_if_pc),64);
        tracep->fullIData(oldp+696,(vlSelf->test_if_inst),32);
        tracep->fullQData(oldp+697,(vlSelf->test_id_pc),64);
        tracep->fullIData(oldp+699,(vlSelf->test_id_inst),32);
        tracep->fullQData(oldp+700,(vlSelf->test_ex_pc),64);
        tracep->fullIData(oldp+702,(vlSelf->test_ex_inst),32);
        tracep->fullQData(oldp+703,(vlSelf->test_ls_pc),64);
        tracep->fullIData(oldp+705,(vlSelf->test_ls_inst),32);
        tracep->fullQData(oldp+706,(vlSelf->test_wb_pc),64);
        tracep->fullIData(oldp+708,(vlSelf->test_wb_inst),32);
        tracep->fullBit(oldp+709,(vlSelf->clk));
        tracep->fullBit(oldp+710,(vlSelf->rst));
        tracep->fullIData(oldp+711,(vlSelf->npc__DOT__if_inst),32);
        tracep->fullQData(oldp+712,(vlSelf->npc__DOT__if_pc_i),64);
        tracep->fullIData(oldp+714,(0x40U),32);
        tracep->fullQData(oldp+715,(0x80000000ULL),64);
        tracep->fullIData(oldp+717,(1U),32);
        tracep->fullBit(oldp+718,(1U));
        tracep->fullBit(oldp+719,(1U));
        tracep->fullBit(oldp+720,(vlSelf->npc__DOT__u_ysyx_22050598_IF_ID__DOT__temp_flush));
        tracep->fullIData(oldp+721,(0x20U),32);
        tracep->fullIData(oldp+722,(9U),32);
        tracep->fullIData(oldp+723,(0xaU),32);
        tracep->fullIData(oldp+724,(5U),32);
        tracep->fullIData(oldp+725,(2U),32);
        tracep->fullIData(oldp+726,(6U),32);
        tracep->fullQData(oldp+727,(0xa00001800ULL),64);
    }
}
