//Pointer Arithmetic : Comparison(==, <, <=, >, >=)

#include<iostream>
using namespace std;

int main()
{
    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *p1 = arr;
    int *p2 = p1 + 3;

    cout<<p1<<endl;
    cout<<p2<<endl;

    cout<< (p2 > p1)<<"\n"; //1 => memory address of p2 > memory address of p1
    cout<< (p2 >= p1)<<"\n"; //1
    cout<< (p2 < p1)<<"\n";  //0
    cout<< (p2 <= p1)<<"\n";  //0
    cout<< (p2 == p1)<<"\n";  //0

    cout<<(p1 == arr);  //1
    return 0;
}