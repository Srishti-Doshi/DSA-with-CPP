// Pointer Arithmetic

/*
Increment and Decrement Operators

depends on data type , int (4 bytes increments/decrements, char ( 1byte inc/dec))

ptr++
ptr--
++ptr
--ptr
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 20;
    int * aptr = &a;   //aptr = 0x61ff04
    cout<<aptr<<"\n";
    aptr++;            //0x61ff08   => 1 int ++
    cout<<aptr<<"\n";


    //char case

    char b = 'b';  //b is stored at address 0x61ff03
    char *bptr = &b;  //bptr = 0x61ff03
    
    //cout<<bptr<<"\n";  //For char*, cout treats it as a C-style string and keeps reading characters from that address until it finds '\0'.

    cout<<(void*)bptr<<"\n";  //0x61ff03
    bptr++;                    // 1 char ++
    cout<<(void*)bptr<<"\n";  //0x61ff04

    return 0;
}