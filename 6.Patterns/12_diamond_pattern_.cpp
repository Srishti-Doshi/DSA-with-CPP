/*
Diamond Pattern

n = 7

_ _ _ *
_ _ * * *
_ * * * * *
* * * * * * *
_ * * * * *
_ _ * * *
_ _ _ *


n = 8

_ _ _ *
_ _ * * *
_ * * * * *
* * * * * * *
* * * * * * *
_ * * * * *
_ _ * * *
_ _ _ *
*/

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter no. of rows: ";
    cin >> num;

    int n = num/2;

    // PYRAMID
    for (int i = 1; i <= n; i++)
    {
        // spaces
        if (num%2 != 0)  //odd no. of rows -> extra space
        {
            for (int j = 1; j <= n-i+1; j++)
            {
                cout << "  ";
            }
        }
        else        // even no. of rows
        {
            for (int j = 1; j <= n-i; j++)
            {
                cout << "  ";
            }
        }

        // stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }


    if(num%2 != 0)
    {
        n++;  //odd no. of rows
    }

    // INVERTED PYRAMID
    for (int i = n; i >= 1; i--)
    {
        // spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        // stars
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}


// Time complexity = O(num*num)