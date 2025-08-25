#include <iostream>
#include <random>



int main(void){
    //Generates the seed
    std::random_device rd;

    //initialize a random number engine with a seed
    std::mt19937 end(rd());

    //define distribution
    std::uniform_int_distribution<int> dist(1,100);

    for(int i = 0; i <50; i++){

        std:cout << dist(eng) << std::endl;
    }




    return 0;

}