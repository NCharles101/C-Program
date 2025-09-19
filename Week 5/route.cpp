#include <iostream>

//create a route structure
typedef struct {
    private:
    std::string source;
    std::string destination;

    public:
    //get functions (getters, accessor functions)
    std::string getSource(void){
        return source;
    }
    std::string getDestination(void){
        return destination;
    }
    
    //set function (mutator functions, setters)
    void setSource(std::string new_source){
        source = new_source;
    }

    void setDestination(std::string new_destination){
        destination = new_destination;
    }

    void print(void){
        std::cout << source << " -> " << destination << std::endl;
    }
} Route;

int main(void){
    //create an object of route
    Route fall_trip;

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();

    return 0;
}