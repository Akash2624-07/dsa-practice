// -  Usage of Classes and Objects.
// -  Usage of Access Modifiers.

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int rollNo, age;
    string grade;
};

int main()
{
    Student s1, s2;
    s1.name = "Rohit";
    s1.age = 19;
    s1.rollNo = 73;
    s1.grade = "A+";

    s2.name = "Akash";
    s2.age = 18;
    s2.rollNo = 24;
    s2.grade = "A";

    cout << s1.grade << " " << s2.name;

    return 0;
}
