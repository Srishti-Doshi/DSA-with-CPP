#include<iostream>
using namespace std;

/*
diagonal sum

Given Square Matrix(n=m)

Case1
Even no. of rows and columns
1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

primary diagonal sum = 1 + 6 + 11 + 16 = 34
secondary diagonal sum = 4 + 7 + 10 + 13 = 34
diagonal sum = 34 + 34 = 68

Case2
Odd no. of rows and columns
1 2 3
4 5 6
7 8 9

primary diagonal sum = 1 + 5 + 9 = 15
secondary diagonal sum = 3 + 5 + 7 = 15
diagonal sum = 15 + 15 - 5(common) = 25

*/

// Approach 1  => TC : O(n^2)
template<int M>
int diagonalSum(int mat[][M], int n, int m)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i==j)
            {
                sum += mat[i][j];
            }
            else if(j == n-i-1)
            {
                sum += mat[i][j];
            }
        }
    }
    return sum;
}

// Approach 2 => TC : O(n)
template<int M>
int diagonalSum2(int mat[][M], int n, int m)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += mat[i][i];  //pd

        if(i != n-i-1)
        {
            sum += mat[i][n-i-1];  //sd
        }
    }
    return sum;
}

// Approach 3 => TC : O(n)
template<int M>
int diagonalSum3(int mat[][M], int n, int m)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += mat[i][i];  //pd

        sum += mat[i][n-i-1];  //sd
    }

    if(n % 2 != 0)
    {
        sum -= mat[n/2][n/2];
    }
    return sum;
}


int main()
{
    int mat1[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int mat2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int mat3[1][1] = {{1}};

    cout<<diagonalSum(mat1, 4, 4)<<"\n";
    cout<<diagonalSum(mat2, 3, 3)<<"\n";
    cout<<diagonalSum(mat3, 1, 1)<<"\n";
    cout<<endl;
    cout<<diagonalSum2(mat1, 4, 4)<<"\n";
    cout<<diagonalSum2(mat2, 3, 3)<<"\n";
    cout<<diagonalSum2(mat3, 1, 1)<<"\n";
    cout<<endl;
    cout<<diagonalSum3(mat1, 4, 4)<<"\n";
    cout<<diagonalSum3(mat2, 3, 3)<<"\n";
    cout<<diagonalSum3(mat3, 1, 1)<<"\n";

    return 0;
}