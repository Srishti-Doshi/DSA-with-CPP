//String in C++ : Member functions

#include<iostream>
using namespace std;

#include<string>

int main()
{
    string str = "Hello World";

    cout<<str.length()<<"\n";   //11

    cout<<str[1]<<"\n";  //e

    cout<<str.at(1)<<"\n";   //e

    cout<<str.substr(6, 10)<<"\n";  //World

    cout<<str.find("World")<<"\n";   // 6
    cout<<str.find("World, 8")<<"\n";  //4294967295  => -1

    int idx = str.find("World, 8");
    cout<<idx<<"\n";

    return 0;
}