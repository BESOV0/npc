module light(
  input clk,
  input rst,
  output reg [15:0] led
);
  reg [31:0] count;
  always @(posedge clk or negedge rst) 
  begin
    if (!rst) 
    begin 
    led <= 16'b1; 
    count <= 32'b0; 
    end
    else 
    begin
      if (count == 32'b0) 
      led <= {led[14:0], led[15]};
      count <= (count >= 5000000 ? 32'b0 : count + 1'b1);
    end
  end
endmodule
