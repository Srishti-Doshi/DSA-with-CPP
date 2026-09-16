//Find largest in array

#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {23, 25, 24, 15, 9};
    int largest = arr[0];

    int n = sizeof(arr)/sizeof(int);

    for(int i = 0; i < n; i++)
    {
        if(arr[i]>largest)
        {
            largest = arr[i];
        }
    }

    cout<<"largest: "<<largest;
    return 0;
}