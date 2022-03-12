#ifndef YASM_CONTROLLER_CPP
#define YASM_CONTROLLER_CPP

#include "yasm_controller.h"

void init_yasm() {
    yasmmenu = {};
    yasmmenu.push_back({""}); // Workaround to avoid printing with leading whitespace
    yasmmenu.push_back(YASMTYPES);
    yasmmenu.push_back(YASM_CMOVS);
}

void print_yasmmenu() {
    std::cout << yasmmenu[0][0] << std::endl; // Workaround to avoid printing with leading whitespace
    for (int i = 1; i < yasmmenu.size(); i++) {
        for (int j = 0; j < yasmmenu[i].size(); j++) {
            std::cout << yasmmenu[i][j] << " "; 
        }
    std::cout << "\n" << std::endl;
    }
    std::cout << std::endl;
}

void load_yasm() {
    init_yasm();
    CLEARSCREEN;
    print_yasmmenu();
    handle_yasm();
}

void handle_yasm() {
    std::cin >> yasm_choice;
    while(1) { 
        if (yasm_choice == "q") {break;}
        else if (yasm_choice == "cmovor") {yasm_cmovor();}
        std::cin >> yasm_choice;
        CLEARSCREEN;
        print_yasmmenu();
    } 
    GOTOMAIN;
}

void yasm_cmovor() {
    I_exemplar e = &yasm_cmov_or_ex;
    print_lines("yasm/conditional.asm", YASM_CMOVOR_START, YASM_CMOVOR_END, e, 9);
}
#endif
