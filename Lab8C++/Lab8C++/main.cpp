#include "Matrix.h"
#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    size_t n, m;
    std::cout << "¬вед≥ть розм≥ри матриц≥ (р€дки ≥ стовпц≥): ";
    std::cin >> n >> m;

    Matrix<int> mat(n, m);

    std::cout << "¬вед≥ть елементи матриц≥:\n";
    mat.input();

    std::cout << "ѕочаткова матриц€:\n";
    mat.print();

    
    mat.sortRows(true);

    std::cout << "ћатриц€ п≥сл€ сортуванн€ р€дк≥в по зростанню:\n";
    mat.print();

    return 0;
}