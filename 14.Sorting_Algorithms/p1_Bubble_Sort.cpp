/*
Bubble Sort

Largest elements come to end by swapping with adjacents

5 4 3 2 1

4 3 2 1 5
3 2 1 4 5
2 1 3 4 5
1 2 3 4 5
*/

#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    bubbleSort(arr, n);
    cout<<endl;

    int num[] = {4, 1, 3, 2, 5};
    bubbleSort(num, 5);
    cout<<endl;
    

    int num1[] = {400, 40, 2, 55, 60};
    bubbleSort(num1, 5);
    cout<<endl;
    
    return 0;
}