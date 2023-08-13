module ysyx_22050598_lsu_rd_mux (
    input  [63:0]  ls_alu_rd_data ,
    input  [63:0]  ls_lsu_rd_data ,
    input          ls_load_en     ,
    output [63:0]  ls_rd_data    
);

  assign ls_rd_data = ls_load_en ? ls_lsu_rd_data : ls_alu_rd_data ;

endmodule