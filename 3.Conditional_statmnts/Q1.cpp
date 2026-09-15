// Question1: Write a C++ program to get a number from the user and print whether it's positive, negative or zero

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    if(n<0){
         cout<<" You entered a negative number.";
    }
    else if ( n == 0){
        cout<<" You entered Zero.";
    }
    else{
        cout<<"You entered a positive number.";
    }
    return 0;
}

