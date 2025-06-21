// Statement - Take 20 elements from user input and find its sum with the help of an array.
#include <iostream>
using namespace std;

int main()
{
    int arr[20], sum = 0;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Enter 20 numbers to sum: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    for (int i = 0; i < n; i++)
        sum += arr[i];
    cout << "Sum of the numbers are: " << sum;
}