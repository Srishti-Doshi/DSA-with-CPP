// Write a program to print multiplication table of a number rentered by user.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Multiplication Table:"<<endl;
    for(int i = 1; i<=10; i++){
        cout<<n<<" X "<<i<<" = "<<n*i<<" "<<endl;
    }
    return 0;
}