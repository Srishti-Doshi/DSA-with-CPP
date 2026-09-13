#include<iostream>
using namespace std;

int main()
{
    int a = 32;
    int *ptr = &a;

    char ch = 'A';
    char &cho = ch;   // cho is a reference variable

    // cho and ch both points to same address

    cho += a;  // ch = cho = 'A'(ASCII 65) + 32 = 'a'(ASCII 97)

    *ptr += ch; // a = *ptr = 32 + 'a'(97) = 129

    cout<<a<<", " <<ch<<endl; // 129, a
}