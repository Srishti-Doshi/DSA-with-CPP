// Array is a data structure (way of arranging data)
// Array is a linear collection of same type of elements that are stored together in contiguous memory spaces.

#include <iostream>
using namespace std;

int main()
{
    // suppose we need to store marks for 50 students, then to store we have to create 50 variables of unique names

    int marks1 = 98;
    int marks2 = 78;
    int marks3 = 96;
    int marks4 = 94; // and so on upto marks50

    // this can be simply done by array , only one name

    // Initialize while declaring:
    int marks[50] = {98, 78, 96, 94, 54, 54};
    // if we intialize array with some values , then remaining automatically gets initialized with 0 value

    int cgpa[] = {1, 2, 3}; // automatically array created of size 3

    // Assign individual elements la
    int fruits[4]; // if not initilaized then we will get garbage value

    fruits[0] = 'banana';
    fruits[1] = 'apple';

    cout << sizeof(marks) << endl; // 200

    // length of array = sizeof(marks)/sizeof(int)

    // accessing each value
    cout << marks[0];
}

// In array memory is allocated statically( at compile time)