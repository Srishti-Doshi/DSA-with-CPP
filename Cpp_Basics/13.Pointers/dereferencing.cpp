//Dereferencing operator (*) => star

#include <iostream>
using namespace std;

int main()
{
    int a = 10;  
    cout<<*(&a)<<endl;

    int * ptr = &a;

    cout<<ptr<<endl;
    cout<<*ptr<<endl;

    *(&a) = 30;
    cout<<a<<endl;

    *ptr = 100;
    cout<<a<<endl;

}