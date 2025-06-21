#include <iostream>
using namespace std;


int main ()
{
    int arr[] = {47,228,37,91,23,66,59,10,82,23};
    int x;
    cout<<"Enter the element to search: ";
    cin>>x;

    // Linear Search Logic
    int size = sizeof(arr)/sizeof(arr[0]);
    int index =-1;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==x)
        {
            index = i;
            break;
        }
    }
    cout<<"Element found at index: "<<index;
}