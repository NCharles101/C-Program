#include "Matrix.hpp"
#include <iostream>
#include <iomanip>
#include <fstream>

template <typename T>
Matrix::Matrix(int rows, int cols){
    if (rows < 1 || cols < 1){
            this->rows = 0;
            this->cols = 0;
            data = nullptr;
            throw std::logic_error("Rows and cols should be positive\n");
    }
    this->rows  =rows;
    this->cols = cols;

    data = new int*[this->rows];
    for (int i = 0; i < this->rows; i++){
        data[i] = new int[this->cols];
    }
    //initialize values with zeros
    for (int i = 0; i < this->rows; i++){
        
        for (int j = 0; j < this->cols; j++){
            data[i][j] = 0;
         }
    }
}

template <typename T>
Matrix<T>::~Matrix(){
    for (int i = 0; i < rows; i++){
        delete [] data[i];
    }
    delete [] data;
}

template <typename T>
Matrix<T>::Matrix(const Matrix<T>& m){
    rows = m.rows;
    cols = m.cols;
    //allocation
    data = new T*[this->rows];
    for (int i = 0; i < this->rows; i++){
        data[i] = new T[this->cols];
    }
    //iniitallize
    for (int i = 0; i < this->rows; i++){
        
        for (int j = 0; j < this->cols; j++){
            data[i][j] = m.data[i][j];
         }
    }
}
  
template <typename T>
Matrix&<T> Matrix<T>::operator=(const Matrix& m){
    if (data) {
        for (int i = 0; i < rows; i++){
            delete [] data[i];
        }
        delete [] data;
    }
    

    rows = m.rows;
    cols = m.cols;
    //allocation
    data = new T*[this->rows];
    for (int i = 0; i < this->rows; i++){
        data[i] = new T[this->cols];
    }
    //iniitallize
    for (int i = 0; i < this->rows; i++){
        
        for (int j = 0; j < this->cols; j++){
            data[i][j] = m.data[i][j];
         }
    }
    return *this;
}

template <typename T>
void Matrix<T>::print() const{
    for (int i = 0; i < rows; i++){
        for (int j = 0; j <cols; j++){
            std::cout << std::setw(6) << data[i][j];

        }
        std::cout << "\n";
    }
    std::cout << "\n";
}

template <typename T>
Matrix<T> Matrix<T>::load( const char *filename) {
    std::ifstream in(filename);
    if (!in) {
        throw std::logic_error("File could not be opened\n");
    }

    int r,c;
    in >> r >> c; //scan two first values from a file.

    Matrix m(r,c);

    for (int i = 0; i < rows; i++){
        for (int j = 0; j <cols; j++){
            in >> m.data[i][j];

        }
        
    }

    in.close();
    return m;

}