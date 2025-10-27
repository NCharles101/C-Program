//point operator overloading
#ifndef POINT_H
#define POINT_H
#include <string>


class point{
    public:
        point(int x = 0, int y = 0, const char *tag = nullptr);
        ~point(); // delete
        point(const point& other); //copy

        //logic operator
        bool operator==(const point& other) const;

        bool operator!=(const point& other) const;


        //arithmetic operator
        point operator+(const point& other) const;

        point operator-(const point& other) const;

        point operator*(const point& other) const;

        
        // augmented arithmetic operator
        
        point& operator+=(const point& other);

        point& operator-=(const point& other);

        point& operator*=(const point& other);
        

        std::string toString(void) const;

        // unary operator
        point operator-();

        //increment
        point operator++();
        point operator++(int);

        //script operator
        int& operator[](int index);

        //assignment operator
        void operator=(const point& other);

        //friend funcs have access to all the private properties of the class
        friend int sum_cooridinates();

    private:
    int x;
    int y;
    char *tag;
};

std::ostream operator<<(std::ostream& out, point& point);

#endif