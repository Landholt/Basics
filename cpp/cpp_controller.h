#ifndef CPP_CONTROLLER_H
#define CPP_CONTROLLER_H

#include <vector>
#include <iomanip>
using std::setw;
using std::vector; using std::string;

#define CPPTYPES {"Data Types:", "(int)eger types"}
#define CPP_CTRL_FLOW {"Control Flow:", "(for) loop"}
#define GOTOMAIN print_mmenu(); handle_mmenu()
extern void print_mmenu();
extern void handle_mmenu();

void handle_cpp();


vector<vector<string>> cppmenu;

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

string cpp_choice;
void handle_for() {std::cout << "For" << std::endl;}

void handle_cpp() {
    std::cin >> cpp_choice;
    if (cpp_choice == "q") {GOTOMAIN;}
    else if (cpp_choice == "for") {handle_for();}
}
#endif

