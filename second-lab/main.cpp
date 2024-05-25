#include <iostream>
#include "vector.h"

int main() {
    // Ввод пользовательских данных
    std::cout << "Enter vector 1 x, y, z:" << std::endl;
    double x, y, z;
    std::cin >> x >> y >> z;
    std::cout << "Enter vector 2 x, y, z:" << std::endl;
    double x1, y1, z1;
    std::cin >> x1 >> y1 >> z1;

    // Создаем два вектора
    Vector vec1(x, y, z);
    Vector vec2(x1, y1, z1);

    // Вывод векторов на экран
    std::cout << "Vector 1\n";
    vec1.display();
    std::cout << "\nVector 2\n";
    vec2.display();

    // Сложение векторов
    Vector Vector_SUM = vec1.add(vec2);
    std::cout << "\nSum:\n";
    Vector_SUM.display();

    // Вычитание векторов
    Vector Vector_DIFF = vec1.subtract(vec2);
    std::cout << "\nDifference:\n";
    Vector_DIFF.display();

    // Длина векторов
    std::cout << "\nLength of vector 1: " << vec1.length() << std::endl;
    std::cout << "Length of vector 2: " << vec2.length() << std::endl;

    // Угол между векторами
    std::cout << "Angle between vectors: " << vec1.angle(vec2) << "°";

    return 0;
}
