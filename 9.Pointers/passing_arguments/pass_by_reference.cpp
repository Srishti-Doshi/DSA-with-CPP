/*
Passing Arguments: Pass By Reference

-> when we pass the reference of argument to the function

-> pass by address

Pass By Reference
1) -->using pointers
2) -->using reference variables
*/

#include<iostream>
using namespace std;


// pass by reference using pointers
void changeA(int *ptr)
{
    *ptr = 20;
    cout<<*ptr<<"\n";
}

// pass by reference using reference variable
void changeN(int &param)
{
    param = 50;
    cout<<param<<"\n";
}


int main()
{
    int a = 10;

    changeA(&a);  // prints 20 

    cout<<a<<"\n"; // prints 20 => original a changed as we pass argument by address


    // reference variable
    int c = 100;
    int &d = c;   // c and d both points to same memory location  
    // reference variable must be initialized as it is an alternate name and hence th eoriginal must exist

    d = 25;
    cout<<c<<endl;  // 25
    cout<<&c<<" = "<<&d<<"\n";  // same address
    


    int b = 10;
    changeN(b);  //50
    cout<<b<<endl;  //50

    return 0;
}
