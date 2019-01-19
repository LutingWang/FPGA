`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:01 12/25/2018 
// Design Name: 
// Module Name:    key 
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
module key(
    input [7:0] Wd,
	 input Clk,
    input Reset,
    output [31:0] Rd,
	 output reg IRQ
    );
	
	reg [7:0] data;
	assign Rd = {24'b0, data};
	
	always @(posedge Clk) begin
		IRQ = 1'b0;
		if (Reset) data = 8'b0;
		else if (data != Wd) begin
			data = Wd;
			IRQ = 1'b1;
		end
	end

endmodule
