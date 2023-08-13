`include "ysyx_22050598_defines.v"
module ysyx_22050598_idu_forward (
    //id part
    input [4:0]      id_rs1_idx        ,
    input [4:0]      id_rs2_idx        ,
    input [2:0]      alu_op_a_sel      ,//Selection signal for operand A  reg pc imm, this reg is rs1
    input [1:0]      alu_op_b_sel      ,//Selection signal for operand B  reg imm
    input [4:0]      id_rd_idx         ,
    input [63:0]     rs1_data          ,
    input [63:0]     rs2_data          ,
    input [63:0]     id_imm            ,
    input [63:0]     pc_data           ,
    input [5:0]      id_branch_bus     ,
    input            id_inst_is_csri   ,
    input            id_inst_is_store  ,
    //ex part  
    input [4:0]      ex_rd_idx         ,
    input            ex_rd_en          ,//inst which used rd but also include load
    input            ex_load_en        ,
    input [63:0]     ex_alu_data       ,
    //mem part 
    input [4:0]      mem_rd_idx        ,
    input            mem_rd_en         ,//inst is load signal
    input [63:0]     mem_data          ,
    //wb back  
    input [4:0]      wb_rd_idx         ,
    input            wb_rd_en          ,
    input [63:0]     wb_data           ,

    output           forward_load_stall,
    output [63:0]    alu_op_a          ,
    output [63:0]    alu_op_b          ,
    output [63:0]    ex_bs_zimm_data    
   );
    
    wire [4:0] id_rs1_idx_vaild = id_rs1_idx & {5{alu_op_a_sel[2]}};
    wire [4:0] id_rs2_idx_vaild = id_rs2_idx & {5{alu_op_b_sel[1] | id_inst_is_store}};

    wire ex_rd_idx_not_zero   = |ex_rd_idx   ;
    wire mem_rd_idx_not_zero  = |mem_rd_idx  ;
    wire wb_rd_idx_not_zero   = |wb_rd_idx   ;

    wire ex_forward_rs1    = ((ex_rd_en & (~ex_load_en)) & (~(|(ex_rd_idx ^ id_rs1_idx_vaild)))) & ex_rd_idx_not_zero ;
    wire mem_forward_rs1   = (mem_rd_en & (~(|(mem_rd_idx ^ id_rs1_idx_vaild)))) & mem_rd_idx_not_zero ;
    wire wb_forward_rs1    = (wb_rd_en  & (~(|(wb_rd_idx  ^ id_rs1_idx_vaild)))) & wb_rd_idx_not_zero  ;

    wire ex_forward_rs2    = ((ex_rd_en & (~ex_load_en)) & (~(|(ex_rd_idx ^ id_rs2_idx_vaild)))) & ex_rd_idx_not_zero ;
    wire mem_forward_rs2   = (mem_rd_en & (~(|(mem_rd_idx ^ id_rs2_idx_vaild)))) & mem_rd_idx_not_zero ;
    wire wb_forward_rs2    = (wb_rd_en  & (~(|(wb_rd_idx  ^ id_rs2_idx_vaild)))) & wb_rd_idx_not_zero  ;


    wire [63:0] forward_rs1_data = ex_forward_rs1  ? ex_alu_data  :
                                   mem_forward_rs1 ? mem_data     :
                                   wb_forward_rs1  ? wb_data      :
                                   rs1_data        ;

    wire [63:0] forward_rs2_data = ex_forward_rs2  ? ex_alu_data  :
                                   mem_forward_rs2 ? mem_data     :
                                   wb_forward_rs2  ? wb_data      :
                                   rs2_data        ;
                

    assign alu_op_a = ({64{alu_op_a_sel[2]}} & forward_rs1_data)
                    | ({64{alu_op_a_sel[1]}} & pc_data)
                    | ({64{alu_op_a_sel[0]}} & 64'b0);
    
    assign alu_op_b = ({64{alu_op_b_sel[1]}} & forward_rs2_data)
                    | ({64{alu_op_b_sel[0]}} & id_imm);

    assign ex_bs_zimm_data = ({64{(|id_branch_bus)}} & id_imm )           | 
                             ({64{id_inst_is_store}} & forward_rs2_data)  |
                             ({64{id_inst_is_csri}}  & {59'd0,id_rs1_idx});
    //inst is load and rd data generate at next stage
    wire ex_load_stall_rs1    = ex_load_en & (~(|(ex_rd_idx ^ id_rs1_idx_vaild))) & ex_rd_idx_not_zero ;
    wire ex_load_stall_rs2    = ex_load_en & (~(|(ex_rd_idx ^ id_rs2_idx_vaild))) & ex_rd_idx_not_zero ;
    assign forward_load_stall = ex_load_stall_rs1 | ex_load_stall_rs2 ;
   endmodule