//Address of Operator(&)  => Ampersand

#include <iostream>
using namespace std;

int main()
{
    int a = 10;  
    cout<<&a<<endl;  //0x61ff0c

    // int pointer = &a;  => error


    // int *ptr = 12; => error
    // int *ptr = 0x2353;  =. error

    int *ptr;   // ptr is a pointer to an int
    cout<<ptr<<endl;

    int *ptr1 = &a;
    cout<<ptr1<<endl;

    float b;
    float *ptr3 = &b;
    cout<<ptr3<<endl;

    char c;
    char *ptr4 = &c;
    cout<<ptr4<<endl;  //cout has special behavior for char*.

    int **ptr5 = &ptr1;
    cout<<ptr5<<endl;
    cout<<(ptr5 == &ptr1)<<endl;


//  ptr   → address
// *ptr  → value at that address

cout<<ptr1<<endl;
cout<<*ptr1<<endl;  //Go to the address stored in ptr1 and access the value there.  => dereferencing

int num;   // be cautions about initializationis, if not initialized then it may stores random number, unpredictable behaviour

cout<<num<<endl; //6422280
num = num + 10;
cout<<num<<endl;  //6422290


}