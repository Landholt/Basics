#foo: foo.asm
#	yasm -g dwarf2 -f elf64 foo.asm -l foo.lst && ld -g -o foo foo.o bar.o && ./foo

#foo: foo.c
#	gcc -std=c99 -g foo.c -o foo -lm && ./foo

basics: main.cpp Asm/main.asm
	yasm -g dwarf2 -f elf64 Asm/main.asm -o Asm/asm.o -l Asm/main.lst
	g++ -g -no-pie -o basics main.cpp Asm/asm.o && ./basics

clean:
	rm basics Asm/asm.o Asm/main.lst && clear && ls

