module vga_top(
    input clk,
    input rst,
    input ps2_clk,
    input ps2_data,
    output VGA_CLK,
    output VGA_HSYNC,
    output VGA_VSYNC,
    output VGA_BLANK_N,
    output [7:0] VGA_R,
    output [7:0] VGA_G,
    output [7:0] VGA_B
);
assign VGA_CLK = clk;

wire [9:0] h_addr;
wire [9:0] v_addr;
wire [23:0] vga_data;
wire [7:0]ascaii;
wire sflag;
wire flag;
vga my_vga_ctrl(
    .clk(clk),
    .rst(rst),
    .vga_data(vga_data),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .hsync(VGA_HSYNC),
    .vsync(VGA_VSYNC),
    .valid(VGA_BLANK_N),
    .vga_r(VGA_R),
    .vga_g(VGA_G),
    .vga_b(VGA_B)
);

vga_keyboard u_vga_keyboard(
    .clk(clk),
    .rst(rst),
    .ps2_clk(ps2_clk),
    .ps2_data(ps2_data),
    .sflag(sflag),
    .flag(flag),
    .ascaii(ascaii)
);

vga_vmem my_vmem(
    .clk(clk),
    .rst(rst),
    .ascaii(ascaii),
    .sflag(sflag),
    .flag(flag),
    .h_addr(h_addr),
    .v_addr(v_addr),
    .vga_data(vga_data)
);

endmodule
