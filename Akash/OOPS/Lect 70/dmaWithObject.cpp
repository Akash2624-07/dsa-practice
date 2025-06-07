// How to dynamically allocate memory to objects.

#include <iostream>
using namespace std;

class Car
{
    public:
    string model;
    string currentGear;
    bool isEngineOn;
};

int main ()
{
    Car *ob1 = new Car;
    
    // We can use this method to access the elements....
    (*ob1).model = "Toyota Fortuner";

    // Or this one..
    ob1->isEngineOn = false;
    ob1->currentGear = "Neutral";

    cout<<ob1->model<<endl;
    
    return 0;
}