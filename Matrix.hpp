#ifndef __MATRIX__
#define __MATRIX__
#include <iostream>
#include <fstream>

class Matrix {

public:
    Matrix(const int& row, const int& column);
    Matrix();
    virtual ~Matrix();
    Matrix (const Matrix& obj);
    Matrix& operator=(const Matrix& obj);
    Matrix(Matrix&& obj);
    Matrix& operator=(Matrix&& obj);
    Matrix& operator++();
    Matrix operator++(int);
    Matrix operator+(const Matrix& obj);

public:
    void fillMatrix() const;
    void printMatrix() const;
    void swapMatrixRowsColumns(Matrix& matrixOne);
    void matrixMul(const Matrix& matrixTwo, const Matrix& matrixThree);
    int getRow();
    int getColumn();
    int getElement(const int& indexOne, const int& indexTwo);

public:
    void writeMatrixToFile(const std::string& fileName);
    void fillMatrixFromFile(const std::string& fileName);

private:
    int** _matrix = nullptr;
    unsigned int _row = 0;
    unsigned int _column = 0;
    std::ifstream fileRead;
    std::ofstream fileWrite;
};

#endif // __MATRIX__