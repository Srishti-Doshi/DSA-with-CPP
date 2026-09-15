/* 
Write a function to print factorial of a given number n

0! = 1
1! = 1
2! = 1 X 2 = 2
3! = 1 X 2 X 3 = 6
5! = 1 X 2 X 3 X 4 X 5 = 120
n! = 1 X .... X n

*/

#include<iostream>
using namespace std;

int fact(int n)
{
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
    {
        fact = fact*i;
    }

    return fact;
}

int main()
{
    cout<<fact(3)<<"\n";
    cout<<fact(5);
    return 0;
}