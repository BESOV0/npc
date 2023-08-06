module ysyx_22050598_exu_rd_mux (
    input [63:0]   csr_rd_data     ,
    input [63:0]   alu_rd_data     ,
    input          csr_ena         ,
    output [63:0]  alu_rd_data_o
);

    assign alu_rd_data_o = csr_ena ? csr_rd_data : alu_rd_data;
    
endmodule