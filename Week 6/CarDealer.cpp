#include "CarDealer.hpp"
#include <iostream>

void CarDealer::showInventory() const {
    for (int i = 0; i < inventory.size(); i++) {
        inventory[i].print();
        std::cout << "---------------\n";
    }
}

void CarDealer::addCar(const Car& car){
    intventory.push_back(car);
}