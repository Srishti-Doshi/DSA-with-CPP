//Sort this array of characters using insertion sort in descending order.

// char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'}

// In C++, the logic of character comparison is same as integer comparison

#include<iostream>
using namespace std;

void charInsertionSort(char *arr, int n)
{
    for(int i = 1; i < n; i++)
    {
        int curr = arr[i];
        int prev = i - 1;

        while(prev >= 0 && arr[prev] > arr[prev + 1])
        {
            swap(arr[prev], arr[prev + 1]);
            prev--;
        }

    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main()
{
    char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
    charInsertionSort(ch, 6);
    return 0;
}