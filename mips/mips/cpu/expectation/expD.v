`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:03:12 12/10/2018 
// Design Name: 
// Module Name:    expD 
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
module expD(
    input [6:2] ExcCodeF,
    input [31:0] IRD,
    output [6:2] ExcCodeE
    );
	 
	`include "header_expint.v"
	 
	wire RI_exp;
	assign ExcCodeE = (ExcCodeF != `ExcCode_default) ? ExcCodeF :
								(RI_exp) ? `ExcCode_ri :
								`ExcCode_default;
	
	ctrl riD (
    .instr(IRD),
    .RI_exp(RI_exp)
    );


endmodule
