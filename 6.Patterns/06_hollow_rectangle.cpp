/*
Print Hollow Rectangle Pattern

for length = 4
for width = 5

* * * * *
*       *
*       *
* * * * *

*/

#include<iostream>
using namespace std;

int main()
{
    int l;
    cout<<"Enter length: ";
    cin>>l;

    int w;
    cout<<"Enter width: ";
    cin>>w;

/*
        j j j j j
        1 2 3 4 5
               (w)

i=1     * * * * *
i=2     *       *
i=3     *       *
i=4(l)  * * * * *

*/

    for(int i = 1; i <= l; i++)
    {
        for(int j = 1; j <= w; j++)
        {
            if(j == 1 || j == w || i == 1 || i == l)
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }

    return 0;
}