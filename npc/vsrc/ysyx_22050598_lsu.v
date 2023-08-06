module ysyx_22050598_lsu (
    input [63:0]    store_data,
    input [63:0]    ls_loc,
    input           load_en,
    input           store_en,
    input [1:0]     ls_type,
    input           load_unsigned,
    output [63:0]   load_data
);
    /*
    wire [63:0] raddr = {ls_loc[63:3],3'b0};
    wire [63:0] rdata;
    wire [63:0] waddr = raddr;
    wire [63:0] wdata;
    wire [7:0]  wmask;

    wire size_b  = (ls_type == 2'b00) ;
    wire size_hw = (ls_type == 2'b01) ;
    wire size_w  = (ls_type == 2'b10) ;
    wire size_dw = (ls_type == 2'b11) ;

    wire loc3_000 = (ls_loc[2:0] == 3'b000);
    wire loc3_001 = (ls_loc[2:0] == 3'b001);
    wire loc3_010 = (ls_loc[2:0] == 3'b010);
    wire loc3_011 = (ls_loc[2:0] == 3'b011);
    wire loc3_100 = (ls_loc[2:0] == 3'b100);
    wire loc3_101 = (ls_loc[2:0] == 3'b101);
    wire loc3_110 = (ls_loc[2:0] == 3'b110);
    wire loc3_111 = (ls_loc[2:0] == 3'b111);


    assign wdata = ({64{size_b}}  & {8{store_data[7:0]}})  |
                   ({64{size_hw}} & {4{store_data[15:0]}}) |
                   ({64{size_w}}  & {2{store_data[31:0]}}) |
                   ({64{size_dw}} & store_data)            ;

    wire [7:0] byte_wmask = ({8{loc3_000}} & 8'b00000001)  |
                            ({8{loc3_001}} & 8'b00000010)  |
                            ({8{loc3_010}} & 8'b00000100)  |
                            ({8{loc3_011}} & 8'b00001000)  |
                            ({8{loc3_100}} & 8'b00010000)  |
                            ({8{loc3_101}} & 8'b00100000)  |
                            ({8{loc3_110}} & 8'b01000000)  |
                            ({8{loc3_111}} & 8'b10000000)  ;

    wire [7:0] dbyte_wmask = ({8{loc3_000}} & 8'b00000011) |
                             ({8{loc3_001}} & 8'b00000110) |
                             ({8{loc3_010}} & 8'b00001100) |
                             ({8{loc3_011}} & 8'b00011000) |
                             ({8{loc3_100}} & 8'b00110000) |
                             ({8{loc3_101}} & 8'b01100000) |
                             ({8{loc3_110}} & 8'b11000000) |
                             ({8{loc3_111}} & 8'b10000000) ;  

    wire [7:0] wbyte_wmask = ({8{loc3_000}} & 8'b00001111) |
                             ({8{loc3_001}} & 8'b00011110) |
                             ({8{loc3_010}} & 8'b00111100) |
                             ({8{loc3_011}} & 8'b01111000) |
                             ({8{loc3_100}} & 8'b11110000) |
                             ({8{loc3_101}} & 8'b11100000) |
                             ({8{loc3_110}} & 8'b11000000) |
                             ({8{loc3_111}} & 8'b10000000) ;

    wire wunalgn_hw_111 = loc3_111 & size_hw;
    wire wunalgn_w_101  = loc3_101 & size_w;
    wire wunalgn_w_110  = loc3_110 & size_w;
    wire wunalgn_w_111  = loc3_111 & size_w;

    wire [7:0] wunalgn_wmask  = ({8{wunalgn_hw_111}} & 8'b00000001) |
                                ({8{wunalgn_w_101}}  & 8'b00000001) |
                                ({8{wunalgn_w_110}}  & 8'b00000011) |
                                ({8{wunalgn_w_111}}  & 8'b00000111) ;

    assign wmask =  ({8{size_b}}  & byte_wmask  ) |
                    ({8{size_hw}} & dbyte_wmask ) |
                    ({8{size_w}}  & wbyte_wmask ) |
                    ({8{size_dw}} & 8'b11111111 ) ;

    import "DPI-C" function void pmem_read (input longint raddr, output longint rdata);
    import "DPI-C" function void pmem_write(input longint waddr, input longint wdata, input byte wmask);
    
    always @(*) begin
        if(load_en == 1'b1)
        pmem_read(raddr, rdata);
    end

    always @(*) begin
        if(store_en == 1'b1)
        pmem_write(waddr, wdata, wmask);
    end

    wire [7:0] temp_byte_load_data =  ({8{loc3_000}} & rdata[7:0])    |
                                      ({8{loc3_001}} & rdata[15:8])   |
                                      ({8{loc3_010}} & rdata[23:16])  |
                                      ({8{loc3_011}} & rdata[31:24])  |
                                      ({8{loc3_100}} & rdata[39:32])  |
                                      ({8{loc3_101}} & rdata[47:40])  |
                                      ({8{loc3_110}} & rdata[55:48])  |
                                      ({8{loc3_111}} & rdata[63:56])  ;

    wire [15:0] temp_dbyte_load_data = ({16{loc3_000}} & rdata[15:0])   |
                                       ({16{loc3_001}} & rdata[23:8])   |
                                       ({16{loc3_010}} & rdata[31:16])  |
                                       ({16{loc3_011}} & rdata[39:24])  |
                                       ({16{loc3_100}} & rdata[47:32])  |
                                       ({16{loc3_101}} & rdata[55:40])  |
                                       ({16{loc3_110}} & rdata[63:48])  ;


    wire [31:0] temp_word_load_data =   ({32{loc3_000}} & rdata[31:0])  |
                                        ({32{loc3_001}} & rdata[39:8])  |
                                        ({32{loc3_010}} & rdata[47:16]) |
                                        ({32{loc3_011}} & rdata[55:24]) |
                                        ({32{loc3_100}} & rdata[63:32]) ;

    assign load_data =  ({64{size_b}}  & {{56{temp_byte_load_data[7]   & ~load_unsigned}},temp_byte_load_data }) |
                        ({64{size_hw}} & {{48{temp_dbyte_load_data[15] & ~load_unsigned}},temp_dbyte_load_data}) |
                        ({64{size_w}}  & {{32{temp_word_load_data[31]  & ~load_unsigned}},temp_word_load_data }) |
                        ({64{size_dw}} & rdata ) ;
    */
    
    wire [63:0] raddr = ls_loc;
    wire [63:0] rdata;
    wire [63:0] waddr = raddr;
    wire [63:0] wdata;
    wire [7:0]  rlen;
    wire [7:0]  wlen;

    wire size_b  = (ls_type == 2'b00) ;
    wire size_hw = (ls_type == 2'b01) ;
    wire size_w  = (ls_type == 2'b10) ;
    wire size_dw = (ls_type == 2'b11) ;

    assign wdata = ({64{size_b}}  & {8{store_data[7:0]}})  |
                   ({64{size_hw}} & {4{store_data[15:0]}}) |
                   ({64{size_w}}  & {2{store_data[31:0]}}) |
                   ({64{size_dw}} & store_data)            ;

    assign rlen = ({8{size_b}}  & 8'd1) |
                  ({8{size_hw}} & 8'd2) |
                  ({8{size_w}}  & 8'd4) |
                  ({8{size_dw}} & 8'd8) ;

    assign wlen = rlen ;

    import "DPI-C" function void pmem_read_test(input longint raddr, output longint rdata, input byte rlen);
    import "DPI-C" function void pmem_write_test(input longint waddr, input longint wdata, input byte wlen);
    
    always @(*) begin
        if(load_en == 1'b1)
        pmem_read_test(raddr, rdata, rlen);
    end

    always @(*) begin
        if(store_en == 1'b1)
        pmem_write_test(waddr, wdata, wlen);
    end


    assign load_data =  ({64{size_b}}  & {{56{rdata[7]   & ~load_unsigned}},rdata[7:0]}) |
                        ({64{size_hw}} & {{48{rdata[15]  & ~load_unsigned}},rdata[15:0]}) |
                        ({64{size_w}}  & {{32{rdata[31]  & ~load_unsigned}},rdata[31:0]}) |
                        ({64{size_dw}} & rdata ) ;



endmodule