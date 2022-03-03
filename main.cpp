//#include <iostream>
#include "Cpp/test.cpp"
#include "C/main.c"

extern "C" void assemblyhi();

int main() {
    std::cout << "\033[2J\033[1;1H";
    cpp::printy();
    printy_c();
    cpp::integer_help();
    unsigned short test = 0b1111111111111111;
    short test1 = 0b1111111111111111;
    std::cout << test << std::endl << test1 << std::endl;
    assemblyhi();
    return 0;
}

