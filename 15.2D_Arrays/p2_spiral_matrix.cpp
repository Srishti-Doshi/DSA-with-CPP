/*
Spiral Matrix

1  2  3  4
5  6  7  8
9  10 11 12
13 14 15 16

Output: 1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10
*/

#include<iostream>
using namespace std;

template<int M>
void spiral_matrix(int mat[][M], int n, int m)
{
    int srow = 0, erow = n-1, scol = 0, ecol = m-1;

    while(srow <= erow && scol <= ecol)
    {
        //Top Boundary
         for(int i = scol; i <= ecol; i++)
         {
            cout<<mat[srow][i]<<" ";
         }
         
        //Right Boundary
         for(int i = srow+1; i <= erow; i++)
         {
            cout<<mat[i][ecol]<<" ";
         }
    
        //Bottom Boundary
         for(int i = ecol-1; i >= scol; i--)
         {
            if(srow == erow)
            {
                break;  //for corner case
            }
            cout<<mat[erow][i]<<" ";
         }
    
        //Left Boundary
         for(int i = erow-1; i >= srow+1; i--)
         {
            if(scol == ecol)
            {
                break;    // for corner case 
            }
            cout<<mat[i][scol]<<" ";
         }

         srow++;
         scol++;
         erow--;
         ecol--;
    }
}

int main()
{
    //2D matrix
    int mat[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    spiral_matrix(mat, 4, 4);

    cout<<endl;

    int mat2[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
    };

    spiral_matrix(mat2, 3, 4);
    
    cout<<endl;

    int mat3[3][4] = {
        {1, 2, 3, 4}
    };

    spiral_matrix(mat3, 1, 4);
    
    cout<<endl;

    int mat4[4][1] = {
        {1},
        {2},
        {3},
        {4}
    };

    spiral_matrix(mat4, 4, 1);
    
    return 0;
}
