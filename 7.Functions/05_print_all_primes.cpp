//Print all Primes in a given range from 2 to n

// prime no. => exactly two positive divisiors 1 and the number itself

// 0 => non-prime
// 1 => non-prime
// 2 => prime
// 3 => prime
// 4 => non-prime

//A prime number is a positive integer greater than 1 that has exactly two positive factors: 1 and itself.

#include<iostream>
using namespace std;

bool isPrime(int n)
{
    if(n <= 1)
    {
        return false;
    }

    for(int i = 2; i*i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }

    return true;
}

void allPrimes(int n)
{
    for(int i = 2; i <= n; i++)
    {
       if(isPrime(i))
       {
        cout<<i<<" ";
       }
    }
}

int main()
{
    allPrimes(30);
    return 0;
}