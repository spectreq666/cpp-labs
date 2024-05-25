#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <cmath>

class Vector {
private:
    double x;
    double y;
    double z;

public:
    // Конструкторы
    Vector(); // По умолчанию
    Vector(double x_val, double y_val, double z_val); // Вектор и 3 вещественных числа
    Vector(const Vector& other); // Конструктор копирования

    // Методы для операций над векторами
    Vector add(const Vector& other) const; // Сложение векторов
    Vector subtract(const Vector& other) const; // Вычитание векторов
    double length() const; // Длина вектора
    double angle(const Vector& other) const; // Угол между векторами

    // Вывод на экран
    void display() const;
};

#endif // VECTOR_H
