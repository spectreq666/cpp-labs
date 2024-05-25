#ifndef LOGICAL_H
#define LOGICAL_H

#include "../Figures/figures.h"
#include <vector>
#include <algorithm>

class Logical {
private:
    std::vector<Interface *> figures;
    std::string command;

public:
    Logical();
    ~Logical();

    void execute(std::string new_command);
    void add_rect();
    void add_trap();
    void show_all();
    void sumofsquare();
    void sumofperimeter();
    void all_memory();
    void sort_figures();
    void center();
};

#endif //LOGICAL_H
