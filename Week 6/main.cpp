// testing file 
#include "Car.hpp"
#include "CarDealer.hpp"
using namespace std;

int main(void) {
    //create a car object
    Car ferrari_spider("Ferrari", "Spider", 2021, 16.4);
    Car ferrari_superGT("Ferrari", "SuperGT",2025, 23.4);
    ferrari_spider.print();

    Car ferrari_f50;
    ferrari_f50.setMake(Ferrari);
    ferrari_f50.setModel(f50);
    ferrari_f50.setYear(2025);
    ferrari_f50.setMPG(10.5);
    ferrari_f50.print();

    //check whether the car is efficient
    cout << '\n' << (isEfficient(ferrari_f50) ? "Efficient" : "Inefficient");
    //create a car dealer object
    CarDealer ferrari_lakeland;
    ferrari_lakeland.addCar(ferrari_f50);
    ferrari_lakeland.addCar(ferrari_spider);
    ferrari_lakeland.addCar(ferrari_superGT);

    ferrari_lakeland.showInventory();
    cout << number
    return 0;
}

bool isEfficient (const Car& car){
    return (car.getMPG() > 20.0) ? true : false;
}