#include <bits/stdc++.h>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    // if(age<18)
    // {
    //     cout<<"not eligible for job";
    // }
    // else if(age>57)
    // {
    //     cout<<"retirement time";
    // }
    // else if(age>=55)
    // {
    //     cout<<"eligible for job, but retirement time soon";
    // }
    // else
    // {
    //     cout<<"eligible for job";
    // }

    if (age < 18)
    {
        cout << "not eligible for job";
    }
    else if(age<=57)
    {
        cout << "eligible for job\n";
        
        if (age >= 55)
        {
            cout << "eligible for job, but retirement time soon";
        }
    }
    else{
        cout<<"retirement time";
    }

    return 0;
}