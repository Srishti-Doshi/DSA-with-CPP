#include<iostream>
#include<typeinfo>
using namespace std;

int main()
{
    int x =5, y = 10;

    int *ptr1 = &x, *ptr2 = &y;

    ptr2 = ptr1;

    cout<<&x<<endl;
    cout<<ptr1<<endl;
    cout<<ptr2<<endl;

    float *m, n;

    cout<<typeid(m).name()<<endl;
    cout<<typeid(n).name()<<endl;

    //Can we initialize a pointer using 0
    // Yes , itis same as creating a nullpointer

    int *ptr  = 0;
    // cout<<*ptr<<endl; => nothing printed

    int z;
    int *ptrr;
    z=7;
    ptrr = &z;
    cout<<*ptrr<<endl;  //7

}