// Header file (.hpp, .h)
//description of the class
/*
to do list:
add:
-mileage: the odometer of the car
-fuel_capacity: tank capacity of the car
-fuel_level: current fuel in gallons

methods:
void refuel(double gallons);
void drive(double distance); //if car has enough fuel to drive the given distance print <car (make,model) is driving!>

*/
using namespace std;
#include <string>

class Car{
public:
    //Cconstructor
    Car();// no arguments
    Car(string make, string model, int year, double MPG);

    //getters
    //constant methods - cannot modifiy class properties
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getMPG() const;

    //setters
    void setMake(string newMake);
    void setModel(string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);

private:
    string make;
    string model;
    int year;
    double MPG;
};