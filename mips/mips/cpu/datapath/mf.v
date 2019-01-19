`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    08:51:58 12/03/2018 
// Design Name: 
// Module Name:    MF_D 
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
module mf(
    input [31:0] PC4E,
    input [31:0] AO,
    input [31:0] PC4M,
    input [31:0] Wd,
    input [31:0] Rd,
    input [2:0] Forward_Sel,
    output [31:0] MF_OUT
    );
	
	`include "header_hazard.v"
	`include "header_debug.v"

	assign MF_OUT = (Forward_Sel == `mf_pc4e) ? (PC4E+4) : 
	                (Forward_Sel == `mf_ao) ? AO : 
						 (Forward_Sel == `mf_pc4m) ? (PC4M+4) : 
						 (Forward_Sel == `mf_wd) ? Wd : 
						 (Forward_Sel == `mf_rd) ? Rd : 
						 `debug_mf; 

endmodule
