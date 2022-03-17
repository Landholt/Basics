#ifndef C_CONTROLLER_CPP
#define C_CONTROLLER_CPP

#include "c_controller.h"

void init_c() {
    cmenu = {};
    cmenu.push_back({""}); // Workaround to avoid printing with leading whitespace
    cmenu.push_back(CTYPES);
    cmenu.push_back(C_CTRL_FLOW);
}

void print_cmenu() {
    std::cout << cmenu[0][0] << std::endl; // Workaround to avoid printing with leading whitespace
    for (int i = 1; i < cmenu.size(); i++) {
        for (int j = 0; j < cmenu[i].size(); j++) {
            std::cout << cmenu[i][j] << " "; 
        }
    std::cout << "\n" << std::endl;
    }
    std::cout << std::endl;
}

void load_c() {
    init_c();
    CLEARSCREEN;
    print_cmenu();
    handle_c();
}

void handle_c() {
    std::cin >> c_choice;
    while(1) { 
        if (c_choice == "q") {break;}
        else if (c_choice == "for") {c::for_ex();}
        else if (c_choice == "while") {c::while_ex();}
        else if (c_choice == "dowhile") {c::dowhile_ex();}
        else if (c_choice == "if") {c::if_ex();}
        else if (c_choice == "break") {c::brkcon_ex();}
        std::cin >> c_choice;
        CLEARSCREEN;
        print_cmenu();
    } 
    GOTOMAIN;
}

namespace c {
void for_ex() {
    V_exemplar e = &c_for_ex;
    print_lines("c/ctrl_flow.c", C_FOR_START, C_FOR_END, e);
}
void while_ex() {
    V_exemplar e = &c_while_ex;
    print_lines("c/ctrl_flow.c", C_WHILE_START, C_WHILE_END, e);
}
void dowhile_ex() {
    V_exemplar e = &c_dowhile_ex;
    print_lines("c/ctrl_flow.c", C_DOWHILE_START, C_DOWHILE_END, e);
}

void if_ex() {
    V_exemplar e = &c_if_ex;
    print_lines("c/ctrl_flow.c", C_IF_START, C_IF_END, e);
}

void brkcon_ex() {
    V_exemplar e = &c_brkcon_ex;
    print_lines("c/ctrl_flow.c", C_BRKCON_START, C_BRKCON_END, e);
}
}
#endif
