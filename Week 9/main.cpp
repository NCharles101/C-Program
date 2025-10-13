#include "my_vector.hpp"

int main (void) {

    MyVector *mvptr = new MyVector(10);

    mvptr->push_back(1);
    mvptr->push_back(2);
    mvptr->push_back(3);
    mvptr->push_back(4);

    mvptr->print();

    delete mvptr;




    return 0;
}