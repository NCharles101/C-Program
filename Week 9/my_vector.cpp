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
    size = other.size;
    capacity = other.capacity;
    elements = new int[capacity];
    //copy elements
    for(int i = 0; i < size;; i++){
        elements[i] = other.elements[i];
    }
}

void MyVector::push_back(int value) {
    //to do 2
    if (size >= capacity){
        allocate_memory(capacity *2);
    }
    elements[size] = value;
    size++;
}

/*
todo 3 
*/
void pop_back(){
    
    
}



void MyVector::print() const {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << " ";
    }
    std::cout << "]\n";
}

void MyVector::allocate_memory(int memory_size){
    capacity = memory_size;
    int *old = elements;
    //allocates a new memory ( bigger ot smaller)
    elements = new int[memory_size];
    for(int i = 0; i<size; i++){
        elements[i] = old[i];
    }
    //deallocates old memory
    delete [] old;
}