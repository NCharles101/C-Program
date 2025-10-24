#include <iostream>
#include "point.hpp"

int main(void) {
    point p1(3,4);
    std::cout << p1.toString() << std::endl;

    point p2 = -p1;
    std::cout << p2.toString() << std::endl;

    //test ++
    ++p2;
    p2++;
    std::cout << p2.toString() << std::endl;

    point p3(0,0, "p3");

    p3 = p1;
    std::cout << p3.toString() << std::endl;



    return 0;
}