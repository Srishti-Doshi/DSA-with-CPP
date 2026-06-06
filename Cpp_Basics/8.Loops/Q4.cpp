//Reverse a given number and print the result

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int result = 0;
    while (n)
    {
        int lastdig = n % 10;
        result = result*10 + lastdig;
        n /= 10; // removal of last digit
    }
    cout << "reversed number: " << result << endl;
    return 0;
}