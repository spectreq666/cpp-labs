#include "array.h"
#include "func.h"
#include <iostream>

int main() {
    // Создаем массив arr
    Array<3, int> arr;

    // Устанавливаем некоторые значения элементов массива arr
    arr[0] = 2;
    arr[1] = 3;
    arr[2] = 4;

    // Выводим элементы массива
    std::cout << "Values of array arr:" << std::endl;
    std::cout << "arr[0]: " << arr[0] << std::endl;
    std::cout << "arr[1]: " << arr[1] << std::endl;
    std::cout << "arr[2]: " << arr[2] << std::endl;

    // Возводим элемент arr[1] в степень 2
    arr[1] = power(arr[1], 2);

    // Выводим результат возведения в степень
    std::cout << "After raising arr[1] to the power of 2: arr[1] = " << arr[1] << std::endl;

    // Создаем 2-й массив
    Array<3, int> arr2;

    // Устанавливаем некоторые значения элементов массива arr2
    arr2[0] = 1;
    arr2[1] = 2;
    arr2[2] = 3;

    // Выводим значения элементов массива arr2
    std::cout << "arr2:" << std::endl;
    std::cout << "arr2[0]: " << arr2[0] << std::endl;
    std::cout << "arr2[1]: " << arr2[1] << std::endl;
    std::cout << "arr2[2]: " << arr2[2] << std::endl;

    // Возводим элемент arr2[1] в степень 3
    arr2[1] = power(arr2[1], 3);

    // Выводим результат возведения в степень
    std::cout << "After raising arr2[1] to the power of 3: " << arr2[1] << std::endl;

    // Попытка доступа к несуществующему элементу массива arr2
    // Должно возникнуть исключение ArrayIndexException
    std::cout << "Value of array element arr2[10]: " << std::endl;
    try {
        std::cout << arr2[10] << std::endl;
    } catch (ArrayIndexException &e) {
        std::cerr << e.what() << std::endl;
    }

    // Деление элементов массива arr2 на 2
    arr2 = arr2 / 2;

    // Пробуем поделить все элементы массива на 0
    // Должно возникнуть исключение ArrayDivisionByZero
    std::cout << "Attempting to divide elements of array arr2 by 0:" << std::endl;
    try {
        arr2 = arr2 / 0;
    } catch (ArrayDivisionByZero &e) {
        std::cerr << e.what() << std::endl;
    }

    // Выводим результат деления элементов массива 2
    std::cout << "After dividing elements of array arr2 by 2:" << std::endl;
    std::cout << "arr2[0]: " << arr2[0] << std::endl;
    std::cout << "arr2[1]: " << arr2[1] << std::endl;
    std::cout << "arr2[2]: " << arr2[2] << std::endl;

    return 0;
}
