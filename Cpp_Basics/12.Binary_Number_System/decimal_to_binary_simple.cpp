// Write a program that converts decimal to binary

#include<iostream>
#include<algorithm>
using namespace std;

/*
22  0
11  1
5   1
2   0
1   1

10110
*/

int decToBin(int decNum)
{
    int n = decNum;
    int pow = 1;  // 10^0, 10^1, 10^2....
    int binNum = 0;

    while(n>0)
    {
        int rem = n % 2;
        binNum += rem*pow;
        n = n/2;
        pow = pow * 10;
    }

    return binNum;
}

int main()
{
    cout<<decToBin(4)<<endl;
    cout<<decToBin(10)<<endl;
    cout<<decToBin(5)<<endl;
    return 0;
}