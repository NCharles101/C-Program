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
    Route() : length(0){
    }

    //overloaded constructor
    Route(std::string source_, std::string destination_){
        setSource(source_);
        setDestination(destination_);
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

    //returns whether the route is long or not, method implementation
    bool Route::isLong(){
        return getLength()>300;
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

    //create a route object with constructor with arguements
    Route christmas_trip("Orlando", "Los Angelos");

    christmas_trip.print();

    //creating objects
    Route route1; // no argument constructor
    //Route route2("A","B"); // constructor with arguments
    Route route3 = Route(); //no argument constructor

    //Route route5(); // not an object function protype
    std::cout << route3.isLong();
    return 0;
}