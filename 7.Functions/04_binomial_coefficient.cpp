/*
Binomial Coefficient for given n & r

nCr = n!/r!(n-r)!

nCr gives the number of ways to choose r items from n items when order does NOT matter.
nCr → number of possible selections of r things from n things, where order doe

n = total number of objects/options available.
r = number of objects you want to choose from those n objects.
*/

#include<iostream>
using namespace std;


int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else return n*fact(n-1);
}

int factorial(int n)
{
    int fact = 1;

    for(int i = 1; i <= n; i++)
    {
        // fact= fact * i;
        fact*=i;
    }

    return fact;
}

int binomialCoffecient(int n, int r)
{
    // return fact(n)/fact(r)*fact(n-r);   => wrong answer => parenthesis is important
    return fact(n)/(fact(r)*fact(n-r));
}


int main()
{
   cout<<binomialCoffecient(4,2)<<endl;
   cout<<binomialCoffecient(3,2)<<endl;
    return 0;
}