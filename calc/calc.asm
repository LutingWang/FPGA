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

li $t0, 0 # {16'b0, IM[7:2](000000), 8'b0, EXL, IE}
mtc0 $t0, $12
la $ra, start
start:
# $s3 = result
lw $s0, 0x00007f2c # rd1
lw $s1, 0x00007f30 # rd2
lw $s2, 0x00007f40 # op
sw $s3, 0x00007f34 # show data on led
li $t0, 1
bne $s2, $t0, not_add
	nop
	addu $s3, $s0, $s1
	sw $s3, 0x00007f38
	jr $ra
	nop
not_add:
li $t0, 2
bne $s2, $t0, not_sub
	nop
	subu $s3, $s0, $s1
	sw $s3, 0x00007f38
	jr $ra
	nop
not_sub:
li $t0, 4
bne $s2, $t0, not_and
	nop
	and $s3, $s0, $s1
	sw $s3, 0x00007f38
	jr $ra
	nop
not_and:
li $t0, 8
bne $s2, $t0, not_or
	nop
	or $s3, $s0, $s1
	sw $s3, 0x00007f38
	jr $ra
	nop
not_or:
li $t0, 16
bne $s2, $t0, not_xor
	nop
	xor $s3, $s0, $s1
	sw $s3, 0x00007f38
	jr $ra
	nop
not_xor:
li $t0, 32
bne $s2, $t0, not_sllv
	nop
	sllv $s3, $s1, $s0
	sw $s3, 0x00007f38
	jr $ra
	nop
not_sllv:
li $t0, 64
bne $s2, $t0, not_srlv
	nop
	srlv $s3, $s1, $s0
	sw $s3, 0x00007f38
	jr $ra
	nop
not_srlv:
li $t0, 128
bne $s2, $t0, not_srav
	nop
	srav $s3, $s1, $s0
	sw $s3, 0x00007f38
	jr $ra
	nop
not_srav:
li $t0, 0
bne $s2, $t0, not_remain
	nop
	jr $ra
	nop
not_remain:
sw $0, 0x00007f38
jr $ra
