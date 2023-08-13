`include "ysyx_22050598_defines.v"
module ysyx_22050598_ifu_bpu(
    input  [31:0] if_inst           ,
    output [63:0] bpu_pc_add_op     ,
    output        prdt_taken                  
);
    //Because the jalr instruction has data correlation issues, it is used to block the pipeline until it is completely executed
    wire inst_is_jal  = (if_inst[6:0] == `ysyx_22050598_OPCODE_JAL   );
    wire inst_is_bxx  = (if_inst[6:0] == `ysyx_22050598_OPCODE_BRANCH);
    //wire inst_is_jalr = (if_inst[6:0] == `ysyx_22050598_OPCODE_JALR) & (~(|if_inst[14:12]));

    wire [63:0] Bimm = {{52{if_inst[31]}}, if_inst[7]    , if_inst[30:25], if_inst[11:8] , 1'b0};
    wire [63:0] Jimm = {{44{if_inst[31]}}, if_inst[19:12], if_inst[20]   , if_inst[30:21], 1'b0};  
    //wire [63:0] Iimm = {{53{if_inst[31]}}, if_inst[30:20]};
    
    assign bpu_pc_add_op  = ({64{inst_is_jal }} & Jimm) |
                            //({64{inst_is_jalr}} & Iimm) |                     
                            ({64{inst_is_bxx }} & Bimm) ; 
    assign prdt_taken   = inst_is_jal | (inst_is_bxx & Bimm[63]) ;//| inst_is_jalr;

endmodule