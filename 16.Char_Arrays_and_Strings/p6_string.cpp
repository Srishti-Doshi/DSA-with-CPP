//String in C++

#include<iostream>
#include<string>
using namespace std;

int main()
{
    char arr[] = "Hello";
    // arr = "yellow";  // error : not modifiable


    string str = "Hello";
    str = "Yellow";
    cout<<str<<endl;  //yellow => modifiable


    //input

    string str1;
    cin>>str;   // space problem  => input: A cat  => output: A
    cout<<str<<endl;

    string str2;
    //getline(cin, str2, ",");   //error due to " " => expects single ''
    getline(cin, str2, ',');   //no space problem => stops only at ',' => delimiter is optional
    cout<<str2<<endl;

    return 0;
}