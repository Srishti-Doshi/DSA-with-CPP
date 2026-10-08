/*
Write a program to find Transpose of a matrix.

What is Transpose?
Transpose of a matrix is the process of swapping the rows to columns. 

For Example:
For a 2 X 3 matrix

Matrix :
   0   1   2 
0  a11 a12 a13
1  a21 a22 a23

Transposed Matrix:
                 0   1
a11 a12    =>  0 a11 a21
a21 a22        1 a12 a22 
a31 a32        2 a13 a23

*/

#include<iostream>
using namespace std;

template <int M>
void transpose(int mat[][M], int n, int m)
{
    int transpose[m][n];
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            transpose[i][j] = mat[j][i];
            cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main()
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    transpose(matrix, 2, 3);
    cout<<endl;

    int matrix2[4][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
        {4, 5, 3}
    };
    transpose(matrix2, 4, 3);
    return 0;
}