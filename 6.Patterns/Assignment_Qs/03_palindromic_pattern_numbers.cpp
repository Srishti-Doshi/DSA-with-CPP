/*
Print Palindromic Pattern with numbers

for n = 5

_ _ _ _ 1
_ _ _ 2 1 2
_ _ 3 2 1 2 3
_ 4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

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
        //spaces
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }

        //nums

        int num = i;
        bool inc = false;

        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << num << " ";
            if(inc)
            {
                num++;
            }
            else
            {
                num--;
            }
            if (num == 1)
            {
              inc  = true;
            }
        }

        cout << endl;
    }
}