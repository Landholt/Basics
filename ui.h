#ifndef UI_H
#define UI_H

#include "control/controller.cpp"

#define CLEAR system("clear")

using std::cout; using std::cin; using std::endl; using std::flush; using std::setw;
using std::string;
using std::vector;
using std::system;

void load_asm() {}
void load_c() {}

string usr_choice;

vector<string> lang_options = {"x86-64 Assembly (asm)", "C (c)", "C++ (cpp)", "(help)", "(q)uit"};

string startup_message = "This program is a work in progress.\n\n"
                            "To navigate, enter the text in parentheses that cooresponds to your desired option\n\n";

void print_mmenu() {
    CLEAR;
    cout << startup_message << flush;
    for (int i = 0; i < lang_options.size(); i++) {
        cout << lang_options[i] << setw(20);
    }
    cout << endl;
}

void handle_mmenu() {
    cin >> usr_choice;
    if (usr_choice == "q") {CLEAR; exit(0);}
    else if (usr_choice == "asm") {load_asm(); }
    else if (usr_choice == "c") {load_c();}
    else if (usr_choice == "cpp") {load_cpp();}
    else {cout << "Not a valid choice" << endl;}
}

/*void print_lines(std::string ifile, int start, int end) {
    std::ifstream file(ifile);
    std::string line;
    int i = 0;
    while (std::getline(file, line)) {
        if (++i < start) {continue;}
        if (i > end) {break;}
        std::cout << line << std::endl;
    }
    file.close();
    std::cout << "print_lines works good" << std::endl;
}*/

#endif

