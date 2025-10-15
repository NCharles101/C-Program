#include "my_vector.hpp"
#include <iostream>
#include <vector>

int main (void) {
    std::vector<int> n;
    n.push_back(10);
    n.at(0) = 100;

    std::cout << n.at(0) << std::endl;

    //create a myvector object dyanamically 
    MyVector *mvptr = new MyVector(10);

   for ( int i = 0 ; i <2; i++ ){
        mvptr->push_back(rand() % 100);
        std::cout << mvptr->getCapacity() << std::endl;
   }
    mvptr->print();
    /*
   for ( int i = 0 ; i <2; i++ ){
        mvptr->pop_back();
        std::cout << mvptr->getCapacity() << std::endl;
   }
        */
    mvptr->print();
    mvptr->at(0) = 100;
    std::cout << "Using at " << mvptr->at(0) << std::endl;



    delete mvptr;




    return 0;
}