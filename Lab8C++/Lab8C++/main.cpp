#include "Matrix.h"
#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    size_t n, m;
    std::cout << "������ ������ ������� (����� � �������): ";
    std::cin >> n >> m;

    Matrix<int> mat(n, m);

    std::cout << "������ �������� �������:\n";
    mat.input();

    std::cout << "��������� �������:\n";
    mat.print();

    
    mat.sortRows(true);

    std::cout << "������� ���� ���������� ����� �� ���������:\n";
    mat.print();

    return 0;
}