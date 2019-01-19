`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:41:45 12/03/2018 
// Design Name: 
// Module Name:    im 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module im(
    input [31:0] Addr,
	 input Clk,
    output [31:0] Instr
    );

	`include "header_addr.v"
	
	BRAM_IM BRAM_IM (
	 .clka(Clk), // input clka
	 .wea(4'b0), // input [3 : 0] wea
	 .addra(Addr - `text_start), // input [31 : 0] addra
	 .dina(32'b0), // input [31 : 0] dina
	 .douta(Instr) // output [31 : 0] douta
	 );
	 
	/*reg [31:0] im[4095:0];
	integer i;
	initial begin
		for(i=0; i<4096; i=i+1) im[i] = 32'b0;
		$readmemh("code.txt", im);
		$readmemh("code_handler.txt", im, 1120, 2047);
	end
	assign Instr = im[Addr[13:2]-12'b1100_0000_0000];*/
	
endmodule
