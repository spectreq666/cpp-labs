#include "logical.h"

Logical::Logical() {
    command = "empty";
}

Logical::~Logical() {
    for (auto i : figures) {
        delete i;
    }
}

void Logical::execute(std::string new_command) {
    command = new_command;
    if (command == "addrect") {
        add_rect();
    } else if (command == "addtrap") {
        add_trap();
    } else if (command == "showall") {
        show_all();
    } else if (command == "sumofsquare") {
        sumofsquare();
    } else if (command == "sumofperimeter") {
        sumofperimeter();
    } else if (command == "allmemory") {
        all_memory();
    } else if (command == "sort") {
        sort_figures();
    } else if (command == "center") {
        center();
    } else {
        std::cout << "Wrong input" << std::endl;
    }
}

void Logical::add_rect() {
    auto *tmp = new Rectangle();
    tmp->initFromDialog();
    figures.push_back(tmp);
    std::cout << "Successfully added Rectangle" << std::endl;
}

void Logical::add_trap() {
    auto *tmp = new Trapezoid();
    tmp->initFromDialog();
    figures.push_back(tmp);
    std::cout << "Successfully added Trapezoid" << std::endl;
}

void Logical::show_all() {
    int count = 1;
    for (auto i : figures) {
        std::cout << "Figure #" << count << ": " << i->classname() << std::endl;
        i->draw();
        count++;
    }
}


void Logical::sumofsquare() {
    double summ = 0;
    for (auto i : figures) {
        summ += i->square();
    }
    std::cout << "Sum of all square: " << summ << std::endl;
}

void Logical::sumofperimeter() {
    double summ = 0;
    for (auto i : figures) {
        summ += i->perimeter();
    }
    std::cout << "Sum of all perimeters: " << summ << std::endl;
}

void Logical::all_memory() {
    unsigned int summ = 0;
    for (auto i : figures) {
        summ += i->size();
    }
    std::cout << "Memory of all figures: " << summ << std::endl;
}

void Logical::sort_figures() {
    std::sort(figures.begin(), figures.end(), [](Interface *a, Interface *b) { return (a->mass() < b->mass()); });
    std::cout << "Sorting Completed" << std::endl;
}

void Logical::center() {
    double Cx;
    double Cy;
    double sm_of_mass = 0;
    double sm_for_x = 0;
    double sm_for_y = 0;
    for (auto i : figures) {
        sm_of_mass += i->mass();
        sm_for_x += i->mass() * i->position().x;
        sm_for_y += i->mass() * i->position().y;
    }
    Cx = sm_for_x / sm_of_mass;
    Cy = sm_for_y / sm_of_mass;
    std::cout << "Center mass of system (" << Cx << ";" << Cy << ")" << std::endl;
}
