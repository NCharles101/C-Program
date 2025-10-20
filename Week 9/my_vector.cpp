#include "my_vector.hpp"
#include <iostream>

//implement constructor
template<typename T>
MyVector<T>::MyVector(int capacity) : size(0) {
     this->capacity = capacity;
     elements = new T[capacity];
}

template<typename T>
MyVector<T>::~MyVector(){
    delete [] elements;
}

template<typename T>
MyVector<T>::MyVector(const MyVector& other){
    //to do #1
    //copy vector
    size = other.size;
    capacity = other.capacity;
    elements = new T[capacity];
    //copy elements
    for(int i = 0; i < size; i++){
        elements[i] = other.elements[i];
    }
}

template<typename T>
void MyVector<T>::push_back(const T& value) {
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
template<typename T>
T MyVector<T>::pop_back(void){
    if (size > 0){

        if (size -1 < capacity/2){
            allocate_memory(capacity/2);
        }
        return elements[--size];
    }
    else{
        // throw an exception
        throw "The vector is empty!";
    }
}



template<typename T>
void MyVector<T>::print() const {
    std::cout << "[";
    for (int i = 0; i < size; i++) {
        std::cout << elements[i] << " ";
    }
    std::cout << "]\n";
}

template<typename T>
void MyVector<T>::allocate_memory(int memory_size){
    capacity = memory_size;
    int *old = elements;
    //allocates a new memory ( bigger ot smaller)
    elements = new T[memory_size];
    for(int i = 0; i<size; i++){
        elements[i] = old[i];
    }
    //deallocates old memory
    delete [] old;
}

template<typename T>
T& MyVector<T>::at(int index){
    if ( index <0 || index >size-1){
        throw "Invalid index";
    }
    return elements[index];
}

template<typename T>
void push_front(const T& value){

}

