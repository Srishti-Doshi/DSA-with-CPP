// Write a program to check whether a number is armstrong or not
// An Armstrong number (also called a narcissistic number) is a number that is equal to the sum of its own digits, where each digit is raised to the power of the total number of digits.
/*
Example 1: 153
153 has 3 digits.
1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153
So, 153 is an Armstrong number.
*/

#include<iostream>
using namespace std;

int main()
{
   int n;
   cout<<"Enter a number to check whether it is armstrong number or not : ";
   cin>>n;
   
//    int len = to_string(n).length();

    int num = n;
    int len = 0;
    while( num != 0)
    {
        len++;
        // num = num / 10;
        num /= 10;
    }
   
   num = n;
   int sum = 0;
   

   while(num != 0)
   {
    int digit = num % 10;
    num /= 10;

    int product = 1;

    for(int i = 0; i < len; i++)
    {
        // product = product*digit;
        product *= digit;
    }

    // sum = sum + product;
    sum += product;
   }
   
   if (n == sum)
    cout<<"Armstrong";
   else
    cout<<"Not an Armstrong";

    return 0;
}