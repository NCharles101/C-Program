// Header file (.hpp, .h)
//description of the class
using namespace std;
#include <string>

class Car{
public:
    //Cconstructor
    Car();// no arguments
    Car(string make, string model, int year, double MPG);

    //getters
    //constant methods - cannot modifiy class properties
    string getMake() const;
    string getModel() const;
    int getYear() const;
    double getMPG() const;

    //setters
    void setMake(string newMake);
    void setModel(string newModel);
    void setYear(int newYear);
    void setMPG(double newMPG);

private:
    string make;
    string model;
    int year;
    double MPG;
};