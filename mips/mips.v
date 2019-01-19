`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:56:13 12/11/2018 
// Design Name: 
// Module Name:    mips 
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
module mips(
    input clk_in,
    input sys_rstn,
	 input uart_rxd,
	 output uart_txd,
	 input [7:0] dip_switch0,
	 input [7:0] dip_switch1,
	 input [7:0] dip_switch2,
	 input [7:0] dip_switch3,
	 input [7:0] dip_switch4,
	 input [7:0] dip_switch5,
	 input [7:0] dip_switch6,
	 input [7:0] dip_switch7,
	 input [7:0] user_key,
	 output [31:0] led_light,
	 output [7:0] digital_tube0,
	 output [3:0] digital_tube_sel0,
	 output [7:0] digital_tube1,
	 output [3:0] digital_tube_sel1,
	 output [7:0] digital_tube2,
	 output digital_tube_sel2
    );

	assign Reset = ~sys_rstn; 
	
	wire [3:0] Be;
	wire [31:2] PrAddr;
	wire [31:0] PrRD, PrWD;
	wire PrWe;
	
	wire IRQ_timer, IRQ_uart, IRQ_switch, IRQ_key;
	wire [7:2] HWInt;
	assign HWInt = {IRQ_key, 1'b0, 1'b0, IRQ_switch, IRQ_uart, IRQ_timer};
	
	wire [1:0] timer_addr;
	wire [31:0] timer_RD, timer_WD;
	wire timer_We;
	
	wire [2:0] uart_addr;
	wire [31:0] uart_RD, uart_WD;
	wire uart_We, uart_Sel;
	
	wire switch_addr;
	wire [31:0] switch_RD;
	
	wire [31:0] led_RD, led_WD;
	wire led_We;
	
	wire [3:0] tube_Be;
	wire tube_addr;
	wire [31:0] tube_RD, tube_WD;
	wire tube_We;
	
	wire [31:0] key_RD;
	 
	CLOCK Clock (// Clock in ports
    .CLK_IN1(clk_in),      // IN
    // Clock out ports
    .CLK_OUT1(Clk),     // OUT
    .CLK_OUT2(Clk2));    // OUT
	
	cpu CPU (
    .Clk(Clk), 
    .Clk2(Clk2), 
    .Reset(Reset), 
    .HWInt(HWInt), 
    .Be(Be), 
    .PrRD(PrRD), 
    .PrAddr(PrAddr), 
    .PrWD(PrWD), 
    .PrWe(PrWe)
    );
	 
	bridge Bridge (
    .Be(Be), 
    .PrAddr(PrAddr), 
    .PrRD(PrRD), 
    .PrWD(PrWD), 
    .PrWe(PrWe), 
    .timer_addr(timer_addr), 
    .timer_RD(timer_RD), 
    .timer_WD(timer_WD), 
    .timer_We(timer_We), 
    .uart_addr(uart_addr), 
    .uart_RD(uart_RD), 
    .uart_WD(uart_WD), 
    .uart_We(uart_We), 
	 .uart_Sel(uart_Sel),
    .switch_addr(switch_addr), 
    .switch_RD(switch_RD), 
    .led_RD(led_RD), 
    .led_WD(led_WD), 
    .led_We(led_We), 
    .tube_Be(tube_Be), 
	 .tube_addr(tube_addr),
    .tube_RD(tube_RD), 
    .tube_WD(tube_WD), 
    .tube_We(tube_We), 
    .key_RD(key_RD)
    );
	 
	timer Timer (
    .Addr(timer_addr), 
    .Wd(timer_WD), 
    .We(timer_We), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd(timer_RD), 
    .IRQ(IRQ_timer)
    );
	 
	MiniUART UART (
    .ADD_I(uart_addr), 
    .DAT_I(uart_WD), 
    .DAT_O(uart_RD),
	 .STB_I(uart_Sel),
    .WE_I(uart_We), 
    .CLK_I(Clk), 
    .RST_I(Reset), 
    .RxD(uart_rxd), 
    .TxD(uart_txd),
	 .IRQ(IRQ_uart)
    );
	 
	switch Switch (
    .Addr(switch_addr), 
    .Wd(~{dip_switch7, dip_switch6, dip_switch5, dip_switch4, dip_switch3, dip_switch2, dip_switch1, dip_switch0}), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd(switch_RD), 
    .IRQ(IRQ_switch)
    );
	 
	led LED (
    .Wd(led_WD), 
    .We(led_We), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd(led_RD), 
    .led_light(led_light)
    );
	 
	tube Tube (
    .Be(tube_Be), 
	 .Addr(tube_addr),
    .Wd(tube_WD), 
    .We(tube_We), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd(tube_RD), 
    .digital_tube0(digital_tube0), 
    .digital_tube_sel0(digital_tube_sel0), 
    .digital_tube1(digital_tube1), 
    .digital_tube_sel1(digital_tube_sel1), 
    .digital_tube2(digital_tube2), 
    .digital_tube_sel2(digital_tube_sel2)
    );
	 
	key Key (
    .Wd(~user_key), 
    .Clk(Clk), 
    .Reset(Reset), 
    .Rd(key_RD), 
    .IRQ(IRQ_key)
    );

endmodule
