// Example usecases of Getter and Setter Functions

#include <iostream>
using namespace std;

class studentDetail
{
private:
    string name;
    int age, rollNo;
    string grade;

public:
    // Setter Functions
    void setName(string m)
    {
        if (m.empty())
        {
            cout << "Name cannot be empty, please try again!";
            return;
        }
        name = m;
    }

    void setAge(int a)
    {
        if (a < 0)
        {
            cout << "Age cannot be negative.";
            return;
        }
        age = a;
    }

    void setRollNo(int r)
    {
        rollNo = r;
    }

    void setGrade(string g)
    {
        grade = g;
    }

    // Getter Functions
    string getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }

    int getRollNo()
    {
        return rollNo;
    }

    string getGrade(int password)
    {
        if (password == 123)
            return grade;
        return "Wrong password";
    }
};

int main()
{
    studentDetail s1;
    s1.setName("Akash");
    s1.setAge(19);
    s1.setRollNo(24);
    s1.setGrade("A+");

    cout << s1.getName() << endl
         << s1.getAge() << endl
         << s1.getRollNo() << endl;
    cout << s1.getGrade(123) << endl;
    cout << s1.getGrade(1234) << endl;
    return 0;
}