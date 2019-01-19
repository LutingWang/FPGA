`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:09:31 12/16/2018 
// Design Name: 
// Module Name:    be 
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
module be(
    input [1:0] Addr,
    input [1:0] BEOp,
    output reg [3:0] Be
    );
	 
	`include "header_ctrl.v"
	
	always @(*) begin
		case (BEOp)
			`be_byte: begin
				Be = (Addr[1:0] == 2'b00) ? 4'b0001 :
						(Addr[1:0] == 2'b01) ? 4'b0010 :
						(Addr[1:0] == 2'b10) ? 4'b0100 :
						(Addr[1:0] == 2'b11) ? 4'b1000 :
						4'b0000;
			end
			`be_half: begin
				Be = (Addr[1] == 1'b0) ? 4'b0011 : 
						(Addr[1] == 1'b1) ? 4'b1100 :
						4'b0000;
			end
			`be_word: begin
				Be = 4'b1111;
			end
			`be_default: begin
				Be = 4'b0000;
			end
		endcase
	end


endmodule
