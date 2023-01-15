`include "defines.v"
module ysyx_22050598_IDU(
input [31:0] inst,
output [63:0] imm,
output [63:0] immU,
output [4:0] rs1,
output [4:0] rs2,
output [4:0] rd,
output [6:0] funct7,
output [2:0] funct3,
output [5:0] type
);

`define ysyx_22050598_OPCODE_LUI          7'b01_101_11
`define ysyx_22050598_OPCODE_AUIPC        7'b00_101_11
`define ysyx_22050598_OPCODE_JAL          7'b11_011_11
`define ysyx_22050598_OPCODE_JALR         7'b11_001_11
`define ysyx_22050598_OPCODE_BRANCH       7'b11_000_11
`define ysyx_22050598_OPCODE_LOAD         7'b00_000_11
`define ysyx_22050598_OPCODE_STORE        7'b01_000_11
`define ysyx_22050598_OPCODE_ALU_IMM      7'b00_100_11
`define ysyx_22050598_OPCODE_ALU_REG      7'b01_100_11
`define ysyx_22050598_OPCODE_CSR_Break    7'b11_100_11
//`define ysyx_22050598_OPCODE_FENCE        7'b00_011_11

//decode rs1 rs2 
assign rs1 = inst[19:15]; 
assign rs2 = inst[24:20];
//decode rd
assign rd = inst[11:7]; 
//decode funct3、funct7
assign funct7 = inst[31:25]; 
assign funct3 = inst[14:12]; 
//decode OPCODE
wire inst_is_LUI;
wire inst_is_AUIPC; 
wire inst_is_JAL;
wire inst_is_JALR;
wire inst_is_BRANCH;
wire inst_is_LOAD;
wire inst_is_STORE;
wire inst_is_ALU_IMM;
wire inst_is_ALU_REG;
wire inst_is_BREAK;

assign inst_is_LUI = (inst[6:0] == ysyx_22050598_OPCODE_LUI);
assign inst_is_AUIPC = (inst[6:0] == ysyx_22050598_OPCODE_AUIPC);
assign inst_is_JAL = (inst[6:0] == ysyx_22050598_OPCODE_JAL);
assign inst_is_JALR = (inst[6:0] == ysyx_22050598_OPCODE_JALR);
assign inst_is_BRANCH = (inst[6:0] == ysyx_22050598_OPCODE_BRANCH);
assign inst_is_LOAD = (inst[6:0] == ysyx_22050598_OPCODE_LOAD);
assign inst_is_STORE = (inst[6:0] == ysyx_22050598_OPCODE_STORE);
assign inst_is_ALU_IMM = (inst[6:0] == ysyx_22050598_OPCODE_ALU_IMM);
assign inst_is_ALU_REG = (inst[6:0] == ysyx_22050598_OPCODE_ALU_REG);
assign inst_is_BREAK = (inst[6:0] == ysyx_22050598_OPCODE_CSR_BREAK);
//decode type
assign type =  (inst_is_LUI | inst_is_AUIPC) ? `ysyx_22050598_U_TYPE  : 				//U-type
	(inst_is_JAL) ? `ysyx_22050598_J_TYPE :		    	  					//J-type
	(inst_is_JALR | inst_is_ALU_IMM | inst_is_BREAK | inst_is_LOAD) ? `ysyx_22050598_I_TYPE:   	//I-type
	(inst_is_BRANCH) ? `ysyx_22050598_B_TYPE:              	 					//B-type
	(inst_is_STORE) ? `ysyx_22050598_S_TYPE:		        				//S-type
	(inst_is_ALU_REG) ? `ysyx_22050598_R_TYPE:		   					//R-type
	6'b000000;											//N-type	
//decode signed imm
wire [63:0] Iimm = {{53{inst[31]}}, inst[30:20]};
wire [63:0] Simm = {{53{inst[31]}}, inst[30:25], inst[11:7]};
wire [63:0] Bimm = {{52{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0};
wire [63:0] Uimm = {{33{inst[31]}}, inst[30:12], 12'b0};
wire [63:0] Jimm = {{44{inst[31]}}, inst[19:12], instr[20], inst[30:21], 1'b0};   
//unsigned imm
wire [63:0] IimmU = {52'b0, inst[31:20]};
wire [63:0] SimmU = {52'b0, inst[31:25], inst[11:7]};
wire [63:0] BimmU = {51'b0, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
wire [63:0] UimmU = {32'b0,inst[31:12], 12'b0};
wire [63:0] JimmU = {43'b0,inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};


assign imm = {64{type[5]}} & Iimm
           | {64{type[4]}} & Simm
           | {64{type[3]}} & Bimm
           | {64{type[2]}} & Uimm
           | {64{type[1]}} & Jimm;

assign immU = {64{type[5]}} & IimmU
           | {64{type[4]}}  & SimmU
           | {64{type[3]}}  & BimmU
           | {64{type[2]}}  & UimmU
           | {64{type[1]}}  & JimmU;


endmodule
