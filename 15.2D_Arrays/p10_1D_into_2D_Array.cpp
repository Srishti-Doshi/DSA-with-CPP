//Convert 1D array into 2D array
//Take the elements of the 1D array and arrange them row-by-row into an m x n 2D array.

/*
original = [1 2 3 4]
m = 2
n = 2 

Output : 1  2
         3  4


original = [1 2 3 4 5]
m = 2
n = 2

Output: []

original = [1 2 3 4 5 6]
m = 2
n = 3

Output : 1 2 3
         4 5 6
*/

#include<iostream>
using namespace std;

void to2D(int arr[], int length, int m, int n)
{
    if(length != m*n)
    {
        cout<<"[]";
        return;
    }

    int mat[m][n];  //Be careful : C++ does not have standard variable-length arrays (VLAs), unlike C99

    /*
    Use a dynamic 2D array

    int** mat = new int*[m];

    for(int i = 0; i < m; i++)
    {
        mat[i] = new int[n];
    }
    */

    int k = 0;

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            mat[i][j] = arr[k];
            k++;
            
            cout<<mat[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main()
{
    int num[] = {1, 2, 3, 4};
    int l = sizeof(num)/sizeof(int);
    to2D(num, l, 2, 2);

    cout<<"\n";

    int num2[] = {1, 2, 3, 4, 5, 6, 7, 8};
    to2D(num2, 8, 4, 2);
    cout<<"\n";

    int num3[] = {1, 2, 3, 4, 5, 6, 7};
    to2D(num3, 7, 4, 2);
    cout<<"\n";

    int num4[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    to2D(num4, 10, 4, 2);
    return 0;
}


/*
An array's length can be calculated using sizeof(array) / sizeof(array[0]) only while it is still an actual array.

Once it is passed to a normal function parameter:
int arr[]

it becomes a pointer, so pass the length separately.
*/