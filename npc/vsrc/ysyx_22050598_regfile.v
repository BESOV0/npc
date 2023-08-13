`include "ysyx_22050598_defines.v"
module ysyx_22050598_regfile (
    input                                     clk             ,
    input                                     rst             ,

    input  [`ysyx_22050598_RF_ADDR_WIDTH-1:0] read_rs1_idx    ,
    input  [`ysyx_22050598_RF_ADDR_WIDTH-1:0] read_rs2_idx    ,
    output [`ysyx_22050598_RF_DATA_LEN-1:0]   read_rs1_data   ,
    output [`ysyx_22050598_RF_DATA_LEN-1:0]   read_rs2_data   ,  

    input                                     write_en        ,
    input  [`ysyx_22050598_RF_ADDR_WIDTH-1:0] write_rd_idx    ,
    input  [`ysyx_22050598_RF_DATA_LEN-1:0]   write_rd_data   ,
    //test
    output [63:0]                             ebreak_a0
);

    wire [`ysyx_22050598_RF_LEN-1:0] rf_r [31:0];
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    initial set_gpr_ptr(rf_r);
    wire [31:0] rf_wen;
    genvar i;
    generate 
      for (i=0; i<32; i=i+1) begin:regfile
        if(i==0) begin // x0 is constant zero
            assign rf_wen[i] = 1'b0;
            assign rf_r[i] = `ysyx_22050598_RF_LEN'b0;
        end
        else begin
            assign rf_wen[i] = write_en & (write_rd_idx == i) ;
            ysyx_22050598_sirv_gnrl_dfflr #(`ysyx_22050598_RF_LEN) regfile_dfflr(rf_wen[i], write_rd_data, rf_r[i], clk, rst);
        end
      end
    endgenerate

  assign read_rs1_data = rf_r[read_rs1_idx];
  assign read_rs2_data = rf_r[read_rs2_idx];
  assign ebreak_a0     = rf_r[10];
endmodule