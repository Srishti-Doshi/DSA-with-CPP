/*
For n = 4

*
**
***
****

*/

#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the number of rows: ";
    int n;
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    /*
    the below code prints n rows but each row with n-1 columns(stars)
    
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++){
            cout<<"*";
        }
        cout<<endl;
    }*/
    return 0;
}