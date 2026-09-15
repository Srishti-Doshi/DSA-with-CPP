/*
Print Character Pyramid Pattern

for n = 4

A
BC
DEF
GHIJ

*/

#include<iostream>
using namespace std;

int main()
{
    //Explicit Typecasting  int -> char
    cout<<char(65)<<endl;  //A
    cout<<char(90)<<endl;  //Z
    cout<<char(97)<<endl;  //a
    cout<<char(122)<<endl<<endl; //z

    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    char ch = 'A';

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<ch++;  //post increment : print and then increment

            /*
            cout<<ch;
            ch++;               //ch = ch + 1;  //implicit typecasting by compiler ch = 'A' + 1 = 'B'
            */
        }
        cout<<endl;
    }

    return 0;
}