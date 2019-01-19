.ktext 0x00004180
nop
lw $t3, 0x7f10
sw $t3, 0($k1)
addi $k1, $k1, 4
bne $k1, $a1, if_2_end
	nop
	move $k1, $a0
if_2_end:
sw $k1, 0x7f38
eret

.text
nop # $cp0_cause = $13 = {BD, 15'b0, IP[7:2], 3'b0, ExcCode[6:2], 2'b0}
nop # HWInt = {IRQ_key, 1'b0, 1'b0, IRQ_switch, IRQ_uart, IRQ_timer}
nop # timer.control 0x7f00
nop # timer.preset  0x7f04
nop # timer.count   0x7f08
nop # uart   0x7f10 - 0x7f2c
nop # switch 0x7f2c - 0x7f34 rd
nop # led    0x7f34 - 0x7f38
nop # tube   0x7f38 - 0x7f40
nop # key    0x7f40 - 0x7f44 op
nop # op = [add, sub, and, or, xor, sllv, srlv, srav]

li $t0, 0x0801 # {16'b0, IM[7:2](000010), 8'b0, EXL, IE}
mtc0 $t0, $12
li $t0, 0x20 # extract ts 0x7f20 {26'b0, ts, 4'b0, rs}
li $a0, 0x1000 # queue start
li $a1, 0x1100 # queue end
move $k0, $a0 # current data to sent
move $k1, $a0 # current data read
la $ra, start
start:
	beq $k0, $k1, start
		nop
	lw $t1, 0x7f20
	and $t1, $t1, $t0
	bne $t1, $t0, start
		nop
	lw $t2, 0($k0)
	sw $t2, 0x7f10
	addi $k0, $k0, 4
	bne $k0, $a1, if_1_end
		nop
		move $k0, $a0
	if_1_end:
jr $ra
nop
###############################################################################
# direct
# .ktext 0x00004180
# nop
# lw $k0, 0x7f10
# sw $k0, 0x7f10
# mtc0 $ra, $14
# eret

# .text
# nop # $cp0_cause = $13 = {BD, 15'b0, IP[7:2], 3'b0, ExcCode[6:2], 2'b0}
# nop # HWInt = {IRQ_key, 1'b0, 1'b0, IRQ_switch, IRQ_uart, IRQ_timer}
# nop # switch 0x7f2c - 0x7f34 rd
# nop # key    0x7f40 - 0x7f44 op
# nop # op = [add, sub, and, or, xor, sllv, srlv, srav]
# nop # tube   0x7f38 - 0x7f40
# nop # uart   0x7f10 - 0x7f2c
# nop # led    0x7f34 - 0x7f38
# li $t0, 0x0801 # {16'b0, IM[7:2](000010), 8'b0, EXL, IE}
# mtc0 $t0, $12
# la $ra, start
# start:
# jr $ra
# nop
