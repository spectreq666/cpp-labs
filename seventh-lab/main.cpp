#include <iostream>
#include "buffer.h"

int main() {
    // Создание буфера
    Buffer<int> buffer(5);

    // 1. Вставка в конец
    buffer.push_back(1);
    buffer.push_back(2);
    buffer.push_back(3);
    buffer.push_back(4);
    buffer.push_back(5);

    // Вывод содержимого буфера
    std::cout << "Buffer content after push_back: ";
    for (int i = 0; i < buffer.size(); ++i) {
        std::cout << buffer[i] << " ";
    }
    std::cout << "\n";

    // 2. Вставка в начало
    buffer.push_front(0);

    // Вывод содержимого буфера
    std::cout << "Buffer content after push_front: ";
    for (int i = 0; i < buffer.size(); ++i) {
        std::cout << buffer[i] << " ";
    }
    std::cout << "\n";

    // 3. Вставка в произвольное место по итератору
    Buffer<int>::Iterator it = buffer.begin() + 2; // Итератор на третий элемент
    buffer.insert(it, 100);

    // Вывод содержимого буфера
    std::cout << "Buffer content after insert: ";
    for (int i = 0; i < buffer.size(); ++i) {
        std::cout << buffer[i] << " ";
    }
    std::cout << "\n";

    // 4. Доступ в начало и конец
    std::cout << "First element: " << buffer.front() << "\n";
    std::cout << "Last element: " << buffer.back() << "\n";

    // 5. Доступ по индексу
    std::cout << "Element at index 3: " << buffer[3] << "\n";

    // 6. Изменение capacity
    std::cout << "Buffer capacity before resize: " << buffer.capacity() << "\n";
    buffer.resize(10);
    std::cout << "Buffer capacity after resize: " << buffer.capacity() << "\n";

    return 0;
}
