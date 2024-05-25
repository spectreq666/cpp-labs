#include <iostream>
#include "square_queue.h"

int main() {
    std::cout << "Enter x, y, side length and angle of Square 1:\n";
    double x, y, sideL, angle;
    std:: cin >> x >> y >> sideL >> angle;
    Square square(x, y, sideL, angle);
    std::cout << "Enter x, y, side length and angle of Square 2:\n";
    std:: cin >> x >> y >> sideL >> angle;
    Square square1(x, y, sideL, angle);

    // Печатаем информацию о квадратах
    std::cout << "Square 1:\n";
    square.print();

    std::cout << "\nSquare 2:\n";
    square1.print();
    std::cout << "\n";

    if (square > square1) {
        std::cout << "Square 1 is bigger than Square 2" << std::endl;
    }
    if (square1 > square) {
        std::cout << "Square 2 is bigger than Square 1" << std::endl;
    }
    if (square == square1) {
        std::cout << "Squares are equal" << std::endl;
    }
    if (square != square1) {
        std::cout << "Squares are not equal" << std::endl;
    }

    // Умножаем квадрат на вещественное число (увеличиваем сторону)
    Square scaledSquare = square * 3.0;
    std::cout << "\nScaled Square 1:\n";
    scaledSquare.print();

    if (scaledSquare > square1) {
        std::cout << "Scaled Square 1 is bigger than Square 2" << std::endl;
    }

    // Прибавляем к квадрату вектор смещения
    std::pair<double, double> displacement = std::make_pair(3.0, 4.0);
    square += displacement;
    std::cout << "\nMoved with Vector Square:\n";
    square.print();

    std::cout << "\n";
    FIFOQueue queue;
    int elem;
    std::cout << "Enter 5 elemenents of FIFOqueue:\n";
    for (int i = 0; i <= 4; i++) {
        std::cin >> elem;
        queue << elem;
    }
    queue.display();

    int value1, value2;
    queue >> value1;
    queue >> value2;
    std::cout << "Removed elements " << value1 << " and " << value2 << std::endl;
    queue.display();

    return 0;
}
