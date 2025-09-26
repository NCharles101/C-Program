//implementation of a car class
#include "Car.hpp"
#include <iostream>
//no - argument constructor

Car::Car(){
    setMake("Unknown");
    setModel("Unknown");
    setYear(1990);
    setMPG(0.0);
}
 
//setters
void Car::setMake(string newMake){
    if (!newMake.empty()){
        make = newMake;
    }
}
void Car::setModel(string newModel){
    if(!newModel.empty()){
        model = newModel;
    }
}
void Car::setYear(int newYear){
    year = (newYear>= 1900 && newYear <= 2025)? newYear : 1900;
}
void Car::setMPG(double newMPG){
    MPG = (newMPG > 0) ? newMPG : 0;
}

 //getters
    //constant methods - cannot modifiy class properties
    string Car::getMake() const {return make;}
    string Car::getModel() const {return model;}
    int Car::getYear() const {return year;}
    double Car::getMPG() const {return MPG;}

//print 
void Car::print(void) const {
    cout << getMake() << endl;
    cout << getModel() << endl;
    cout << getYear() << endl;
    cout << getMPG() << endl;
}


