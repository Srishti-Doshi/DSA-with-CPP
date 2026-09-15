// WRITE A PROGRM to show numbers entered by USER except MULTIPLES OF 10

#include <iostream>
using namespace std;

int main()
{
    int n;

    do
    {
        cout << "Enter n: ";
        cin >> n;
        if (n % 10 == 0)
        {
            continue;
            ;
        }
        cout << "You entered: " << n <<endl;
    } while (n>0);

    return 0;
}
