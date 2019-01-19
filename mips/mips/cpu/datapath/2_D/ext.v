`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:30:53 11/25/2018 
// Design Name: 
// Module Name:    ext 
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
module ext(
    input [1:0] ExtOp,
    input [15:0] Imm,
    output [31:0] Ext
    );

	`include "header_ctrl.v"
	`include "header_debug.v"
	
	assign Ext = (ExtOp == `ext_unsigned) ? {16'b0, Imm} :
						(ExtOp == `ext_signed) ? {{16{Imm[15]}}, Imm} :
						(ExtOp == `ext_lui) ? {Imm, 16'b0} :
						`debug_ext;

endmodule
