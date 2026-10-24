//Operators( == != < > etc..)

#include<iostream>
using namespace std;

int main()
{
    //string is very efficient as compare to other data structures

    string str1 = "cat";
    string str2 = "dog";

    cout<<(str1 == str2)<<"\n";   //0
    cout<<(str1 != str2)<<"\n";   //1
    cout<<(str1 < str2)<<"\n";    //1
    cout<<(str1 > str2)<<"\n";    //0
    cout<<(str1 <= str2)<<"\n";   //1
    cout<<(str1 >= str2)<<"\n";   //0

    return 0;
}