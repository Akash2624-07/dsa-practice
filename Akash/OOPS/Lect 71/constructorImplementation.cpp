#include <iostream>
using namespace std;

class Customer
{
    string name;
    int account_number;
    int balance;
    int *roi;

public:
    // Default Constructor
    Customer()
    {
        name = "1";
        account_number = 123;
        balance = 1000;
        roi = new int[100]; // Constructor can be used to assign resources like memory
    }

    // Parameterised Constructor & Constructor Overloading
    Customer(string name, int account_number, int balance)
    {
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }

    Customer(string name, int account_number)
    {
        this->name = name;
        this->account_number = account_number;
    }

    // Inline Constructor
    // Customer (string a, int b, int c):name(a),account_number(b), balance(c) {

    // }

    // Copy Constructor
    Customer (Customer &B)
    {
        name = B.name;
        account_number = B.account_number;
        balance = B.balance;
    }

    void display()
    {
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1;
    Customer A2("2", 356, 2000);
    Customer A3("3", 456);
    A1.display();
    A2.display();
    A3.display();

    // Copy objects
    Customer A4 = A3;
    Customer A5(A3);

    A4.display();
    A5.display();
}