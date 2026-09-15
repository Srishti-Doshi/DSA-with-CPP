/*
Print 01 Triangle Pattern

for n = 5

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter no. of rows: ";
    cin >> n;

    bool val = true;

    for (int i = 1; i <= n; i++)
    {
        if(i%2 != 0)
        {
            val = true;
        }
        for (int j = 1; j <= i; j++)
        {
           cout<<val<<" ";
           val = !val;
        }
        cout << endl;
    }
}