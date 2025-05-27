#pragma once
#include <vector>
#include <iostream>

template <typename T>
class Matrix {
private:
    std::vector<std::vector<T>> matrix;
    size_t rows, cols;

    void SortRow(std::vector<T>& row, bool ascending) {
        size_t n = row.size();
        for (size_t i = 0; i < n; ++i) {
            for (size_t j = 0; j < n - 1; ++j) {
                if ((ascending && row[j] > row[j + 1]) ||
                    (!ascending && row[j] < row[j + 1])) {
                    T temp = row[j];
                    row[j] = row[j + 1];
                    row[j + 1] = temp;
                }
            }
        }
    }

public:
    Matrix(size_t r, size_t c, const T& value = T())
        : rows(r), cols(c), matrix(r, std::vector<T>(c, value)) {
    }

    void set(size_t i, size_t j, const T& value) {
        if (i < rows && j < cols)
            matrix[i][j] = value;
    }

    T get(size_t i, size_t j) const {
        if (i < rows && j < cols)
            return matrix[i][j];
        return T();
    }

    void input(std::istream& in = std::cin) {
        for (size_t i = 0; i < rows; ++i)
            for (size_t j = 0; j < cols; ++j)
                in >> matrix[i][j];
    }

    void print(std::ostream& out = std::cout) const {
        for (const auto& row : matrix) {
            for (const auto& x : row)
                out << x << ' ';
            out << '\n';
        }
    }

  
    void sortRows(bool ascending = true) {
        for (auto& row : matrix)
            SortRow(row, ascending);
    }

    size_t numRows() const { return rows; }
    size_t numCols() const { return cols; }
}; 
