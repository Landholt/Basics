//#include <iostream>
#include "test.cpp"
#include "main.c"
//#include "hello.asm"

extern "C" void assemblyhi();

int main() {
    std::cout << "\033[2J\033[1;1H";
    cpp::printy();
    printy_c();
    cpp::integer_help();
    assemblyhi();
    return 0;
}

