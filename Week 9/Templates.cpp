#include <iostream>
#include <vector>

//template func
template <typename T>
T largest(const T& n1, const T& n2, const T& n3);


//find maximum in a vector (template func)
template <typename T>
T findMax(std::vector<T>& v);

int main(void) {

    int n1 =1 , n2 = 2 , n3 =3;
    std::cout << largest(n1, n2, n3) << std::endl;
    
    double d1 = 11.6 , d2 = 20.5 , d3 = 1.5;
    std::cout << largest(d1, d2, d3) << std::endl;

    char c1 = 'A', c2 = 'Y', c3 = 'b';
    std::cout << largest(c1, c2, c3) << std::endl;

    
    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};

    std::cout << findMax(v) << std::endl;


    return 0;
}

template <typename T> //must be on top in order to implement
T largest(const T& n1, const T& n2, const T& n3){

    if (n1 >= n2 && n1 >= n3){
        return n1;
    }
    else if (n2 >= n3){
        return n2;
    }
    else{
        return n3;
    }
}

template <typename T> //becomes a data type
T findMax(std::vector<T>& v){
    

    if (v.empty()){
        //throw exception
        throw "Empty vector";
    }
    T max = v[0];
    for (T el:v){
        if (el > max){
            max = el;
        }
    }
    
    return max;
}