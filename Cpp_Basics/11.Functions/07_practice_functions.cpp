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

/*
Write a function which takes 2 numbers as parameters (a & b) and outputs: a^2 + b^2 + 2ab
*/

int eqn(int a, int b)
{
    return a*a + b*b + 2*a*b;
}


int main()
{
    cout<<digitsSum(2611)<<endl;
    cout<<digitsSum(545)<<endl;

    cout<<eqn(2, 4)<<endl;   // 2*2 + 4*4 + 2*4*2
    return 0;
}

// TC = O(log n )
// SC = O(1)