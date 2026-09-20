// Pointer Arithmetic

/*
Addition and Subtraction of Constants

depends on data type , int (4 bytes increments/decrements, char ( 1byte inc/dec))

ptr + 3

ptr is int type

then ptr + 3[4]

i.e skip 12 addresses
*/

#include <iostream>
using namespace std;

void printArr(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << *(ptr + i) << "\n";
    }
}

int main()
{
    int a = 20;
    int *ptr = &a; // ptr = 0x61ff04

    cout << ptr << "\n";     // 0x61ff04
    cout << ptr + 3 << "\n"; // 0x61ff04 + 12 = 0x61ff10

    ptr = ptr + 3;       // ptr = 0x61ff04 + 12 = 0x61ff10
    cout << ptr << "\n"; // 0x61ff10

    // char case

    // ptr - 3

    char b = 'b';
    char *bptr = &b;

    cout << (void *)bptr << "\n"; // 0x61ff03
    bptr = bptr - 3;              // 0x61ff03 - 3 = 0x61ff00
    cout << (void *)bptr << "\n"; // 0x61ff00

    // Use Case : In Array
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    printArr(arr, n);

    return 0;
}