#include <iostream>

//create a route structure
typedef struct {
    std::string source;
    std::string destination;

    void print(void){
        std::cout << source << " -> " << destination << std::endl;
    }
} Route;

int main(void){
    //create an object of route
    Route fall_trip;

    fall_trip.source = "Lakeland";
    fall_trip.destination = "Paris";

    fall_trip.print();

    return 0;
}