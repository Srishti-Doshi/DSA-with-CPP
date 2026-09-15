#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    cout << "Enter your age please: ";
    cin >> age;

    if(age<18)
    {
        cout<<"you are not an adult";
    }
    else
    {
        cout<<"you are an adult-> drive and vote";
    }
    return 0;
}