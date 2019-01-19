`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:18 12/25/2018 
// Design Name: 
// Module Name:    switch 
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
module switch(
	 input Addr,
    input [63:0] Wd,
    input Clk,
    input Reset,
    output [31:0] Rd,
    output reg IRQ
    );

	reg [7:0] data[7:0];
	assign Rd = (Addr) ? {data[7], data[6], data[5], data[4]} : {data[3], data[2], data[1], data[0]};
	
	integer i;
	always @(posedge Clk) begin
		IRQ = 1'b0;
		if (Reset) begin
			for (i=0; i<8; i=i+1) data[i] = 8'b0;
		end else if (Wd != {data[7], data[6], data[5], data[4], data[3], data[2], data[1], data[0]}) begin
			{data[7], data[6], data[5], data[4], data[3], data[2], data[1], data[0]} = Wd;
			IRQ = 1;
		end
	end

endmodule
