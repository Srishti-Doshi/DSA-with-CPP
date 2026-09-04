/*

* * * * * * *
* * * _ * * *
* * _ _ _ * *
* _ _ _ _ _ *
* * _ _ _ * *
* * * _ * * *
* * * * * * *

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int spaces = 2 * min(i, n - i + 1) - 1;
        int stars = (n - spaces) / 2;

        for (int j = 1; j <= stars; j++)
            cout << "* ";

        for (int j = 1; j <= spaces; j++)
            cout << "  ";

        for (int j = 1; j <= stars; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}