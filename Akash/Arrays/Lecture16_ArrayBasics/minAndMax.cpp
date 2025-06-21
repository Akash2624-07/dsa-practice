#include <iostream>
// If program fails to run, add this for INT_MAX and INT_MIN
//  #include <climits>
using namespace std;
int main()
{
    int arr[10] = {43, 23, 10, -2, -99, 93, 39, 64, 10, 11};

    // Finding Minimum Element
    int min = INT_MAX;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }

    // Finding Maximum Element
    int max = INT_MIN;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    cout << "Minimum Element is: " << min << "\nMaximum Element is: " << max;

    return 0;
}
