#ifndef LAB1_MAIN_H
#define LAB1_MAIN_H

#include <vector>

void pointerRound(double*); // Отбрасывание дробной части от вещественного числа на указателях
void linksRound(double&); // Отбрасывание дробной части от вещественного числа на ссылках

void pointerChangeSign(double*); // Изменение знака для переменной, вещественное число на указателях
void linksChangeSign(double&); // Изменение знака для переменной, вещественное число на ссылках

struct circle { // Структура окружности
    double x;
    double y;
    double r;
};

void pointerCircleMove(circle*, double*, double*); // Сдвиг окружности на вектор на указателях
void linksCircleMove(circle&, double&, double&); // Сдвиг окружности на вектор на ссылках

struct matrix{ // Структура Матрицы
    int lines;
    int columns;
    matrix(int lines, int columns);
    std::vector<std::vector<double>> data;
};

void pointerCalculateMatrix(matrix* matrix, double* number); // Умножение матрицы 3x3 на вещественное число на указателях
void linksCalculateMatrix(matrix& matrix, double& number); // Умножение матрицы 3x3 на вещественное число на ссылках

#endif //LAB1_MAIN_H
