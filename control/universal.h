#ifndef UNIVERSAL_H
#define UNIVERSAL_H

#include <iostream>
#include <fstream>

void print_lines(std::string ifile, int start, int end) {
    std::cout << std::endl;
    std::ifstream file(ifile);
    std::string line;
    int i = 0;
    while (std::getline(file, line)) {
        if (++i < start) {continue;}
        if (i > end) {break;}
        std::cout << line << std::endl;
    }
    file.close();
}

#endif

