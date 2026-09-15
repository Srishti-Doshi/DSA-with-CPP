//Print the digits of a number in reverse order

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    while (n)
    {
        int lastdig = n % 10;
        cout<<lastdig;
        n /= 10; // removal of last digit
    }
    return 0;
}