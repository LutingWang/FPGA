`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:07:21 12/25/2018 
// Design Name: 
// Module Name:    led 
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
module led(
    input [31:0] Wd,
    input We,
    input Clk,
    input Reset,
    output [31:0] Rd,
    output [31:0] led_light 
    );
	 
	reg [31:0] data;
	assign Rd = data;
	assign led_light = ~data;
	
	always @(posedge Clk) begin
		if (Reset) data = 0;
		else if (We) data = Wd;
	end

endmodule
