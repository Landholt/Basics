#ifndef YASM_CONTROLLER_H
#define YASM_CONTROLLER_H

#include "universal.h"

#include "../yasm/externs.h"

#define YASMTYPES {"Data (types)"}
#define YASM_CMOVS {"Conditional Moves:", "cmov with or (cmovor)"}

void init_yasm();
void print_yasmmenu();
void load_yasm();
void handle_yasm();
void yasm_cmovor();

std::vector<std::vector<std::string>> yasmmenu;
std::string yasm_choice;

#endif
