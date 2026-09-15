/*
Write a program to checck whether a number is prime or not.

A prime number is a positive integer greater than 1 that has exactly two factors: 1 and The number itself
Examples
2 → factors: 1, 2 → ✅ Prime
11 → factors: 1, 3 → ✅ Prime
*/

#include <iostream>
// #include <cmath>  //for sqrt(n)
using namespace std;

int main()
{
    cout << "Enter a number: ";
    int n;
    cin >> n;
    bool isPrime = true;

    if (n == 0 || n == 1)
    {
        isPrime = false;
    }

    // for (int i = 2; i < n - 1; i++)  // O(n)
    // for (int i = 2; i <= sqrt(n); i++)  // O(sqrt(n))
    for (int i = 2; i*i <= n; i++)    // O(sqrt(n))
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Non Prime number";
    }

    return 0;
}