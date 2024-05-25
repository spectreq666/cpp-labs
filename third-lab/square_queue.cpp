#include "square_queue.h"
#include <cmath>

// Конструктор
Square::Square(double x, double y, double sideLength, double angle)
        : x(x), y(y), sideLength(sideLength), angle(angle) {}

void Square::print() const {
    std::cout << "Square: (x=" << x << ", y=" << y << "), Side Length=" << sideLength << ", Angle=" << angle << " degrees\n";
}


double Square::area() const {
    return sideLength * sideLength;
}

// Перегрузка оператора ==
bool Square::operator==(const Square& other) const {
    return area() == other.area();
}

// Перегрузка оператора !=
bool Square::operator!=(const Square& other) const {
    return !(*this == other);
}

// Перегрузка оператора <
bool Square::operator<(const Square& other) const {
    return area() < other.area();
}

// Перегрузка оператора >
bool Square::operator>(const Square& other) const {
    return area() > other.area();
}

// Перегрузка оператора умножения квадрата на вещественное число
Square Square::operator*(double scaleFactor) const {
    return Square(x, y, sideLength * scaleFactor, angle);
}

// Перегрузка оператора сложения с вектором
Square& Square::operator+=(const std::pair<double, double>& displacement) {
    x += displacement.first;
    y += displacement.second;
    return *this;
}

FIFOQueue& operator<<(FIFOQueue& queue, int num) {
    if (queue.data.size() < queue.maxSize) {
        queue.data.push(num);
    } else {
        throw std::out_of_range("Error: Queue is full, cannot add more elements!");
    }
    return queue;
}

// Перегрузка оператора >>
int operator>>(FIFOQueue& queue, int& num) {
    if (!queue.data.empty()) {
        num = queue.data.front();
        queue.data.pop();
        return num;
    } else {
        throw std::out_of_range("Error: Queue is empty, cannot retrieve elements!");
    }
}

void FIFOQueue::display() const {
    if (data.empty()) {
        std::cout << "Queue is empty" << std::endl;
    } else {
        std::cout << "Queue contents: ";
        std::queue<int> copyQueue = data;
        while (!copyQueue.empty()) {
            std::cout << copyQueue.front() << " ";
            copyQueue.pop();
        }
        std::cout << std::endl;
    }
}
