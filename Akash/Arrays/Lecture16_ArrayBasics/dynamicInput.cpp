#include <iostream>
using namespace std;

int main()
{
    int arr[1000];
    int size;
    // Dynamic Declaration of Arrays
    cout << "Enter the size of array(1-1000): ";
    cin >> size;

    cout << "Enter the elements of the array: \n";
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}