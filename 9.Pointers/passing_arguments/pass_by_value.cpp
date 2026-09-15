/*
Passing Arguments: Pass By value

-> when parameter is a copy of actual argument variable in memory

-> call by value
*/

#include<iostream>
using namespace std;

void changeA(int a)
{
    a = 20;
    cout<<a<<"\n";
}

void changeN(int n)
{
    n = 40;
    cout<<n<<"\n";
}

int main()
{
    int a = 10;

    changeA(a);  // prints 20
    changeN(a);  // prints 40

    cout<<a<<"\n"; // prints 10 => original a does not change as we pass argument by value
}
