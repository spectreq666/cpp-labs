#include "Logic/logical.h"
#include <iostream>

using namespace std;

int main() {
    Logical process;

    cout << "List of commands:" << endl;
    cout << "addrect - Add a rectangle figure." << endl;
    cout << "addtrap - Add a trapezoid figure." << endl;
    cout << "showall - Display all figures." << endl;
    cout << "sumofsquare - Calculate the sum of all figures' areas." << endl;
    cout << "sumofperimeter - Calculate the sum of all figures' perimeters." << endl;
    cout << "allmemory - Calculate the total memory occupied by all figures." << endl;
    cout << "sort - Sort figures by mass." << endl;
    cout << "center - Calculate the center of mass of all figures." << endl;
    cout << "exit - Exit the program." << endl;

    string command;
    while (cin >> command) {
        if (command == "exit") {
            break;
        }
        process.execute(command);
    }
    return 0;
}
