#ifndef __MATRIXOPERATION__
#define __MATRIXOPERATION__

#include <iostream>
#include <fstream>

#include "Matrix.hpp"

class FileOperation {
private:
    std::ifstream fileRead;
    std::ofstream fileWrite;

public:
    FileOperation(const std::string& fileName);
    ~FileOperation() = default;

    void writeMatrixToFile(Matrix* matrixObj);
    void printMatrixFromFile();

};


#endif // __MATRIXOPERATION__
