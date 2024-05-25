#ifndef SQUARE_QUEUE_H
#define SQUARE_QUEUE_H

#include <iostream>
#include <utility>
#include <queue>
#include <stdexcept>

class Square {
private:
    double x; // координата левого верхнего угла по оси OX
    double y; // координата левого верхнего угла по оси OY
    double sideLength; // длина стороны квадрата
    double angle; // угол, на который квадрат повернут относительно оси OX

public:
    // Конструктор
    Square(double x, double y, double sideLength, double angle);

    // Методы
    void print() const;
    double area() const;

    // Перегрузка операторов
    bool operator==(const Square& other) const;
    bool operator!=(const Square& other) const;
    bool operator<(const Square& other) const;
    bool operator>(const Square& other) const;
    Square operator*(double scaleFactor) const; // Перегрузка оператора умножения
    Square& operator+=(const std::pair<double, double>& displacement); // Перегрузка оператора +=
};

class FIFOQueue {
private:
    std::queue<int> data; // Очередь целых чисел
    int maxSize = 100;

public:
    friend FIFOQueue& operator<<(FIFOQueue& queue, int num);

    friend int operator>>(FIFOQueue& queue, int& num);
    void display() const;
};

#endif // SQUARE_QUEUE_H
