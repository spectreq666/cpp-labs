#ifndef ARRAY_H
#define ARRAY_H
#include "arrayexp.h"

template<int N, class T>
class Array {
private:
    T data[N];
public:
    Array() {
        for (int i = 0; i < N; ++i) {
            data[i] = T();
        }
    }

    T& operator[](int index) {
        if (index < 0 || index >= N) {
            throw ArrayIndexException(index); // Бросаем исключение в случае недопустимого индекса
        }
        return data[index];
    }

    Array<N, T> operator+(const Array<N, T>& other) const {
        Array<N, T> result;
        for (int i = 0; i < N; ++i) {
            result.data[i] = data[i] + other.data[i];
        }
        return result;
    }

    Array<N, T> operator-(const Array<N, T>& other) const {
        Array<N, T> result;
        for (int i = 0; i < N; ++i) {
            result.data[i] = data[i] - other.data[i];
        }
        return result;
    }

    Array<N, T> operator/(const T& num) const {
        if (num == 0) {
            throw ArrayDivisionByZero(); // Бросаем исключение в случае деления массива на 0
        }

        Array<N, T> result;
        for (int i = 0; i < N; ++i) {
            result.data[i] = data[i] / num;
        }
        return result;
    }


};

#endif // ARRAY_H
