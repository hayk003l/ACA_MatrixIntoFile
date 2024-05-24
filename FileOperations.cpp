#include "FileOperations.hpp"


FileOperation::FileOperation(const std::string& fileName) : fileWrite(fileName) {
    if(!fileWrite.is_open()) {
        std::cout << "Error. Wrong input." << std::endl;
    }
}

void FileOperation::writeMatrixToFile(Matrix* matrixObj) { 
    for (int i = 0; i < matrixObj->getRow(); ++i) {
        fileWrite << std::endl;
        for (int j = 0; j < matrixObj->getColumn(); ++j) {
            fileWrite << " " << matrixObj->getElement(i, j);
        }
    }
}