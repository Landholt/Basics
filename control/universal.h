#ifndef UNIVERSAL_H
#define UNIVERSAL_H

#include <iostream>
#include <fstream>

#define CLEARSCREEN std::system("clear")

typedef void(*Exemplar)(); // The Cherno on youtube: https://www.youtube.com/watch?v=p4sDgQ-jao4

void print_lines(std::string ifile, int start, int end, Exemplar e) {
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

#endif

