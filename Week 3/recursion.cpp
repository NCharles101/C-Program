#include <iostream>

void test(int n);

int main(void){
    test(100);
    return 0;
}

void test(int n) {

    std::cout<< n << std::endl;
    test(n-1);
}