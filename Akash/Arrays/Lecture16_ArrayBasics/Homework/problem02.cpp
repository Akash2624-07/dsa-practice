// Statement - Calculate the average of elements in an array of size 18.
#include <iostream>
using namespace std;

int main()
{
    int arr[18];
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 18 elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    float avg = float(sum) / n;
    cout << "Average of the given number is: " << avg;
}