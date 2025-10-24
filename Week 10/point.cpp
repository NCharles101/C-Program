#include "point.hpp"



 point::point(int x, int y, char *tag){
    this->x = x;
    this->y = y;
    if (tag) {
        int size = strlen(tag);
        this->tag = new char[size +1];
        strcpy(this->tag, tag);
    }
    else{
        this->tag = tag;
    }
 }

 point::~point(){
    if (tag) {
        delete [] tag;
    }
 }

 point::point(const point& other){
    x = other.x;
    y = other.y;
    if (other.tag){
        int size = strlen(other.tag);
        this->tag = new char[size +1];
        strcpy(this->tag, other.tag);
    }
    else{
        tag = other.tag;
    }
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

point point::operator-(const point& other) const{
    return point(x - other.x, y - other.y);
}
/*
point& point::operator+=(const point& other) {
    *this = *this + other;
    return *this;
}

point& point::operator-=(const point& other) {
    *this = *this - other;
    return *this;
}

point& point::operator*=(const point& other) {
    *this = *this * other;
    return *this;
}
*/
std::string point::toString(void) const {
    return "(" + std::to_string(x) + "," + std::to_string(y) + ")";
}

point point::operator-() {
    return point(-x,-y);
}

//preincrement
point point::operator++() {
    x += 1;
    y += 1;
    return *this;
}

point point::operator++(int ) {
    point temp(*this);
    //or point temp(x,y);
    this->x += 1;
    this->y += 1;
    return temp;
}

int& point::operator[](int index){
    return (index == 0 ) ? x : y ;
}