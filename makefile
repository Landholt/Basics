#foo: foo.asm
#	yasm -g dwarf2 -f elf64 foo.asm -l foo.lst && ld -g -o foo foo.o bar.o && ./foo

#foo: foo.c
#	gcc -std=c99 -g foo.c -o foo -lm && ./foo

basics: main.cpp yasm/main.asm
	yasm -g dwarf2 -f elf64 yasm/main.asm -o yasm/asm.o -l yasm/main.lst
	yasm -g dwarf2 -f elf64 yasm/external.asm -o yasm/external.o -l yasm/external.lst
	yasm -g dwarf2 -f elf64 yasm/conditional.asm -o yasm/conditional.o -l yasm/conditional.lst
	g++ -g -no-pie -o basics main.cpp yasm/asm.o yasm/external.o yasm/conditional.o && clear && ./basics

clean:
	rm basics yasm/asm.o yasm/main.lst && clear && ls

