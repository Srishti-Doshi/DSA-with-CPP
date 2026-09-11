#include <iostream>
using namespace std;

/*
Write a function to calculate the sum of digits of a number.

input = 2611
output = 2+6+1+1 => 10
*/

int digitsSum(int n)
{
    int sum = 0;
    int digit = 0;

    while(n)
    {
        digit = n % 10;
        n = n / 10;
        sum += digit;
    }
    return sum;
}

int main()
{
    cout<<digitsSum(2611)<<endl;
    cout<<digitsSum(545)<<endl;
    return 0;
}

// TC = O(log n )
// SC = O(1)