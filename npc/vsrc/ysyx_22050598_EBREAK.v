module ysyx_22050598_EBREAK(
    input ebreak_flag,
    input [63:0] ebreak_a0
);

import "DPI-C" function int ebreak(input longint ebreak_a0);

always @(*) begin
    if(ebreak_flag) 
    ebreak(ebreak_a0);       
end

endmodule
