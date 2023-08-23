module S011HD1P_X32Y2D128_BW(
    output [127:0]       Q     ,
    input                CLK   ,
    input                CEN   ,
    input                WEN   ,
    input  [127:0]       BWEN  ,
    input  [5:0]         A     ,
    input  [127:0]       D     
);

wire cen  = ~CEN;
wire wen  = ~WEN;
wire [127:0] bwen = ~BWEN;

reg [127:0] ram [63:0];
always @(posedge CLK) begin
    if(cen & wen) begin
        ram[A] <= (D & bwen) | (ram[A] & BWEN);
    end
end

   assign Q = {128{(cen & ~wen)}} & ram[A] ;

endmodule