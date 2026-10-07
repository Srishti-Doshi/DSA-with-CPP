/*
Search in Sorted Matrix

Given 2D array
which is sorted in ascending order in row wise and column wise

10 20 30 40
15 25 35 45
27 29 37 48
32 33 39 50

Search key = 33
Output = (3, 2)

Search key = 100
Output = not found
*/

#include <iostream>
using namespace std;

// Brute Force Approach : O(n*m)
template <int M>
void searchSortedMatrix1(int mat[][M], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (mat[i][j] == key)
            {
            cout<<"found at cell ("<<i<<","<<j<<")\n";
                return;
            }
        }
    }
    cout << "not found \n";
}

// Binary Search Approach : O(n*log(m))
template <int M>
void searchSortedMatrix2(int mat[][M], int n, int m, int key)
{
    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m - 1;

        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (mat[i][mid] == key)
            {
                cout << "found at cell (" << i << "," << mid << ")\n";
                return;
            }
            else if (key > mat[i][mid])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }
    }
    cout << "not found \n";
}

// Staircase Search Approach : TC = O(n + m)
// when n >>>> m => O(n)
// when m >>>> n => O(m)
template <int M>
void searchSortedMatrix3(int mat[][M], int n, int m, int key)
{
    int r = 0;     // row index
    int c = m - 1; // column index

    while (r < n && c >= 0)
    {
        if (mat[r][c] == key)
        {
            cout << "found at cell (" << r << "," << c << ")\n";
            return; // immediately exit the function.
        }
        else if (mat[r][c] > key)
        {
            c--; // search left
        }
        else
        {
            r++; // search down
        }
    }

    cout << "not found \n";
}

int main()
{
    int mat[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 45},
        {27, 29, 37, 48},
        {32, 33, 39, 50}};

    searchSortedMatrix1(mat, 4, 4, 33);
    searchSortedMatrix1(mat, 4, 4, 93);

    searchSortedMatrix2(mat, 4, 4, 33);
    searchSortedMatrix2(mat, 4, 4, 93);

    searchSortedMatrix3(mat, 4, 4, 33);
    searchSortedMatrix3(mat, 4, 4, 93);


    int mat2[4][5] = {
        {10, 20, 30, 40, 50},
        {15, 25, 35, 45, 55},
        {27, 29, 37, 48, 58},
        {32, 33, 39, 50, 60}};

    searchSortedMatrix1(mat2, 4, 5, 60);
    searchSortedMatrix1(mat2, 4, 5, 93);

    searchSortedMatrix2(mat2, 4, 5, 60);
    searchSortedMatrix2(mat2, 4, 5, 93);

    searchSortedMatrix3(mat2, 4, 5, 60);
    searchSortedMatrix3(mat2, 4, 5, 93);
    return 0;
}