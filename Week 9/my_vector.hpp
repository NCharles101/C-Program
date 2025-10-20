#ifndef MYVECTOR_HPP
#define MYVECTOR_HPP



template <typename T>
class MyVector {

    public:
        MyVector(int capacity = 1);
        ~MyVector();
        MyVector(const MyVector<T>& other);

        void push_back(const T& value);
        void print() const;
        int getCapacity() const {return capacity;}
        T pop_back(void);
        T& at(int index);
        void push_front(const T& value);

        

        
    private:
        T *elements;
        int size;
        int capacity;
        void allocate_memory(int memory_size);

};
 #endif