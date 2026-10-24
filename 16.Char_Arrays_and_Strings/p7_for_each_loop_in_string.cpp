#include <iostream>
using namespace std;

int main()
{
    string str = "My name is Sri";

    for(int i = 0; i < str.length(); i++)   //notice in OOPs we use dot operator to call member functions
    {
        cout<<str[i]<<"-";
    }

    cout<<"\n";

    //for each loop for string
    for(char ch : str)
    {
        cout<<ch<<"-";
    }
    
    //Here in character ch , characters of str gets stored one by one
    
    return 0;
}