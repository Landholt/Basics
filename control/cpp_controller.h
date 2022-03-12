#ifndef CPP_CONTROLLER_H
#define CPP_CONTROLLER_H

#include "universal.h"

#include "../cpp/ctrl_flow.cpp"

#define CPPTYPES {"Data Types:", "(int)eger types"}
#define CPP_CTRL_FLOW {"Control Flow:", "(for) loop"}

void init_cpp();
void print_cppmenu();
void load_cpp();
void handle_cpp();
void cpp_for();

std::vector<std::vector<std::string>> cppmenu;
std::string cpp_choice;

#endif

