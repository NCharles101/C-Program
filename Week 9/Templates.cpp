#include <iostream>
#include <vector>

//template func
template <typename T>
T largest(const T& n1, const T& n2, const T& n3);


//find maximum in a vector (template func)
template <typename T>
T findMax(std::vector<T>& v);

//template class 
template<typename T1, typename T2>
class Pair {
    public:
        Pair(const T1& f, const T2& s) : first(f), second(s) {}

        //getters
        T1 getFirst() const{
            return first;
        }
        T2 getSecond() const {
            return second;
        }

        //setters
        void setFirst(const T1& first){
            this->first = first;
        }
        void setSecond(const T2& second){
            this->second = second;
        }

    private:
        T1 first;
        T2 second;
};

//create a template func that takes two arguements of any kind and returns a pair of those arguements
template<typename T3>
Pair<T1, T2> createPair (const T& p1, const T& p2);





int main(void) {

    int n1 =1 , n2 = 2 , n3 =3;
    std::cout << largest(n1, n2, n3) << std::endl;
    
    double d1 = 11.6 , d2 = 20.5 , d3 = 1.5;
    std::cout << largest(d1, d2, d3) << std::endl;

    char c1 = 'A', c2 = 'Y', c3 = 'b';
    std::cout << largest(c1, c2, c3) << std::endl;

    
    std::vector<std::string> v = {"Hello", "Bye", "Good Morning"};

    std::cout << findMax(v) << std::endl;

    //create an object of pair class
    Pair<int, std::string> p(1,"Jelly");

    std::cout << p.getFirst() << " " << p.getSecond() << std::endl;

    std::cout << createPair(100, 8.4)

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

template<typename T3, typename T4>
Pair<T1, T2> createPair(const T1& f, const T2& g){

}