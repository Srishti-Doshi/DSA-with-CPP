#include<iostream>
using namespace std;

void countingSort(int *arr, int n)
{
    int freq[1000] = {0};   // all 0
    int minValue = arr[0];
    int maxValue = arr[0];

    for(int i = 0; i < n; i++)
    {
        freq[arr[i]]++; 

        minValue = min(minValue, arr[i]);
        maxValue = max(maxValue, arr[i]);

    }

    for(int i = minValue, j = 0; i <= maxValue; i++)
    {
        while(freq[i]>0)
        {
            arr[j++] = i;
            freq[i]--;
        }
    }

    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int num[] = {1, 4, 1, 3, 2, 4, 3, 2};

    countingSort(num, 8);
    return 0;
}
