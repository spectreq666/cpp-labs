#include "vector.h"
#include <iostream>
#include <cmath>

// Конструктор по умолчанию
Vector::Vector() : x(0), y(0), z(0) {}

// Конструктор с заданными значениями, значения могут быть вещественными
Vector::Vector(double x_val, double y_val, double z_val) : x(x_val), y(y_val), z(z_val) {}

// Конструктор копирования
Vector::Vector(const Vector& other) : x(other.x), y(other.y), z(other.z) {}

// Методы для операций над векторами
Vector Vector::add(const Vector& other) const {
    return Vector(x + other.x, y + other.y, z + other.z);
}

Vector Vector::subtract(const Vector& other) const {
    return Vector(x - other.x, y - other.y, z - other.z);
}

double Vector::length() const {
    return sqrt(x*x + y*y + z*z);
}

double Vector::angle(const Vector& other) const {
    double dotProduct = x * other.x + y * other.y + z * other.z;
    double lengthsProduct = length() * other.length();

    if (lengthsProduct == 0) {
        return 0; // Обработка деления на 0
    }

    double radians = acos(dotProduct / lengthsProduct);
    return radians * 180 / M_PI; // Перевод радиан в градусы
}

// Вывод на экран
void Vector::display() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")";
}
