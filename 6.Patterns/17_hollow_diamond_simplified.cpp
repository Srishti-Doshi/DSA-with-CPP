#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter odd no. of rows: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // int spaces = 2i - 1;
        // int spaces = 2n - 2i - 3;

        int spaces = 2 * min(i, n - 1 - i) - 1;

        if (spaces < 0)
        {
            spaces = 0;
            cout<<"* ";
        }

        int stars = n - spaces;

        for (int j = 0; j < stars / 2; j++)
            cout << "* ";

        for (int j = 0; j < spaces; j++)
            cout << "  ";

        for (int j = 0; j < stars / 2; j++)
            cout << "* ";

        cout << endl;
    }

    return 0;
}