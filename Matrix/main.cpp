#include "Matrix.hpp"
#include "Matrix.cpp"

int main() {

    Matrix<std::string> m;
    m = m.load("data.txt");
    m.print();



    return 0;
}