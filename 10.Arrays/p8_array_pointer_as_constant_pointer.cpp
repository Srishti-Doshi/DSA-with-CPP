//Array pointer acts like a constant pointer

#include<iostream>
using namespace std;

int main()
{
    int x = 10;
    int *ptr = &x;

    int y = 25;
    ptr = &y;  //normal pointer can change value

    int arr[5]; //array pointer
    cout<<arr<<"\n";

    // arr = &x;  //error => array pointer is not modifiable

    return 0;
}