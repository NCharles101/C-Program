#include "my_vector.hpp"
#include <iostream>

//implement constructor

MyVector::MyVector(int capacity) : size(0) {
     this->capacity = capacity;
     elements = new int[capacity];
}

MyVector::~MyVector(){
    delete [] elements;
}

MyVector::MyVector(const MyVector& other){
    //to do #1
    //copy vector
}

void MyVector::push_back(int value) {
    //to do 2
    elements[size] = value;
    size++;
}

void MyVector::print() const {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i];
    }
    std::cout << "]" << std::endl;
}
/*
todo 3 
void pop_back(); (capacity should not be greater than double size)

*/