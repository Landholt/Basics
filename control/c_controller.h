#ifndef C_CONTROLLER_H
#define C_CONTROLLER_H

#include "universal.h"

#include "../c/integer.c"
#include "../c/ctrl_flow.c"

#define CTYPES {"Data Types:", "(int)eger types"}
#define C_CTRL_FLOW {"Control Flow:", "(for) loop"}

void init_c();
void print_cmenu();
void load_c();
void handle_c();
void c_for();

std::vector<std::vector<std::string>> cmenu;
std::string c_choice;

#endif

