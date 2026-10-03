#include <iostream>
using namespace std;

/*
Selection Sort => pick the smallest (from unsorted) and put in the begining

5 4 3 2 1
1 4 3 2 5
1 2 3 4 5
1 2 3 4 5
*/
void selectionSort(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void selectionSort2(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        swap(arr[i], arr[min_index]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Selection sort: descending order
/*
1 2 3 4 5
5 2 3 4 1
5 4 3 2 1
5 4 3 2 1
*/
void desSelectionSort(int *arr, int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int max_index = i;
        for (int j = i; j < n; j++)
        {
            if (arr[j] > arr[max_index])
            {
                max_index = j;
            }
        }
        swap(arr[i], arr[max_index]);
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

    selectionSort(arr, n);
    cout << endl;
    selectionSort2(arr, n);
    cout << endl;
    desSelectionSort(arr, n);
    cout << endl;
    
    int num[] = {4, 1, 3, 2, 5};
    selectionSort(num, 5);
    cout << endl;
    selectionSort2(num, 5);
    cout << endl;
    desSelectionSort(num, 5);
    cout << endl;

    int num1[] = {400, 40, 2, 55, 60};
    selectionSort(num1, 5);
    cout << endl;
    selectionSort2(num1, 5);
    cout << endl;
    desSelectionSort(num1, 5);
    cout << endl;

    return 0;
}

// TC = O(n^2)