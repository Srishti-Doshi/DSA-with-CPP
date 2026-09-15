#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cout<<"Enter no.: ";
    cin>>n;
    bool isPrime = true;

    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){ // i s a fator of n; i completely divides n; n is non-prime
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"Prime no.";
    }
    else{
        cout<<"non-prime no.";
    }
}