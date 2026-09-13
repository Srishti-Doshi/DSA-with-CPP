/*
Need of Pointers:
The really powerful part is that a pointer allows you to change the original variable through its address.
*/

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int* p = &a;  //The address stored here in pointer p points to an int.
    
    *p = 20;  // Go the address stored in p and accesss its value
    cout<<a<<endl;

    // *p == a
    // p == &a
    // &p == **pp

/*
int*      → pointer to int
float*    → pointer to float
char*     → pointer to char
double*   → pointer to double
*/
}