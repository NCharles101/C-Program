#include <iostream>

class Hello{
    public:
        Hello(){
            std::cout << "Constructor" << std::endl;
        }
        Hello(int n){
            std::cout << "Constructor with arguements" << std::endl;
        }

        void bye(void){
            std::cout << "Bye" << std::endl;
        }

};

int main(void){
   //create an object dynamically
    Hello *hi = new Hello;

    //create an object dynamically
    Hello *hi2 = new Hello(10);

    //access bye methoid
    hi->bye();

    //deallocate memory
    delete hi;
    delete hi2;

    return 0;
}