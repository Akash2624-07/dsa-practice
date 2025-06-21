// Statement - Find the index of a specific element in an array, if the element is nor present, print -1. Ask the size of the array from the user and then implement it.
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

    int x, index = -1;
    cout << "Enter a number to find in the array: ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {    
            index = i;
            break;
        }
    }
    cout<<"Element found at index: "<<index;
}