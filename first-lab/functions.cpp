#include "main.h"

//Task 4
// Pointers
void pointerRound(double* num) {
    *num = static_cast<int>(*num);
}

// Links
void linksRound(double& num) {
    num = static_cast<int>(num);
}

// Task 7
// Pointers
void pointerChangeSign(double* num) {
    *num = -(*num);
}

// Links
void linksChangeSign(double& num) {
    num = -(num);
}

// Task 12
// Pointers
void pointerCircleMove(circle* obj, double* x, double* y) {
    obj->x += *x;
    obj->y += *y;
}

// Links
void linksCircleMove(circle& obj, double& x, double& y) {
    obj.x += x;
    obj.y += y;
}

// Matrix Constructor
matrix::matrix(int lines, int columns) {
    this->data.resize(lines, std::vector<double>(columns, 0.0));
    this->lines = lines;
    this->columns = columns;
}

// Task 15
// Pointers
void pointerCalculateMatrix(matrix* matrix, double* number) {
    for(int i = 0; i < matrix->lines; i++) {
        for(int j = 0; j < matrix->columns; j++) {
            matrix->data[i][j] *= *number;
        }
    }
}

// Links
void linksCalculateMatrix(matrix& matrix, double& number) {
    for(int i = 0; i < matrix.lines; i++) {
        for(int j = 0; j < matrix.columns; j++) {
            matrix.data[i][j] *= number;
        }
    }
}

