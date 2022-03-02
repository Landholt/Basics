#foo: foo.asm
#	yasm -g dwarf2 -f elf64 foo.asm -l foo.lst && ld -g -o foo foo.o bar.o && ./foo

#foo: foo.c
#	gcc -std=c99 -g foo.c -o foo -lm && ./foo

asky: main.cpp main.asm
	yasm -g dwarf2 -f elf64 main.asm -o asm.o -l main.lst
	g++ -g -no-pie -o asky main.cpp asm.o && ./asky

clean:
	rm asky asm.o main.lst && clear && ls

