#ifndef UNIVERSAL_H
#define UNIVERSAL_H

#include <iostream>
#include <iomanip>
#include <vector>
#include <fstream>

#define CLEARSCREEN std::system("clear")
#define GOTOMAIN print_mmenu(); handle_mmenu()

extern void print_mmenu();
extern void handle_mmenu();

typedef void(*V_exemplar)(); // The Cherno on youtube: https://www.youtube.com/watch?v=p4sDgQ-jao4
typedef void(*I_exemplar)(int i);

void print_lines(std::string ifile, int start, int end, V_exemplar e) {
    std::cout << "\n====================\n" << std::endl;
    std::ifstream file(ifile);
    std::string line;
    int i = 0;
    while (std::getline(file, line)) {
        if (++i < start) {continue;}
        if (i > end) {break;}
        std::cout << line << std::endl;
    }
    file.close();
    std::cout << "\n====================\n\nOUTPUT: " << std::flush;
    e();
}

void print_lines(std::string ifile, int start, int end, I_exemplar e, int input) {
    std::cout << "\n====================\n" << std::endl;
    std::ifstream file(ifile);
    std::string line;
    int i = 0;
    while (std::getline(file, line)) {
        if (++i < start) {continue;}
        if (i > end) {break;}
        std::cout << line << std::endl;
    }
    file.close();
    std::cout << "\n====================\n\nINPUT = " << input <<"\nOUTPUT: " << std::flush;
    e(input);
}

#endif

