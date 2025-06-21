// Statement - Find the second largest element in an array of unique elements of size n. Where n>3.
#include <iostream>
using namespace std;

int main()
{
    int arr[100], n;
    cout << "Enter the size of the array(1-100): ";
    cin >> n;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int largest = INT_MIN, sec_largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > sec_largest && arr[i] != largest)
            sec_largest = arr[i];
    }
    cout << "Second largest element is: " << sec_largest;
}