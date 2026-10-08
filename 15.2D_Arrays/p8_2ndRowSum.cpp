/*
Print out the sum of the numbers in the second row of the nums array.

Example:
Input: int nums[][] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
Output: 18
*/

#include<iostream>
using namespace std;

template<int M>
int sum_2ndROw(int mat[][M], int n, int m)
{
 int sum = 0;
 for(int j = 0; j < m; j++)
 {
    sum += mat[1][j];
 }
 return sum;
}

int main()
{
    int nums[][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
    cout<<sum_2ndROw(nums, 3, 3)<<endl;

    int nums2[][4] = {{1, 4, 9, 9}, {11, 4, 3, 9}, {2, 2, 3, 3}};
    cout<<sum_2ndROw(nums2, 3, 4)<<endl;
    return 0;
}