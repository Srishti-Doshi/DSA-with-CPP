/*
For a positive N, Write a program that prints the first N Fibonacchi numbers.

Assumne N>=2

The fibonacchi series is a series where each number is a sum of previous 2 numbers in the series.

The Fibonacci series is:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34...

The rule is:

Next number = previous number + number before previous

So:

0 + 1 = 1
1 + 1 = 2
1 + 2 = 3
2 + 3 = 5
3 + 5 = 8
5 + 8 = 13
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int first = 0;
    int second = 1;

    for(int i = 1; i <= n; i++)
    {
        cout<<first<<" ";
        int next = first + second;

        first = second;
        second = next;
    }

    return 0;
}