/*
Concentric Square Pattern

n = 1

1

n = 2

2 2 2
2 1 2
2 2 2

n = 3

3 3 3 3 3
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3


n = 4

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    int t = 0;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            for(int k = 1; k <= n; k++)
            {
                if ( i == n-k+1 || j== n-k+1 || i == n+k-1 || j== n+k-1)
                {
                    t = k;
                }
            }
            cout<<t<<" ";
        }
        cout << endl;
    }
}


//Time Complexity = O(n^3)