//Print Subarrays => Subarray is continuous part of an array

/*
For Example:
arr[5] = {1, 2, 3, 4, 5}

Subarrays of arr : 
{1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {1, 2, 3, 4, 5}, 
{2}, {2, 3}, {2, 3, 4}, {2, 3, 4, 5}, 
{3}, {3, 4}, {3, 4, 5}, 
{4}, {4, 5}, 
{5}

no. of subarrays(arr size 5) = 5 + 4 + 3 + 2 + 1  = 15

no. of subarrays(arr size n) = n + (n - 1) + (n - 2) + (n - 3) + ... + 1

No. of subarrays for array of size n = (n * (n + 1))/2   

=> (5 * (5+1))/2 = 30/2 = 15

Subarrays => continuous  => {1, 2, 3}
Subsequence => non contiguous but in same sequence order => {1, 3, 5}

*/

/*
Code Logic

Subarrays pattern ( n = 5)

start        end
1            1, 2, 3, 4, 5
2            2, 3, 4, 5
3            3, 4, 5
4            4, 5
5            5


In terms of index :

start        end
0            0, 1, 2, 3, 4
1            1, 2, 3, 4
2            2, 3, 4
3            3, 4
4            4


*/

#include<iostream>
using namespace std;

void printSubarrays(int *arr, int n)
{
    for(int start = 0; start < n; start++)
    {
        for(int end = start; end < n; end++)
        {
            cout<<"(";
            // cout<<"("<<start<<", "<<end<<") ";
            for(int i = start; i <= end; i++ )
            {
                cout<<arr[i];
            }
            cout<<"), ";
        }
    }
}

// TC = O(n^3)

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    printSubarrays(num, 5);
    return 0;
}