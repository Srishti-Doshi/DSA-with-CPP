// Pointer Arithmetic

/*
Increment and Decrement Operators

depents on data type , int (4 bytes increments/decrements, char ( 1byte inc/dec))
ptr++
ptr--
++ptr
--ptr
*/

#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *aptr = &a;

    cout << aptr << "\n";      //0x61ff08
    cout << aptr++ << "\n";    //0x61ff08
    cout << aptr << "\n";      //0x61ff0c
    cout << aptr-- << "\n";    //0x61ff0c
    cout << aptr << "\n";      //0x61ff08
    cout << ++aptr << "\n";    //0x61ff0c
    cout << --aptr << "\n";    //0x61ff08

    return 0;
}