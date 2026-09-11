/* Write a function to check if a number is a palindrome in C++.

A number is called a palindrome if the number is equal to the reverse of number.

121 => palindrome
112212211 => palindrome
132 => not a palindrome

100 + 20 + 1
*/

#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(int n)                            // 134
{
    int original = n;
    int reverse = 0;

    while (n)                                       //134           //13            //1              //0
    {
        int digit = n % 10;                         // 4            //3             //1
        n /= 10;                                    // 13           1               //0
        reverse = reverse * 10 + digit;             //4             //43            //431
    }

    return original == reverse;                                                                       // 134 == 431 => false
}

int main()
{
    cout << isPalindrome(121) << endl;
    cout << isPalindrome(134) << endl;
    cout << isPalindrome(13431) << endl;
    cout << isPalindrome(134131) << endl;
    cout << isPalindrome(1441) << endl;
}

/*   Time Complexity — O(d)  or O(log₁₀ n)

Let d = number of digits in n.

the loop executes d times.

Therefore:   Time Complexity = O(d)

or
We are repeatedly dividing by 10
We're basically asking: "How many times can I divide n by 10 before I reach 1?"

Mathematically: n / 10 / 10 / 10 ... = 1

If we divide k times: n / 10ᵏ = 1
Therefore: n = 10ᵏ
Taking log base 10: k = log₁₀(n)
And k is the number of loop iterations.

Therefore: TC = O(log₁₀ n)   or  O(log n)
*/



/* Space Complexity — O(1)

Look at the variables:

int original = n;
int reverse = 0;
int digit;

We only create a fixed number of variables.
We aren't creating an array, string, vector, etc. whose size grows with n.

Therefore: SC = O(1)
*/