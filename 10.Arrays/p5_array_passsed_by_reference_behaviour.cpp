#include <iostream>
using namespace std;

void printArr(int arr[], int n)   //arr becomes a pointer to the first element of given array
{
    
    cout<<"size of int pointer: "<<sizeof(arr)<<"\n";               // 4 = size of int pointer in 32-bit program, pointers are commonly 4 bytes, 8 bytes in 64 bit program
    
    // int n = sizeof(arr)/sizeof(int);  // 1 = 4/4


    cout<<arr<<endl;
    cout<<*arr<<endl;

    cout<<"Array: \n";
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<", ";  //C++ defines: arr[i] as: *(arr + i)  //automatically accounts for the size  // 1001 + 1 = 1004, 1001 + 2 = 1008
    }
}

int main()
{
    int num[] = {23, 25, 24, 15, 9};

    cout<<"size of array num: "<<sizeof(num)<<"\n";  //20 = size of array

    int n = sizeof(num)/sizeof(int);

    printArr(num, n);
}
