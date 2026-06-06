// wRITE A PROGRM WHERE A USER KEEPS ENTERING NUMBER UNTIL THEY ENTER A MULTIPLE OF 10

#include <iostream>
using namespace std;

int main()
{

    while (true)
    {
        int n;
        cout << "Enter n: ";
        cin >> n;
        if(n%10 == 0)
        {
            break;
        }
    }
    cout << "YOU ENTERED A MULTIPLE OF 10, OUT OF LOOP... "<< endl;
    return 0;
}