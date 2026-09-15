/*
Print Butterfly Pattern

*             *
* *         * *
* * *     * * *
* * * * * * * *
* * * * * * * *
* * *     * * *
* *         * *
*             *


* _ _ _ _ _ *
* * _ _ _ * *
* * * _ * * *
* * * * * * *
* * * _ * * *
* * _ _ _ * *
* _ _ _ _ _ *

*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter no. of rows: ";
    cin>>num;

    int n = num/2;

    //upper half
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        for(int j = 1; j <= num-2*i; j++) 
        {
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //middle row for odd no. of rows
    if(num%2 != 0)
    {
        for(int i = 1; i <= num; i++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    //lower half
    for(int i = n; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        for(int j = 1; j <= num-2*i; j++)
        {
            cout<<"  ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}