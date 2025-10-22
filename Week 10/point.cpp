#include "point.hpp"



 point::point(int x, int y){
    this->x = x;
    this->y = y;
 }



bool point::operator==(const point& other) const{
    return (x == other.x && y == other.y);
}

bool operator!=(const point& other) const{
    return !(*this == other);
}


//arithmetic operator
point point::operator+(const point& other) const{
    return point(x + other.x, y + other.y);
}

point point::operator*(const point& other) const{
    return point(x * other.x, y * other.y);
}

point operator-(const point& other) const{
    return point(x - other.x, y - other.y);
}

point operator+=(const point& other) {
    return 
}

point operator-=(const point& other) {

}

point operator*=(const point& other) {

}





int& point::operator[](int index){
    return (index == 0 ) ? x : y ;
}