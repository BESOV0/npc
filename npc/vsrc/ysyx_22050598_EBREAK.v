import "DPI-C" function void ebreak();
module ysyx_22050598_EBREAK(
    input ebreak_flag
);

always @(*) begin
    if(ebreak_flag) 
    ebreak();       
end

endmodule
