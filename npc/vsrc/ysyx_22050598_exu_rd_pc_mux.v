module ysyx_22050598_exu_rd_pc_mux (
    input [63:0]   csr_rd_pc_data   ,
    input [63:0]   alu_rd_data      ,
    input [63:0]   alu_pc_data      ,
    input          csr_rd_en        ,
    input          alu_pc_en        ,
    input          csr_mret         ,
    input          csr_ecall        ,
    output         ex_pc_data_ena_o ,
    output [63:0]  ex_rd_data_o     ,
    output [63:0]  ex_pc_data_o 
);
    wire csr_pc_en = csr_ecall | csr_mret;
    assign ex_pc_data_ena_o = alu_pc_en | csr_pc_en ;
    assign ex_rd_data_o = csr_rd_en ? csr_rd_pc_data : alu_rd_data;
    assign ex_pc_data_o = csr_pc_en ? csr_rd_pc_data : alu_pc_data;


    
endmodule