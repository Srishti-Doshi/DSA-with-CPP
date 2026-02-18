#include<bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    char grade;
    cout<<"Enter your marks: ";
    cin>>marks;

    // if(marks<25)
    // {
    //     grade = 'F';
    // }
    // else if(marks>=25 && marks <=44){
    //     grade = 'E';
    // }
    // else if(marks>=45 && marks <=49){
    //     grade = 'D'
    // }
    // else if(marks>=50 && marks <=59){
    //     grade = 'C';
    // }
    // else if(marks>=60 && marks <=79){
    //     grade = 'B';
    // }
    // else if(marks>=80 && marks <=100){
    //     grade = 'A';
    // }


    if(marks<25)
    {
        grade = 'F';
    }
    else if(marks<=44)
    {
        grade = 'E';
    }
    else if(marks<=49)
    {
        grade = 'D';
    }
    else if(marks<=59)
    {
        grade = 'C';
    }
    else if(marks<=79)
    {
        grade = 'B';
    }
    else if(marks<=100)
    {
        grade = 'A';
    }
    


    cout<<"Grade: "<<grade;
    return 0;
}