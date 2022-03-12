#ifndef CPP_CONTROLLER_H
#define CPP_CONTROLLER_H
#include <iomanip>
#include <vector>

#include "universal.h"

#include "../cpp/ctrl_flow.cpp"
#include "../yasm/externs.h"

#define CPPTYPES {"Data Types:", "(int)eger types"}
#define CPP_CTRL_FLOW {"Control Flow:", "(for) loop"}
#define GOTOMAIN print_mmenu(); handle_mmenu()

extern void print_mmenu();
extern void handle_mmenu();
//extern void print_lines(std::string ifile, int start, int end);

void init_cpp();
void print_cppmenu();
void load_cpp();
void handle_cpp();
void handle_for();

std::vector<std::vector<std::string>> cppmenu;
std::string cpp_choice;

#endif

