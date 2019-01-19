`define data_start 32'h0000_0000
`define data_end 32'h0000_2000

`define text_start 32'h0000_3000
`define handler_start 32'h0000_4180
`define text_end 32'h0000_5000

// External
`define external_start 32'h0000_7f00

`define timer_start 32'h0000_7f00
`define timer_ctrl_addr 32'h00007f00
`define timer_preset_addr 32'h00007f04
`define timer_count_addr 32'h00007f08
`define timer_end 32'h0000_7f0c

`define uart_start 32'h0000_7f10
`define uart_end 32'h0000_7f2c

`define switch_start 32'h0000_7f2c
`define switch_end 32'h0000_7f34

`define led_start 32'h0000_7f34
`define led_end 32'h0000_7f38

`define tube_start 32'h0000_7f38
`define tube_end 32'h0000_7f40

`define key_start 32'h0000_7f40
`define key_end 32'h0000_7f44

`define external_end 32'h0000_7f44