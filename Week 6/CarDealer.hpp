#ifndef CARDEALER_H
#define CARDEALER_H

#include "Car.hpp"
#include <vector>

class CarDealer {
public:
    void showInventory() const;
    void addCar(const Car& car);
}
private: