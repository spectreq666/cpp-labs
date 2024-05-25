#include <iostream>
#include "main.h"
using namespace std;

// Задание 4
void task4() {
    cout << "Task 4" << endl;
    cout << "Введите число с дробной частью через точку (пример 14.68):";
    double number;
    cin >> number;
    cout << "Вы ввели число: " << number << endl;
    cout << "Вариант на указателях" << endl;
    pointerRound(&number);
    cout << "Результат отбрасывания целой части от Вашего числа: " << number;
    cout << "\nВариант на ссылках" << endl;
    linksRound(number);
    cout << "Результат отбрасывания целой части от Вашего числа: " << number << endl;
}

// Задание 7
void task7() {
    cout << "Task 7" << endl;
    cout << "Введите целое или вещественное число:";
    double number;
    cin >> number;
    cout << "Вы ввели число: " << number << endl;
    pointerChangeSign(&number);
    cout << "Вариант на указателях" << endl;
    cout << "Результат смены знака " << number << endl;
    cout << "Вариант на ссылках" << endl;
    linksChangeSign(number);
    cout << "Результат смены знака " << number << endl;
}

// Задание 12
void task12() {
    cout << "Task 12" << endl;
    circle a{};
    cout << "Введите x, y для окружности:";
    cin >> a.x >> a.y;
    cout << "Введенные параметры окружности: " << "(" << a.x << ";" << a.y << ")" << endl;
    cout << "Введите параметры x и у для вектора: ";
    double x, y;
    cin >> x >> y;
    cout << "Вектор: " << "{" << x << ";" << y << "}" << endl;
    cout << "Вариант на указателях" << endl;
    pointerCircleMove(&a, &x, &y);
    cout << "Результат сдвига центра окружности на заданный вектор: " << "(" << a.x << ";" << a.y << ")" << endl;
    cout << "Вариант на ссылках" << endl;
    linksCircleMove(a, x, y);
    cout << "Результат сдвига центра окружности на заданный вектор: " << "(" << a.x << ";" << a.y << ")" << endl;
}

// Задание 15
void task15() {
    cout << "Task 15" << endl;
    matrix matrix1(3,3);
    cout << "Заполните матрицу 3x3" << endl;
    for (int i = 0; i < matrix1.lines; i++) {
        for (int j = 0; j < matrix1.columns; j++) {
            cout << "Введите элемент [" << i << "][" << j << "]:";
            cin >> matrix1.data[i][j];
        }
    }
    cout << "Введенная матрица" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            cout<<matrix1.data[i][j]<<" ";
        }
        cout<<"\n";
    }
    double number;
    cout << "Введите вещественное число, на которое требуется умножить матрицу:" << endl;
    cin >> number;
    cout << "Вариант на указателях" << endl;
    pointerCalculateMatrix(&matrix1, &number);
    for(int i = 0; i < matrix1.lines; i++) {
        for (int j = 0; j < matrix1.columns; j++) {
            cout<< matrix1.data[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout << "Вариант на ссылках" << endl;
    linksCalculateMatrix(matrix1, number);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            cout<<matrix1.data[i][j]<<" ";
        }
        cout<<"\n";
    }

}

int main() {
    task4();
    task7();
    task12();
    task15();
    return 0;
}
