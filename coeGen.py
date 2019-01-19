f_coe = open("mips\\ipcore_dir\\initial\\init_IM.coe", "w", encoding="utf-8")
f_code = open("mips\\code.txt", "r")
f_code_handler = open("mips\\code_handler.txt", "r")

f_coe.write("memory_initialization_radix=16; //16表示数据是二进制格式，也可以是8，10，16\nmemory_initialization_vector=\n")

cntCode = 0
cntHandler = int(0x1180/4)

for code in f_code:
	f_coe.write(code[:-1] + ', \n')
	cntCode += 1
for i in range(cntCode+1, cntHandler+1):
	f_coe.write("00000000, \n")

for handler in f_code_handler:
	f_coe.write(handler[:-1] + ', \n')
	cntHandler += 1

f_coe.write("00000000;")

f_coe.close()
f_code.close()
f_code_handler.close()