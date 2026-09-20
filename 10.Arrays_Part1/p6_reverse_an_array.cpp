// Reverse an array with extra space (a copy array)

//Space complexity : imput size(n) & extra space  => O(n)

//TC : O(n)

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
    int copyArr[n];

    for (int i = 0; i < n; i++)
    {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = copyArr[i];
    }
}

int main()
{
    int num[] = {5, 4, 3, 2, 1};
    int n = sizeof(num) / sizeof(int);

    cout << "original array: ";
    printArr(num, n);

    // Reverse Array
    revArr(num, n);

    cout << "reverse array: ";
    printArr(num, n);
}