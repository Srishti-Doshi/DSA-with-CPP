// Write a function to print if a number is prime or not.
// A prime no. is a number which has exactly two positive divisiors 1 and the number itself.

#include <iostream>
using namespace std;

bool isPrimeNo(int n)
{
    // if (n == 0 || 1)   // if ((n == 0) || (1))  ==> always 1(true)
    if (n == 0 || n == 1)
    {
        return false;
    }

    // for (int i = 2; i <= n-1; i++)  // TC = O(n)
    for (int i = 2; i*i <= n; i++)  // TC = O(sqrt n)
    {
        if (n % i == 0)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    cout << isPrimeNo(0) << endl;
    cout << isPrimeNo(1) << endl;
    cout << isPrimeNo(7) << endl;
    cout << isPrimeNo(3) << endl;
    cout << isPrimeNo(4) << endl;
    cout << isPrimeNo(16) << endl;
    return 0;
}