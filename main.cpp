#include "Matrix.hpp"


int main() {
    Matrix objOne(3, 4);
    objOne.fillMatrix();

    objOne.writeMatrixToFile("matrixOne.txt");

    Matrix objTwo(4, 3);
    objTwo.fillMatrix();

    objTwo.writeMatrixToFile("matrixTwo.txt");

    Matrix obj1(3, 4);
    obj1.fillMatrixFromFile("matrixOne.txt");
    obj1.printMatrix();

    std::cout << std::endl;

    Matrix obj2(4, 3);
    obj2.fillMatrixFromFile("matrixOne.txt");
    obj2.printMatrix();

    std::cout << std::endl;
    
    Matrix obj3(3, 3);

    obj1.matrixMul(obj2, obj3);
    obj3.printMatrix();
    obj3.writeMatrixToFile("matrixThree.txt");

    return 0;
}