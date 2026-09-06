/*
for n = 7
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
    cout<<"Enter odd no. of rows(like 5, 7, 9,..): ";
    cin >> n;

    //1st half pattern
    for( int i = 0; i < n/2+1; i++)
    {
        if(i == 0)
        {
            for(int j = 1; j <= n; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            int spaces = 2*i - 1;
            int stars = n - spaces;

            for(int j = 1; j <= stars/2; j++)
            {
                cout<<"* ";
            }
            for(int j = 1; j <= spaces; j++)
            {
                cout<<"  ";
            }
            for(int j = 1; j <= stars/2; j++)
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }
    //2nd half pattern
    for( int i = n/2-1; i >= 0; i--)
    {
        if(i == 0)
        {
            for(int j = 1; j <= n; j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            int spaces = 2*i - 1;
            int stars = n - spaces;

            for(int j = 1; j <= stars/2; j++)
            {
                cout<<"* ";
            }
            for(int j = 1; j <= spaces; j++)
            {
                cout<<"  ";
            }
            for(int j = 1; j <= stars/2; j++)
            {
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}