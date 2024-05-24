#include "Matrix.hpp"
#include "FileOperations.hpp"

int main() {
    Matrix obj(3,3);
    obj.fillMatrix();

    FileOperation file("matrixOne.txt");
    file.writeMatrixToFile(&obj);
}