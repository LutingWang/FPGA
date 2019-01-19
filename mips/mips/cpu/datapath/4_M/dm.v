`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:29:12 11/25/2018 
// Design Name: 
// Module Name:    dm 
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
module dm(
    input [31:0] Addr,
    input [31:0] Din,
	 input [3:0] Be, 
    input We,
    input Clk,
    output [31:0] Dout
    );
	
	`include "header_debug.v"
	
	wire [31:0] D2write;
	assign D2write = (Be == 4'b0001) ? {Dout[31:8], Din[7:0]} :
							(Be == 4'b0010) ? {Dout[31:16], Din[7:0], Dout[7:0]} :
							(Be == 4'b0100) ? {Dout[31:24], Din[7:0], Dout[15:0]} :
							(Be == 4'b1000) ? {Din[7:0], Dout[23:0]} :
							(Be == 4'b0011) ? {Dout[31:16], Din[15:0]} :
							(Be == 4'b1100) ? {Din[15:0], Dout[15:0]} :
							(Be == 4'b1111) ? Din :
							`debug_dm;
	
	BRAM_DM BRAM_DM (
	 .clka(Clk), // input clka
	 .wea(Be & {4{We}}), // input [3 : 0] wea
	 .addra(Addr), // input [31 : 0] addra
	 .dina(D2write), // input [31 : 0] dina
	 .douta(Dout) // output [31 : 0] douta
	 );

endmodule
