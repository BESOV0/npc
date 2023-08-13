`include "ysyx_22050598_defines.v"
module ysyx_22050598_idu_decode (
    input [31:0]  id_inst_i             ,
    //ALU Part
    output [9:0]  id_op_type_o          ,
    output [2:0]  id_op_a_sel_o         ,// Selection signal for operand A
    output [1:0]  id_op_b_sel_o         ,// Selection signal for operand B
    //Imm Operand Part
    output [63:0] id_imm_o              ,
    //Regfile Part
    output [4:0]  id_read_rs1_idx_o     ,
    output [4:0]  id_read_rs2_idx_o     ,
    output        id_w_reg_en_o         ,
    output [4:0]  id_write_rd_idx_o     ,
    //Decode Ctrl Signal
    output        id_inst_is_ebreak_o   ,
    output        id_inst_is_ecall_o    ,
    output        id_inst_is_jalr_o     ,
    output        id_inst_is_jal_o      ,
    output        id_inst_is_store_o    ,// inst is s type
    output        id_inst_is_set_o      ,// inst is Set if type 
    output        id_inst_is_srax_o     ,// inst is sra type
    output        id_inst_5_shamt_o     ,
    output        id_inst_is_mret_o     ,
    output        id_inst_is_csri_o     ,

    output [1:0]  id_ls_data_bus_o      ,// B H W D 00 01 10 11
    output        id_inst_divrem_bus_o  ,// Indicate which rem it is, inst_rem div and inst_remw divw all signed
    output [4:0]  id_inst_mul_bus_o     ,// inst_mul , inst_mulh , inst_mulhsu , inst_mulhu , inst_mulw
    output [5:0]  id_csr_bus_o          ,
    output [5:0]  id_branch_bus_o       ,
    output [1:0]  id_unsigned_bus_o     ,

    output        id_ls_req_o           ,// L/S instruction req to bus
    output        id_inst_is_rv64_o     ,
    output        id_inst_is_illegal_o 
);
    //Decode funct3 Part
    wire [2:0] func3  = id_inst_i[14:12];
    wire func3_000     = ~func3[2] & ~func3[1] & ~func3[0] ;
    wire func3_001     = ~func3[2] & ~func3[1] &  func3[0] ;
    wire func3_010     = ~func3[2] &  func3[1] & ~func3[0] ;
    wire func3_011     = ~func3[2] &  func3[1] &  func3[0] ;
    wire func3_100     =  func3[2] & ~func3[1] & ~func3[0] ;
    wire func3_101     =  func3[2] & ~func3[1] &  func3[0] ;
    wire func3_110     =  func3[2] &  func3[1] & ~func3[0] ;
    wire func3_111     =  func3[2] &  func3[1] &  func3[0] ;
    //Decode funct7 Part
    wire [6:0] func7  = id_inst_i[31:25];
    wire func7_0000000 = ~(|func7[5:0]) ;
    wire func7_0100000 =  func7[5] & ~func7[4] & ~func7[3] & ~func7[2] & ~func7[1] & ~func7[0] ;
    wire func7_0000001 = ~func7[5] & ~func7[4] & ~func7[3] & ~func7[2] & ~func7[1] &  func7[0] ;
    wire func7_0000100 = ~func7[5] & ~func7[4] & ~func7[3] &  func7[2] & ~func7[1] & ~func7[0] ;
    wire func7_0001000 = ~func7[5] & ~func7[4] &  func7[3] & ~func7[2] & ~func7[1] & ~func7[0] ;
    wire func7_0010000 = ~func7[5] &  func7[4] & ~func7[3] & ~func7[2] & ~func7[1] & ~func7[0] ;
    wire func7_0011000 = ~func7[5] &  func7[4] &  func7[3] & ~func7[2] & ~func7[1] & ~func7[0] ;   
    wire func6_010000  =  func7[5] & ~func7[4] & ~func7[3] & ~func7[2] & ~func7[1] ;
    wire func6_000000  = ~(|func7[5:1]);
    //Decode Reg Part
    wire [4:0] rs1_idx = id_inst_i[19:15];
    wire [4:0] rs2_idx = id_inst_i[24:20];
    wire [4:0] rd_idx  = id_inst_i[11:7];

    wire rs1_00000     = ~(|rs1_idx);
    wire rs2_00000     = ~(|rs2_idx);
    wire rs2_00001     = ~rs2_idx[4] & ~rs2_idx[3] & ~rs2_idx[2] & ~rs2_idx[1] &  rs2_idx[0] ;
    wire rs2_00010     = ~rs2_idx[4] & ~rs2_idx[3] & ~rs2_idx[2] &  rs2_idx[1] & ~rs2_idx[0] ;
    wire rd_00000      = ~(|rd_idx);
    
    //Decode instruction type
    wire [6:0] opcode  = id_inst_i[6:0];
    wire opcode_alui   = ~(|(opcode ^ `ysyx_22050598_OPCODE_ALUI   ));
    wire opcode_alur   = ~(|(opcode ^ `ysyx_22050598_OPCODE_ALUR   ));
    wire opcode_aluiw  = ~(|(opcode ^ `ysyx_22050598_OPCODE_ALUIW  ));
    wire opcode_alurw  = ~(|(opcode ^ `ysyx_22050598_OPCODE_ALURW  ));
    wire opcode_auipc  = ~(|(opcode ^ `ysyx_22050598_OPCODE_AUIPC  ));
    wire opcode_branch = ~(|(opcode ^ `ysyx_22050598_OPCODE_BRANCH ));
    wire opcode_jal    = ~(|(opcode ^ `ysyx_22050598_OPCODE_JAL    ));
    wire opcode_jalr   = ~(|(opcode ^ `ysyx_22050598_OPCODE_JALR   ));
    wire opcode_load   = ~(|(opcode ^ `ysyx_22050598_OPCODE_LOAD   ));
    wire opcode_store  = ~(|(opcode ^ `ysyx_22050598_OPCODE_STORE  ));
    wire opcode_lui    = ~(|(opcode ^ `ysyx_22050598_OPCODE_LUI    ));
    wire opcode_system = ~(|(opcode ^ `ysyx_22050598_OPCODE_SYSTEM ));
    //**************decode which instruction******************
    //Immediate operation instruction
    wire inst_addi     = (opcode_alui & func3_000);
    wire inst_slti     = (opcode_alui & func3_010);
    wire inst_sltiu    = (opcode_alui & func3_011);//unsigned
    wire inst_xori     = (opcode_alui & func3_100);
    wire inst_ori      = (opcode_alui & func3_110);
    wire inst_andi     = (opcode_alui & func3_111);
    wire inst_slli     = (opcode_alui & func3_001 & func6_000000);
    wire inst_srli     = (opcode_alui & func3_101 & func6_000000);
    wire inst_srai     = (opcode_alui & func3_101 & func6_010000);
    //RV64 Only Part
    wire inst_addiw    = (opcode_aluiw & func3_000);
    wire inst_slliw    = (opcode_aluiw & func3_001 & func6_000000);
    wire inst_srliw    = (opcode_aluiw & func3_101 & func6_000000);
    wire inst_sraiw    = (opcode_aluiw & func3_101 & func6_010000);
    //Register operation instruction
    wire inst_add      = (opcode_alur & func3_000 & func7_0000000);
    wire inst_sub      = (opcode_alur & func3_000 & func7_0100000);
    wire inst_sll      = (opcode_alur & func3_001 & func7_0000000);
    wire inst_slt      = (opcode_alur & func3_010 & func7_0000000);
    wire inst_sltu     = (opcode_alur & func3_011 & func7_0000000);//unsigned
    wire inst_xor      = (opcode_alur & func3_100 & func7_0000000);
    wire inst_srl      = (opcode_alur & func3_101 & func7_0000000);
    wire inst_sra      = (opcode_alur & func3_101 & func7_0100000);
    wire inst_or       = (opcode_alur & func3_110 & func7_0000000);
    wire inst_and      = (opcode_alur & func3_111 & func7_0000000);
    wire inst_div      = (opcode_alur & func3_100 & func7_0000001);
    wire inst_divu     = (opcode_alur & func3_101 & func7_0000001);//unsigned
    wire inst_mul      = (opcode_alur & func3_000 & func7_0000001);
    wire inst_mulh     = (opcode_alur & func3_001 & func7_0000001);
    wire inst_mulhsu   = (opcode_alur & func3_010 & func7_0000001);//unsigned
    wire inst_mulhu    = (opcode_alur & func3_011 & func7_0000001);//unsigned
    wire inst_rem      = (opcode_alur & func3_110 & func7_0000001);
    wire inst_remu     = (opcode_alur & func3_111 & func7_0000001);//unsigned
    //RV64 Only Part
    wire inst_addw     = (opcode_alurw & func3_000 & func7_0000000);
    wire inst_subw     = (opcode_alurw & func3_000 & func7_0100000);
    wire inst_sllw     = (opcode_alurw & func3_001 & func7_0000000);
    wire inst_srlw     = (opcode_alurw & func3_101 & func7_0000000);
    wire inst_sraw     = (opcode_alurw & func3_101 & func7_0100000);
    wire inst_mulw     = (opcode_alurw & func3_000 & func7_0000001);
    wire inst_divw     = (opcode_alurw & func3_100 & func7_0000001);
    wire inst_divuw    = (opcode_alurw & func3_101 & func7_0000001);//unsigned
    wire inst_remw     = (opcode_alurw & func3_110 & func7_0000001);
    wire inst_remuw    = (opcode_alurw & func3_111 & func7_0000001);//unsigned
    //Branch operation instruction
    wire inst_beq      = (opcode_branch & func3_000);
    wire inst_bne      = (opcode_branch & func3_001);
    wire inst_blt      = (opcode_branch & func3_100);
    wire inst_bge      = (opcode_branch & func3_101);
    wire inst_bltu     = (opcode_branch & func3_110);//unsigned
    wire inst_bgeu     = (opcode_branch & func3_111);//unsigned
    //Jump operation instruction
    wire inst_jal      = opcode_jal ;
    wire inst_jalr     = opcode_jalr & func3_000;//in fact jalr is imm-type, put it here for ease of understanding
    //U-type instruction
    wire inst_lui      = opcode_lui  ;
    wire inst_auipc    = opcode_auipc;
    //Load operation instruction
    wire inst_lb       = (opcode_load & func3_000);
    wire inst_lbu      = (opcode_load & func3_100);//unsigned
    wire inst_ld       = (opcode_load & func3_011);
    wire inst_lh       = (opcode_load & func3_001);
    wire inst_lhu      = (opcode_load & func3_101);//unsigned
    wire inst_lw       = (opcode_load & func3_010);
    wire inst_lwu      = (opcode_load & func3_110);//unsigned
    //S-Type instruction
    wire inst_sb       = (opcode_store & func3_000);
    wire inst_sh       = (opcode_store & func3_001);
    wire inst_sw       = (opcode_store & func3_010);
    wire inst_sd       = (opcode_store & func3_011);
    //System instruction
    wire inst_ebreak   = (opcode_system & func3_000 & func7_0000000 & rs1_00000 & rs2_00001 & rd_00000);
    wire inst_ecall    = (opcode_system & func3_000 & func7_0000000 & rs1_00000 & rs2_00000 & rd_00000);
    wire inst_mret     = (opcode_system & func3_000 & func7_0011000 & rs1_00000 & rs2_00010 & rd_00000);
    //csr instruction
    wire inst_csrrw    = (opcode_system & func3_001);
    wire inst_csrrs    = (opcode_system & func3_010);
    wire inst_csrrc    = (opcode_system & func3_011);
    wire inst_csrrwi   = (opcode_system & func3_101);
    wire inst_csrrsi   = (opcode_system & func3_110);
    wire inst_csrrci   = (opcode_system & func3_111);

    wire csr_need_rs1 = inst_csrrw  | inst_csrrs  | inst_csrrc ;
    wire inst_is_csri = inst_csrrwi | inst_csrrsi | inst_csrrci;
    wire inst_is_csr  = csr_need_rs1 | inst_is_csri;
    //*********************use instruction info************************
    wire [9:0] inst_opcode;// + - * / % << >> | & ^
    wire inst_set_en = inst_slt | inst_slti | inst_sltiu | inst_sltu;

    assign inst_opcode[9] = inst_add    | inst_addi | inst_addiw | inst_addw  
                          | inst_auipc  | inst_jalr | inst_jal   | opcode_store
                          | opcode_load | inst_lui  ;

    assign inst_opcode[8] = inst_sub | inst_subw | inst_set_en | opcode_branch;
    assign inst_opcode[7] = inst_mul | inst_mulh | inst_mulhsu | inst_mulhu | inst_mulw ;
    assign inst_opcode[6] = inst_div | inst_divu | inst_divuw | inst_divw ;
    assign inst_opcode[5] = inst_rem | inst_remu | inst_remuw | inst_remw ;
    assign inst_opcode[4] = inst_sll | inst_slli | inst_slliw | inst_sllw ;
    assign inst_opcode[3] = inst_sra | inst_srai | inst_sraiw | inst_sraw 
                          | inst_srl | inst_srli | inst_srliw | inst_srlw ; 
    assign inst_opcode[2] = inst_or  | inst_ori  ;
    assign inst_opcode[1] = inst_and | inst_andi ; 
    assign inst_opcode[0] = inst_xor | inst_xori ;
    //signed op or unsigned op 
    wire cmp_unsigned     = inst_sltu | inst_sltiu | inst_bltu | inst_bgeu  ;
    wire load_unsigned    =  inst_lbu | inst_lhu   | inst_lwu               ; 
    //Decode IMM Part
    wire [5:0] inst_type;//R I S B U J
    assign inst_type[5] = opcode_alur | opcode_alurw;
    assign inst_type[4] = opcode_alui | opcode_aluiw | opcode_jalr | opcode_load | inst_is_csr;
    assign inst_type[3] = opcode_store ;
    assign inst_type[2] = opcode_branch ;
    assign inst_type[1] = opcode_lui | opcode_auipc;
    assign inst_type[0] = opcode_jal ;

    wire [63:0] Iimm = {{53{id_inst_i[31]}}, id_inst_i[30:20]};
    wire [63:0] Simm = {{53{id_inst_i[31]}}, id_inst_i[30:25], id_inst_i[11:7]};
    wire [63:0] Bimm = {{52{id_inst_i[31]}}, id_inst_i[7], id_inst_i[30:25], id_inst_i[11:8], 1'b0};
    wire [63:0] Uimm = {{32{id_inst_i[31]}}, id_inst_i[31:12], 12'b0};
    wire [63:0] Jimm = {{44{id_inst_i[31]}}, id_inst_i[19:12], id_inst_i[20], id_inst_i[30:21], 1'b0};   

    wire [63:0] imm = ({64{inst_type[4]}} & Iimm)
                    | ({64{inst_type[3]}} & Simm)
                    | ({64{inst_type[2]}} & Bimm)
                    | ({64{inst_type[1]}} & Uimm)
                    | ({64{inst_type[0]}} & Jimm);
    
    //Operand signal Part
    wire [2:0] alu_operand_sel_a;// reg pc imm, this reg is rs1
    wire [1:0] alu_operand_sel_b;// reg imm

    assign alu_operand_sel_a[2] = inst_type[5]  | inst_type[4]  | inst_type[3] | inst_type[2]; // R-type I-Type S-Type B-Type 
    assign alu_operand_sel_a[1] = opcode_jal | opcode_auipc  ; // Jump instruction or instruction which uses pc without B-type
    assign alu_operand_sel_a[0] = opcode_lui ; // for instcruction with only one operand

    assign alu_operand_sel_b[1] = inst_type[5] | inst_type[2] ;//R-type or B-type
    assign alu_operand_sel_b[0] = inst_type[4] | inst_type[3] | inst_type[1] | inst_type[0];

    wire [1:0] ls_type = //({2{(inst_lb | inst_lbu | inst_sb)}} & `Byte) //Default is 0 can be omitted
                         ({2{(inst_lh | inst_lhu | inst_sh)}} & `ysyx_22050598_Half_Word)
                       | ({2{(inst_lw | inst_lwu | inst_sw)}} & `ysyx_22050598_Word)
                       | ({2{(inst_ld | inst_sd)}} & `ysyx_22050598_Double_WordByte);
    //Last assign Part
    assign id_op_type_o    = inst_opcode;
    assign id_op_a_sel_o   = alu_operand_sel_a;
    assign id_op_b_sel_o   = alu_operand_sel_b;
    
    assign id_imm_o = imm;
    //assign id_ex_inst_u = unsigned_flag;

    assign id_read_rs1_idx_o = rs1_idx;
    assign id_read_rs2_idx_o = rs2_idx;
    assign id_w_reg_en_o     = inst_type[5] | inst_type[4] | inst_type[1] | inst_type[0] ;// R I U J
    assign id_write_rd_idx_o = rd_idx;

    assign id_inst_is_ebreak_o = inst_ebreak;
    assign id_inst_is_ecall_o  = inst_ecall;
    assign id_inst_is_mret_o   = inst_mret;
    assign id_inst_is_jalr_o   = inst_jalr ;
    assign id_inst_is_jal_o    = opcode_jal;
    assign id_inst_is_store_o  = opcode_store;
    assign id_inst_is_srax_o   = inst_sra | inst_srai | inst_sraiw | inst_sraw;
    assign id_inst_5_shamt_o   = inst_sraw| inst_srlw | inst_sllw  ;
    assign id_inst_is_set_o    = inst_set_en;
    assign id_inst_is_csri_o   = inst_is_csri;

    assign id_csr_bus_o         = {inst_csrrw , inst_csrrs , inst_csrrc  , inst_csrrwi ,inst_csrrsi , inst_csrrci};
    assign id_branch_bus_o      = {inst_beq   , inst_bne   , inst_blt    , inst_bge    , inst_bltu  , inst_bgeu};
    assign id_inst_mul_bus_o    = {inst_mul   , inst_mulh  , inst_mulhsu , inst_mulhu  , inst_mulw};
    assign id_inst_divrem_bus_o = inst_rem  | inst_remw | inst_div | inst_divw;
    assign id_ls_data_bus_o     = ls_type ;
    assign id_unsigned_bus_o    = {cmp_unsigned, load_unsigned};
    assign id_ls_req_o          = opcode_load | opcode_store ;


    //RV64 Instruction Flag
    wire rv64_inst           = opcode_alurw | opcode_aluiw ;//| inst_sd
    assign id_inst_is_rv64_o = rv64_inst;

    //illegal Instruction Flag
    wire sxxiw_shamt_legl = ~id_inst_i[25]; //shamt[5] must be zero for RV64I
    wire sxxiw_shamt_ilgl = (inst_slliw | inst_srliw | inst_sraiw) & (~sxxiw_shamt_legl);
    assign id_inst_is_illegal_o = sxxiw_shamt_ilgl;
 endmodule