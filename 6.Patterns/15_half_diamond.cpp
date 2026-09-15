/*
Print Half Diamond Pattern

*
* *
* * *
* * * *
* * *
* *
*

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int m = n / 2;

    for (int i = 1; i <= m + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<"* ";
        }
        cout << endl;
    }

    for (int i = m; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout <<"* ";
        }
        cout << endl;
    }
}