#include <iostream>
#include <ctime>
#include <string>

//create a route structure
typedef struct {
    private:
    std::string source;
    std::string destination;
    int length;

    //private function
    void updateLength(void){
        length = (source.empty() || destination.empty()) ? 0 : rand() % 900 + 75;
    }

    public:
    //get functions (getters, accessor functions)
    //create constructors
    //they have no return type, they are called when the object is created, constructors should be public, constructors cannot be code explicitely

    //no arguement constructor
    Route() {
        length = 0;
    }
    
    std::string getSource(void){
        return source;
    }
    std::string getDestination(void){
        return destination;
    }
    int getLength(void){
        return length;
    }
    
    //set function (mutator functions, setters)
    void setSource(std::string new_source){
        source = new_source;
        updateLength();
    }

    void setDestination(std::string new_destination){
        destination = new_destination;
        updateLength();
    }

    void print(void){
        std::cout << source << " -> " << destination << " : " <<  length << std::endl;
    }
} Route;

int main(void){
    srand(time(0));
    
    //create an object of route
    Route fall_trip;
    fall_trip.print();

    fall_trip.setSource("Lakeland");
    fall_trip.setDestination("Paris");

    fall_trip.print();

    fall_trip.setDestination("New York");
    fall_trip.print();

    return 0;
}