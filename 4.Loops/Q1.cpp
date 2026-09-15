//print the sum of digits of a number using while loop

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int digit_sum = 0;
    while(n>0){
        int lastdig = n % 10;
        digit_sum += lastdig;
        n /= 10; //removal of last digit
    }
    cout<<"sum of digits: "<<digit_sum<<endl;
    return 0;
}