// <cstring> functions

#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char str[100];
    // str = "hello";   // error expression must be modifiable value

    strcpy(str, "hello");
    cout<<str<<endl;   //hello

    strcat(str, " world");  // world will get appended in str
    cout<<str<<endl;

//strcmp() is a function from the <cstring> library that compares two C-style strings character by character

    cout<<strcmp("abc", "cat")<<endl;  //negative number
    cout<<strcmp("Za", "Ka")<<endl;  //positive number
    cout<<strcmp("cat", "cat")<<endl;  //0
    cout<<strcmp("Apple", "apple")<<endl;  //strcmp is case-sensitive. In ASCII, uppercase A(65) has a smaller code than lowercase a(97).

    return 0;
}