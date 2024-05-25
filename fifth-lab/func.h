#ifndef POWER_H
#define POWER_H

template<typename T>
T power(T base, int exponent) {
    T result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}

#endif // POWER_H
