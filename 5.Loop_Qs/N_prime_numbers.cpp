/*
For a positive N, write a program that prints the prime numbers from 2 to N.
Assume N >= 2.

A prime number is a positive integer greater than 1 that has exactly two factors: 1 and The number itself
Examples
2 → factors: 1, 2 → ✅ Prime
11 → factors: 1, 3 → ✅ Prime
*/

#include <iostream>
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;

    for (int i = 2; i <= n; i++)
    {
        bool isPrime = true;
        for (int j = 2; j*j <= i; j++)
        // j <= i / j version is mainly a safe programming technique to avoid multiplication overflow.
        {
            if (i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            cout<<i<<" ";
        }

    }

    return 0;
}