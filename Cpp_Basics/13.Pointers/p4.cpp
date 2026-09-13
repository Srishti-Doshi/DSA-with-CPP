#include<iostream>
using namespace std;

// pass by reference variable
void multiplyBy2(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
}

int main()
{
    int x = 1, y = 2, z = 3;
    multiplyBy2(x, y, z);

    cout<<x<<endl;  //2
    cout<<y<<endl;  //4
    cout<<z<<endl;  //6
}