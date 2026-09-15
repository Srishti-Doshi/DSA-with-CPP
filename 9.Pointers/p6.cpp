#include<iostream>
using namespace std;

int main()
{
    int a = 'a';
    cout<<a<<"\n";  //97

    a = 'a' + 32;
    cout<<a<<"\n";  // 97+32 = 129

    char ch = 32;
    cout<<ch<<"\n";  //32(ASCII) --char-> ' '(space)

    char ch1 = 99;
    cout<<ch1<<"\n";  //99(ASCII) --char-> 'c'

    ch = 32 + 'A';  // 32 + 65 = 97(a)
    cout<<ch<<"\n";  // a
}