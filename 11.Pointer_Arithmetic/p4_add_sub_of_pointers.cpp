//Pointer Arithmetic : Addition and Subtraction of Pointers

#include<iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    int *ptr1 = &a, *ptr2 = &b;

    // int add = ptr1 + ptr2; //error : invlaid operation

    int sub = ptr1 - ptr2;  //valid but given pointers are of same type

    cout<<"ptr1 = "<<ptr1<<endl;
    cout<<"ptr2 = "<<ptr2<<endl;
    cout<<"sub = "<<sub<<endl; // 1 ( 1 int = 4 bytes)


    int arr[20] = {1, 2, 3, 4, 5, 6};
    int *p1 = arr;
    int *p2 = p1 + 3;

    cout<<*p1<<endl; //1
    cout<<*p2<<endl; //4

    cout<< p2 - p1; //3    =>12 bytes = 3 int
    return 0;
}