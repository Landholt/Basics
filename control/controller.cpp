#ifndef CPP_CONTROLLER_CPP
#define CPP_CONTROLLER_CPP

#include "cpp_controller.h"

void init_cpp() {
    cppmenu = {};
    cppmenu.push_back({""});
    cppmenu.push_back(CPPTYPES);
    cppmenu.push_back(CPP_CTRL_FLOW);
}

void print_cppmenu() {
    std::cout << cppmenu[0][0] << std::endl; // Workaround to avoid printing with leading whitespace
    for (int i = 1; i < cppmenu.size(); i++) {
        for (int j = 0; j < cppmenu[i].size(); j++) {
            std::cout << cppmenu[i][j] << " "; 
        }
    std::cout << "\n" << std::endl;
    }
    std::cout << std::endl;
}

void load_cpp() {
    init_cpp();
    std::system("clear");
    print_cppmenu();
    handle_cpp();
}

void handle_cpp() {
    std::cin >> cpp_choice;
    if (cpp_choice == "q") {GOTOMAIN;}
    else if (cpp_choice == "for") {handle_for();}
}

void handle_for() {
   // print_lines("control/poem.txt", 2, 5);
    print_lines("cpp/ctrl_flow.cpp", CPP_FOR_START, CPP_FOR_END);
}

#endif
