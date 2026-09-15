// print the sum of odd digits(digits are which are odd number) of a number using while loop

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int digit_sum = 0;
    while (n)
    {
        int lastdig = n % 10;
        if (lastdig % 2 != 0)
        {
            digit_sum += lastdig;
        }
        n /= 10; // removal of last digit
    }
    cout << "sum of digits: " << digit_sum << endl;
    return 0;
}