#ifndef MATRIX_H
#define MATRIX_H

template <typename T>
class Matrix {

    public:
        Matrix(int rows = 1, int cols = 1);

        virtual ~Matrix();

        Matrix (const Matrix<T>& other);
        
        Matrix& operator=(const Matrix<T>& other);

        void print() const;
        Matrix<T> load(const char *filename) ;

    protected:
        int rows, cols;
        <T> **data;

};

#endif