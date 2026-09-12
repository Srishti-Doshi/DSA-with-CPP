// Write a program that converts binary to decimal

#include<iostream>
using namespace std;

int binToDec(int binNum)
{
    int n = binNum;
    int lastDig;
    int decNum = 0;
    int pow = 1;

    while(n)
    {
        lastDig = n % 10;
        decNum += lastDig * pow;
        pow *= 2;
        n = n/10;  
    }
    return decNum;
}

int main()
{
    cout<<binToDec(100)<<endl;
    cout<<binToDec(101)<<endl;
    cout<<binToDec(111)<<endl;
    return 0;
}