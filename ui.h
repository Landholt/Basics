#ifndef UI_H
#define UI_H

#include "control/yasm_controller.cpp"
#include "control/c_controller.cpp"
#include "control/cpp_controller.cpp"

#define CLEAR system("clear")

using std::cout; using std::cin; using std::endl; using std::flush; using std::setw;
using std::string;
using std::vector;
using std::system;

string usr_choice;

vector<string> lang_options = {"YASM assembler w/x86-64 instructions (yasm)", "C (c)", "C++ (cpp)", "(q)uit"};

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
    else if (usr_choice == "yasm") {load_yasm(); }
    else if (usr_choice == "c") {load_c();}
    else if (usr_choice == "cpp") {load_cpp();}
    else {cout << "Not a valid choice" << endl;}
}

#endif

