#ifndef ARRAYEXP_H
#define ARRAYEXP_H

#include <exception>
#include <string>

class ArrayException : public std::exception {
};

class ArrayIndexException : public ArrayException {
public:
    int index;

    ArrayIndexException(int i) : index(i) {
        message = "Invalid array index: " + std::to_string(i);
    }

    const char *what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};

class ArrayDivisionByZero : public ArrayException {
public:
    ArrayDivisionByZero() {
        message = "Divisision by zero";
    }

    const char *what() const noexcept override {
        return message.c_str();
    }

private:
    std::string message;
};


#endif // ARRAYEXP_H
