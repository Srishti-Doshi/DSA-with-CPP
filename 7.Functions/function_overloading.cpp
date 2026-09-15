// Multiple functions with the same name but different number/type of parameters


#include<iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}

int sum(double a, double b)
{
    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout<<sum(2, 3)<<endl;
    cout<<sum(2.5, 3.5)<<endl;
    cout<<sum(2, 3, 4)<<endl;
    return 0;
}