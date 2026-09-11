/* Write a function that print the largest of 3 numbers.*/

#include <iostream>
using namespace std;

int largestOf3(int a, int b, int c)
{
    if(a >= b)
    {
        if(a >= c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else
    {
        if(b >= c)
        {
            return b;
        }
        else
        {
            return c;
        }
    }
}

int largest_no(int a, int b, int c)
{
    if(a >= b && a >= c)
    {
        return a;
    }
    else if(b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    cout<<largestOf3(89, 97, 33)<<endl;
    cout<<largestOf3(8, 7, 03)<<endl;
    cout<<largestOf3(9, 9, 33)<<endl;

    cout<<largest_no(89, 97, 33)<<endl;
    cout<<largest_no(8, 7, 03)<<endl;
    cout<<largest_no(9, 9, 33)<<endl;
    return 0;
}

/*
TC — O(1)

There are only a fixed number of comparisons, regardless of how large the numbers are.

SC — O(1)

Used only the three input variables a, b, c and no extra data structure whose size grows with input.
*/