#include <iostream>
using namespace std;

int main()
{
    // 1D Array
    int arr[3] = {1, 2, 3};

    cout << arr << " = " << &arr[0] << endl; // 0x61ff04 = 0x61ff04

    cout << *arr << " ";       // 1
    cout << *(arr + 1) << " "; // 2
    cout << *(arr + 2) << " "; // 3

    cout << endl;

    // 2D Array
    int mat[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    cout << mat << " = " << &mat[0][0] << endl; // 0x61fee0 = 0x61fee0

    // actually mat points to 1st row, and the first row starts at the same memory location as its first element.
    // 2D array name behaves as row pointer

    cout << *mat << " ";       // 0x61fee0
    cout << *(mat + 1) << " "; // 0x61feec
    cout << *(mat + 2) << " "; // 0x61fef8

    cout << **mat << " ";       // 1
    cout << **(mat + 1) << " "; // 4
    cout << **(mat + 2) << " "; // 7

    return 0;
}