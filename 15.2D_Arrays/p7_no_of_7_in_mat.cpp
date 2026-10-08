/*
Print the number of all 7's that are in the 2D array
Example:
Input: int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
Output: 2
*/

#include<iostream>
using namespace std;

void countOf7(int arr[][3], int n, int m)
{
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr[i][j] == 7)
            {
                count++;
            }
        }
    }

    cout<<"No. of 7 = "<<count<<"\n";
}

int main()
{
    int arr[2][3] = {{4, 7, 8}, {8, 8, 7}};
    countOf7(arr, 2, 3);

    int arr2[4][3] = {{4, 7, 8}, {8, 8, 7}, {4, 3, 6}, {7, 6, 1}};
    countOf7(arr2, 4, 3);

    int arr3[4][3] = {{4, 4, 8}, {8, 8, 4}, {4, 3, 6}, {17, 6, 1}};
    countOf7(arr3, 4, 3);
    return 0;
}