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
wire inst_addi = (opcode == `ysyx_22050598_OPCODE_ALU_IMM) && (funct3 == 3'b000);
wire inst_sd = (opcode == `ysyx_22050598_OPCODE_STORE) && (funct3 == 3'b011);
wire inst_ebreak = (opcode == `ysyx_22050598_OPCODE_CSR_BREAK) && (immU == 64'b1);
wire inst_auipc = (opcode == `ysyx_22050598_OPCODE_AUIPC);
wire inst_lui = (opcode == `ysyx_22050598_OPCODE_LUI);
wire inst_jal = (opcode == `ysyx_22050598_OPCODE_JAL);
wire inst_jalr = (opcode == `ysyx_22050598_OPCODE_JALR) && (funct3 == 3'b000);

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
