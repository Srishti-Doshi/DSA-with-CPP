#include<iostream>
using namespace std;
/*
Counting Sort => Use a frequency count of elements from min to max

Used only when we have: +ve numbers, low range, no decimal, no negative

arr  = [1, 4, 1, 3, 2, 4, 3, 7]
freq = [0, 0, 0, 0, 0, 0, 0, 0, 0]

for i to n => freq[arr[i]]++;
freq = [0, 2, 1, 2, 2, 0, 0, 1, 0]

minValue = 1
maxValue = 7

int j = 0
for minValue to maxValue
    while(freq[i]>0)
        arr[j] = i
        j++
        freq[i]--

arr = [1, 1, 2, 3, 3, 4, 4, 7]
*/
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

void desCountingSort(int *arr, int n)
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

    for(int i = 0; i < n/2; i++)
    {
        swap(arr[i], arr[n-i-1]);
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
    cout<<endl;
    desCountingSort(num, 8);
    return 0;
}
