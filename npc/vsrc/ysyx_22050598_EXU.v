`include "defines.v"
module ysyx_22050598_EXU(
input signed [63:0] imm,
input [63:0] immU,
input [4:0]  rd,
input [63:0] pc,
input [5:0]  inst_type,
input [6:0]  opcode,
input [2:0]  funct3,
input [6:0]  funct7,
input signed [63:0] rdata1,
input signed [63:0] rdata2,
output j_flag,
output [63:0] j_pc,
output wen,
output ebreak_flag,
output [4:0] waddr,
output [63:0] wdata
);
//which inst
wire OPCODE_ALU_IMM = (opcode == `ysyx_22050598_OPCODE_ALU_IMM);
wire OPCODE_STORE = (opcode == `ysyx_22050598_OPCODE_STORE);
wire OPCODE_CSR_BREAK = (opcode == `ysyx_22050598_OPCODE_CSR_BREAK);
wire OPCODE_AUIPC = (opcode == `ysyx_22050598_OPCODE_AUIPC);
wire OPCODE_LUI = (opcode == `ysyx_22050598_OPCODE_LUI);
wire OPCODE_JAL = (opcode == `ysyx_22050598_OPCODE_JAL);
wire OPCODE_JALR = (opcode == `ysyx_22050598_OPCODE_JALR);
wire OPCODE_ALU_REG = (opcode == `ysyx_22050598_OPCODE_ALU_REG);
wire OPCODE_BRANCH = (opcode == `ysyx_22050598_OPCODE_BRANCH);
wire OPCODE_STORE = (opcode == `ysyx_22050598_OPCODE_STORE);

wire funct3_000 = ~( |funct3 );
wire funct3_001 = (~funct3[2]) & (~funct3[1]) & (funct3[0]) ;
wire funct3_010 = (~funct3[2]) & (funct3[1]) & (~funct3[0]) ;
wire funct3_011 = (~funct3[2]) & (funct3[1]) & (funct3[0]) ;
wire funct3_100 = (funct3[2]) & (~funct3[1]) & (~funct3[0]) ;
wire funct3_101 = (funct3[2]) & (~funct3[1]) & (funct3[0]) ;
wire funct3_110 = (funct3[2]) & (funct3[1]) & (~funct3[0]) ;
wire funct3_111 = &funct3 ;

wire funct7_0000000 = ~(|funct7);
wire funct7_0000001 = (funct7 == 7'b0000001);
wire funct7_0100000 = (funct7 == 7'b0100000);


wire inst_addi = OPCODE_ALU_IMM & funct3_000;
wire inst_sd = OPCODE_STORE & funct3_011;
wire inst_ebreak = OPCODE_CSR_BREAK && (immU == 64'b1);
wire inst_auipc = OPCODE_AUIPC;
wire inst_lui = OPCODE_LUI;
wire inst_jal = OPCODE_JAL;
wire inst_jalr = OPCODE_JALR & funct3_000;
wire inst_add = OPCODE_ALU_REG & funct3_000 & funct7_0000000;
wire inst_addw = 
//EX inst
wire jump_flag = (inst_jal | inst_jalr);
wire [63:0] data1 =  ( rdata1 & {64{inst_addi}} ) |  ( pc & {64{(inst_auipc | jump_flag)}} ) | (imm & {64{inst_lui}});
wire [63:0] data2 =  ( imm & {64{(inst_addi | inst_auipc)}} ) |  (64'd4 & {64{jump_flag}} );


//jump inst
assign j_pc = ((pc + imm) & {64{inst_jal}}) | (((imm + rdata1) & 64'hfffffffffffffffe) & {64{inst_jalr}}) ;

assign ebreak_flag = inst_ebreak;
assign waddr = rd;
assign wen = inst_addi | inst_auipc | inst_lui | jump_flag;
assign wdata = data1 + data2;
assign j_flag = jump_flag;


endmodule
