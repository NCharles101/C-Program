#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP

class MyVector {

    public:
        MyVector(int capacity = 1);
        ~MyVector();
        MyVector(const MyVector& other);

        void push_back(int value);
        void print() const;
        int getCapacity() const {return capacity;}
        int pop_back(void);
        int& at(int index);
    private:
        int *elements;
        int size;
        int capacity;
        void allocate_memory(int memory_size);

};
 #endif