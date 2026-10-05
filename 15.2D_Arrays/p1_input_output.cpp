#include<iostream>
using namespace std;

int main()
{
    int num1[5] = {10, 40, 20, 30, 2};   // 1D array

    //2D Array
    int num2[3][2] = {
        {74, 6},
        {42, 5},
        {70, 6}
    };

    int n = 4;
    int m = 3;

    int num3[n][m];

    cout<<"Enter array: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin>>num3[i][j];
        }
    }


    cout<<"Output array: ";
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout<<num3[i][j];
        }
        cout<<endl;
    }
    return 0;
}