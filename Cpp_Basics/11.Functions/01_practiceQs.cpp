// Write a function to find the product of 2 numbers - a & b

// Write a function to print if given number is even or odd.

#include<iostream>
using namespace std;

int product(int a, int b)
{
    return a*b;
}

void EvenOdd(int a)
{
    if(a%2 == 0)
    {
        cout<<a<<" is Even"<<endl;
    }
    else
    {
        cout<<a<<" is Odd"<<endl;
    }
}

int main()
{
    cout<<product(2,3)<<endl;
    EvenOdd(2);
    EvenOdd(3);
    return 0;
}