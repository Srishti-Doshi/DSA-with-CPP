// NULL pointer => This pointer currently points to nothing

//nullptr is a special value that means no valid object/address is being pointed to.

#include <iostream>
using namespace std;

int main()
{
    //don't have something to point to yet.

    int * ptr1; //❌ uninitialized pointer

// An uninitialized pointer could contain some random memory address

    cout<<ptr1<<endl; // random address
    cout<<*ptr1<<endl;  // random value

    // Initializing a pointer with NULL is a programmer's responsibility

    int * ptr2 = NULL;
    cout<<ptr2<<endl;  // 0  => 0 i.e invlaid address/temporary adress 

    // dereferencing a null pointer is not possible

    // cout<<*ptr2<<endl;  // segmentation fault


    int *ptr5 = NULL; // older way => may cause ambihuity

    int *ptr6 = nullptr; // modern way , preffered, modern C++ style 👍

    //ptr6 is a pointer to an int, and currently it points to nothing.


    cout<<ptr6<<endl;  //0

    // cout<<*ptr6<<endl;  //nothing , error, stops printing next too

    cout<<"Hello"<<endl;  // nothing



    // later we can assign values to our null pointer and then derefernce it too like normally


    int h = 200;

    ptr6 = &h;

    cout<<*ptr6;

}