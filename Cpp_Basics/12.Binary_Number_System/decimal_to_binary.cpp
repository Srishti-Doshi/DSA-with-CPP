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

    int r;
    string str = "";

    while(n > 0)
    {
        r = n % 2;
        n = n / 2;

        str = str + char(r + '0'); // => 0 = 48(numeric code), 1 = 49
    }

   reverse(str.begin(), str.end());
    

    int binNum = stoi(str);

    return binNum;
}

int main()
{
    cout<<decToBin(4)<<endl;
    cout<<decToBin(10)<<endl;
    cout<<decToBin(5)<<endl;
    return 0;
}