// Reverse an array without extra space (2 Pointer Approach)

// Don't use extra spaces means don't use space in the form of big data structures like array.

// variables can be used , they don't take much space

//Space complexity : imput size(n) & extra space  => O(1)

//TC : O(n/2)  => O(n)

#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

}

void revArr(int *arr, int n)
{
    int start = 0;
    int end = n-1;
    int temp;

    while(start < end)
    {
        //swap
        /*
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        */

        swap(arr[start], arr[end]);

        start ++;
        end --;
    }
}

int main()
{
    int num[] = {15, 44, 3, 2, 1};
    int n = sizeof(num) / sizeof(int);

    cout << "original array: ";
    printArr(num, n);

    // Reverse Array
    revArr(num, n);

    cout << "reverse array: ";
    printArr(num, n);
}