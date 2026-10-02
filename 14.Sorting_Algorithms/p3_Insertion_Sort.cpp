#include<iostream>
using namespace std;
/*
Insertion Sort: pick an element from unsorted part and place it correctly in sorted part

5 4 1 3 2
4 5 1 3 2
1 4 5 3 2
1 3 4 5 2
1 2 3 4 5
*/
void insertionSort(int *arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > curr)
        {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int num1[] = {5, 4, 1, 3, 2};
    int num2[] = {-4, 4, 0, 3, -89};
    int num3[] = {1, 2, 3, 4, 5};

    insertionSort(num1, 5);
    cout<<"\n";
    insertionSort(num2, 5);
    cout<<"\n";
    insertionSort(num3, 5);
    cout<<"\n";
    return 0;
}

// TC = O(n^2)