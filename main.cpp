#include "Matrix.hpp"


int main() {
    Matrix obj(3, 4);
    obj.fillMatrix();

    obj.writeMatrixToFile("matrixOne.txt");

    Matrix obj2(3, 4);
    obj2.fillMatrixFromFile("matrixOne.txt");
    obj2.printMatrix();

    return 0;
}