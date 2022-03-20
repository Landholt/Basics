#ifndef CPP_CONTROLLER_CPP
#define CPP_CONTROLLER_CPP

#include "cpp_controller.h"

void init_cpp() {
    cppmenu = {};
    cppmenu.push_back({""}); // Workaround to avoid printing with leading whitespace
    //cppmenu.push_back(CPPTYPES);
    cppmenu.push_back(CPP_CTRL_FLOW);
}

void print_cppmenu() {
    std::cout << cppmenu[0][0] << std::endl; // Workaround to avoid printing with leading whitespace
    std::cout << INITIAL_PROMPT << std::endl;
    for (int i = 1; i < cppmenu.size(); i++) {
        for (int j = 0; j < cppmenu[i].size(); j++) {
            std::cout << cppmenu[i][j] << " "; 
        }
    }
}

void load_cpp() {
    init_cpp();
    CLEARSCREEN;
    print_cppmenu();
    PROMPT;
    handle_cpp();
}

void handle_cpp() {
    std::cin >> cpp_choice;
    while(1) { 
        if (cpp_choice == "q") {break;}
        else if (cpp_choice == "for") {cpp_for();}
        PROMPT;
        std::cin >> cpp_choice;
        CLEARSCREEN;
        print_cppmenu();
    } 
    GOTOMAIN;
}

void cpp_for() {
    V_exemplar e = &cpp_for_ex;
    print_lines("cpp/ctrl_flow.cpp", CPP_FOR_START, CPP_FOR_END, e);
}

#endif
