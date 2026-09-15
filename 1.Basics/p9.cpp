#include <bits/stdc++.h>
using namespace std;

int main()
{
    int day;
    cout << "Enter Day(1 to 7): ";
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break; // breaks of all the conditional statements after this case and will not be executed
    case 2:
        cout << "Tuesday";
        break;
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break;
    case 5:
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;

    default:
        cout << "invalid day";
    }
    
    cout<<"\nbreak doesn't block me from executing this statement";

    return 0;
}