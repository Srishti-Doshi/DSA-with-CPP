// A dangling pointer is a pointer that still contains an address, but the object at that address no longer exists.

/*
Dangling pointer:

int* p = &a;
// a gets destroyed

Points to something that used to exist, but no longer does.
*/

#include <iostream>
using namespace std;

int main()
{ 
    int *p;
    cout << p << endl;  //random

    {
        int a = 10;
        p = &a;

        cout<<"inside block"<<endl;
        cout << *p << endl;  //10
        cout << p << endl;   //0x61ff08
    }

    // When the block ends: a is destroyed
    // But p still contains the old address: p ─────→ ❌ no valid object, So p is now a dangling pointer.

    cout<<"outside block"<<endl;
    cout << *p << endl;  // 10 or 0 or something ❌ undefined behavior
    cout << p << endl;   // 0x61ff08

//p still contains the old address, but that address is no longer the address of a valid a object.



    int * d = new int(10);    // d--->10

/*
new int(10) does three things:

1)Allocates memory for an int in dynamic memory (heap).
2)Initializes that int with 10.
3)Returns the address of that newly created int.

d is a pointer and contains memory address of int 10
*/

    cout<< *d<<endl; // 10

    delete d;  //d───→ [ memory no longer belongs to that object ] , i.e d -> invalid/dead memory

//It deletes the dynamically allocated int object, not the pointer variable d.

    cout<<*d;    // random value


    //correct way
    delete d;
    d = nullptr; // d-->nullptr

}

//delete -> Release/destroy an object that was dynamically allocated using new.