//point operator overloading
#ifndef POINT_H
#define POINT_H

class point{
    public:
        point(int x = 0, int y = 0);

        //logic operator
        bool operator==(const point& other) const;

        bool operator!=(const point& other) const;

        //arithmetic operator
        point operator+(const point& other) const;

        point operator-(const point& other) const;

        point operator*(const point& other) const;

        point operator+=(const point& other) const;

        point operator-=(const point& other) const;

        point operator*=(const point& other) const;



        int& operator[](int index);



    private:
    int x;
    int y;
};


#endif