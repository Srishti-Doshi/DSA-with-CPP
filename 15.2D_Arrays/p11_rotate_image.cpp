/*
Rotate Image

You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

Example :

   0 1 2          0 1 2

0  1 2 3      0   7 4 1
1  4 5 6   => 1   8 5 2
2  7 8 9      2   9 6 3


5  1  9  11       15 13 2  5
2  4  8  10   =>  14 3  4  1
13 3  6  7        12 6  8  9
15 14 12 16       16 7  10 11

AB   => DA
DE      EB
*/


#include <iostream>
#include <algorithm>
using namespace std;

template <int M>
void rotateImg(int arr[][M], int n)
{
    // Step 1: Transpose the matrix
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }

    // Step 2: Reverse each row
    for (int i = 0; i < n; i++)
    {
        reverse(arr[i], arr[i] + n);
    }
}

template <int M>
void printMatrix(int arr[][M], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int img1[2][2] = {{1, 2}, {3, 4}};

    int img2[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotateImg(img1, 2);
    printMatrix(img1, 2);

    cout << endl;

    rotateImg(img2, 3);
    printMatrix(img2, 3);

    return 0;
}
