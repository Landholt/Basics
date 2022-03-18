#ifndef C_CONTROLLER_H
#define C_CONTROLLER_H

#include "universal.h"

#include "../c/integer.c"
#include "../c/ctrl_flow.c"
#include "../c/multithreading.c"

#define CTYPES {"Nothing here yet"}
#define C_CTRL_FLOW {"Control Flow: ", "(for) loop --- ", "(while) loop --- ", "(dowhile) loop --- ", "(if) statements --- ", "(break) and continue"}
#define CTHREADS {"Multithreading: ", "(single) thread --- ", "(mutex)"}

namespace c {
    void for_ex();
    void while_ex();
    void dowhile_ex();
    void if_ex();
    void brkcon_ex();
    void single_thread_ex();
    void mutex_ex();
}
void init_c();
void print_cmenu();
void load_c();
void handle_c();
//void c_for();

std::vector<std::vector<std::string>> cmenu;
std::string c_choice;

#endif

