 /*Question2: Write a C++ program that takes a year from the user and print whether that year is a leap year or not ..Hint: A leap year is exactly divisible by 4 except for century years(years ending with 00). The century year is a leap year only if it is perfectly divisible by 400.
 Eg: 1999 is not a leap year 
     2000 is a leap year 
     2004 is a leap year.*/

/*
A year is leap year if:

Rule 1:

Divisible by 4
AND

Rule 2:

If divisible by 100, then it must also be divisible by 400.*/

#include <iostream>
using namespace std;

int main(){
    int year;
    cout<<"Enter a year: ";
    cin>>year;

    if(year % 400 == 0){
        cout<<"Leap year";
    }
    else if( year % 100 == 0){
        cout<<"not a leap year";
    }
    else if (year% 4 == 0){
        cout<<"Leap year";
    }
    else {
        cout<<"not a leap year.";
    }

    return 0;
}