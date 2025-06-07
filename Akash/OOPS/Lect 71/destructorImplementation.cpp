#include <iostream>
using namespace std;

class Customer
{
    string name;
    int *data;

public:
    Customer() // Default Constructor
    {
        name = "4";
        cout << "Constructor is called for " << name << endl;
    }
    Customer(string name)
    {
        this->name = name;

        cout << "Constructor is called for " << name << endl;
        data = new int(0);
    }

    ~Customer() // Destructor
    {
        cout << "Destructor is called for " << name << endl;
        delete data; // It releases dynamically allocated resources by Constructor.
    }
};

int main()
{
    Customer A1("1");
    Customer A2("2");
    Customer A3("3");
    Customer *A4 = new Customer;
    delete A4;
}
