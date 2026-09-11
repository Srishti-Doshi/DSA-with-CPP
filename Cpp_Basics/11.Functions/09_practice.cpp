#include <iostream>
using namespace std;

int main()
{
    int i; // imp for printing i outside loop

    for (i = 1; i <= 4; i++)
    {
        if (i == 3)
        {
            continue; // skips the iteration
        }
        cout << i << endl;
    }

    cout << endl
         << i << endl; // 5

    // Normal loop => for (initialization; condition; update)

    // infinite loops

    /*
    
    for (int i = 0;; i++)
    {
        cout << i << " ";  // 0 1 2 3 4 5 .....
    }

   
    int j;

    for (;;)  // for(nothing; true; nothing)
    {
       cout <<j<<" ";     // 32764 32764 32764 32764 ... random values
    }

    for(int i = 0; i < 1; i--)
    {
        cout<<i<<" ";  //  0 -1 -2 -3 -4 ......
    }

    */

}