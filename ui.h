#ifndef UI_H
#define UI_H

#include <iostream>
#include <iomanip>
#include <vector>

using std::cout;
using std::setw;
using std::endl;
using std::string;
using std::vector;
using std::system;

vector<string> lang_options = {"x86-64 Assembly (asm)", "C (c)", "C++ (cpp)", "(help)", "(q)uit"};


void main_menu() {
    system("clear");
    for (option : lang_options) {
    cout << option << setw(10);
    }
    cout << endl;
}


#endif

