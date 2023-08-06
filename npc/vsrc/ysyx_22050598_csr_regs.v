`include "defines.v"   
module ysyx_22050598_csr_regs (
    input                                     clk             ,
    input                                     rst             ,

    input  [1:0]                              read_csr_idx    ,
    output [`ysyx_22050598_RF_DATA_LEN-1:0]   read_csr_data   , 

    input                                     write_en        ,
    input  [1:0]                              write_csr_idx   ,
    input  [`ysyx_22050598_RF_DATA_LEN-1:0]   write_csr_data  
);

    wire [`ysyx_22050598_RF_LEN-1:0] csr_r [3:0];
    wire [3:0] csr_wen;
    genvar i;
    generate 
      for (i=0; i<4; i=i+1) begin:regfile
            assign csr_wen[i] = write_en & (write_csr_idx == i);
            ysyx_22050598_sirv_gnrl_dfflr #(`ysyx_22050598_RF_LEN) csr_reg_dfflr(csr_wen[i], write_csr_data, csr_r[i], clk, rst);
        end
    endgenerate

  assign read_csr_data = csr_r[read_csr_idx];
endmodule