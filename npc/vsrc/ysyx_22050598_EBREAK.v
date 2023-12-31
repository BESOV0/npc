module ysyx_22050598_EBREAK(
    input ebreak_flag,
    input fencei_flag,
    input [63:0] ebreak_a0
);

import "DPI-C" function void ebreak(input longint ebreak_a0);
import "DPI-C" function void fencei();

always @(posedge ebreak_flag) begin
    //if(ebreak_flag) 
    ebreak(ebreak_a0);       
end

always @(posedge fencei_flag) begin
    //if(ebreak_flag) 
    fencei();    
end

endmodule
