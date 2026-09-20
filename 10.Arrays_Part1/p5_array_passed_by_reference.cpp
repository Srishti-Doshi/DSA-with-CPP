//Arrays are not passed by value
//Arrays are passed by reference

#include <iostream>
using namespace std;

void func(int arr[])
{
    arr[0] = 1000;
}

void func2(int *ptr)
{
    ptr[0] = 1000;
}

int main()
{
    int num[] = {23, 25, 24, 15, 9};

    func(num);  //passing array name is equal to passing the pointer

    func2(num); // same result

    cout<<num[0]; //changes are reflecting in main()
    return 0;
}


// Arrays are passed by reference
// C++ array name ---> pointer

// below syntax both functions -> smae execution

/*
void printArr(int arr[])
{
    
}

void printArr(int *arr)
{

}
*/