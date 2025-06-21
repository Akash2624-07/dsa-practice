#include <iostream>
using namespace std;

int main()
{
    // Declaring an array
    int arr[5];

    // Initilization of an Array
    int a[5] = {1, 2, 3, 4, 5};
    int b[] = {9, 10, 11, 12};
    int c[5] = {24, 26};
    int d[5] = {0};

    // Printing an Array
    for (int i = 0; i < 5; i++)
        cout << a[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << b[i] << " ";
    cout << endl;

    for (int i = 0; i < 5; i++)
        cout << c[i] << " ";
    cout << endl;
    for (int i = 0; i < 5; i++)
        cout << d[i] << " ";

    return 0;
}