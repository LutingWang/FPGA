`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:53:54 12/03/2018 
// Design Name: 
// Module Name:    cmp 
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
module cmp(
    input [31:0] Rd1,
    input [31:0] Rd2,
    input [2:0] CmpOp,
    output Branch
    );
	 
	`include "header_ctrl.v"

	assign Branch = ((CmpOp == `cmp_eq && Rd1 == Rd2) || 
							(CmpOp == `cmp_gez && $signed(Rd1) >= 0) || 
							(CmpOp == `cmp_gtz && $signed(Rd1) > 0) ||
							(CmpOp == `cmp_lez && $signed(Rd1) <= 0) || 
							(CmpOp == `cmp_ltz && $signed(Rd1) < 0) || 
							(CmpOp == `cmp_ne && Rd1 != Rd2)) ? 1'b1 : 1'b0;

endmodule
