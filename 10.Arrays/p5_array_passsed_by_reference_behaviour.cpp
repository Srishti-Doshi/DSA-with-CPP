#include <iostream>
using namespace std;

void printArr(int arr[], int n)   //arr is pointer
{
    
    cout<<"size of int pointer: "<<sizeof(arr)<<"\n";               // 4 = size of int pointer
    
    // int n = sizeof(arr)/sizeof(int);  // 1 = 4/4


    cout<<"Array: \n";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";
    }
}

int main()
{
    int num[] = {23, 25, 24, 15, 9};

    cout<<"size of array num: "<<sizeof(num)<<"\n";  //20 = size of array

    int n = sizeof(num)/sizeof(int);

    printArr(num, n);
}
