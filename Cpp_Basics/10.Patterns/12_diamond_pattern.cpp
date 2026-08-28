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
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int stars = 2 * min(i, n-i+1)-1;

        /*
        if(i <= (n+1)/2)
        {
            stars = 2*i - 1;
        }
        else
        {
            stars = 2*(n-i)+1;
        }
        */

        int spaces = (n-stars)/2;

        //spaces
        for(int j = 1; j <= spaces; j++)
        {
            cout<<"  ";
        }

        //stars
        for(int j = 1; j <= stars; j++)
        {
            cout<<"* ";
        }

        cout << endl;
    }

    return 0;
}

// Time complexity = O(num*num)