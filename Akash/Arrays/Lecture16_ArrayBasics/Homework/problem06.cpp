// Statement - Find the third smallest element in an array of unique elements size n. Where n>3.
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

    int smallest = INT_MAX, sec_smallest = INT_MAX, third_smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != smallest)
            sec_smallest = min(arr[i], sec_smallest);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != smallest && arr[i] != sec_smallest)
            third_smallest = min(arr[i], third_smallest);
    }
    cout << "Third Smallest Element is: " << third_smallest;
}