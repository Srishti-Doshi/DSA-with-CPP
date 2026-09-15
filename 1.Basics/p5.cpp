#include<bits/stdc++.h>
using namespace std;

int main(){
    //string(for a word) and getline(for entire line)
    cout << "Enter one line\n";
    string str;
    getline(cin, str);
    cout << str;

    cout<<endl;
    // char
    // char ch = 'gello';//overflow error because char can store only one character

    char ch = 'g';
    cout << ch;

    return 0;
}