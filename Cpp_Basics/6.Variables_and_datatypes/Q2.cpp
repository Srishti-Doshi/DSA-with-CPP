// Enter cost of 3 items from the user (using float data type)-a pencil,a pen and an eraser. You have to output the total cost of the items back to the user as their bill.(Add on:You can also try adding 18% GST tax to the items in the bill as an advanced problem

#include<iostream>
using namespace std;

int main(){
    float pencil, pen, eraser;
    cout<<"Enter pencil cost: ";
    cin>>pencil;
    cout<<"Enter pen cost: ";
    cin>>pen;
    cout<<"Enter eraser cost: ";
    cin>>eraser;

    float bill = pencil + pen + eraser;

    cout<<"Bill: "<<bill<<endl;

    // float gst = (18/100)*bill;  // gst = 0
    // float gst = (18.0/100)*bill;
    float gst = (18*bill)/100;
    cout<<"gst: "<<gst<<endl;
    bill = bill + gst;
/*
Expression	-> Result Type
int / int	-> int
float / int	-> float
int / float	-> float
float / float	-> float
*/
    cout<<"Bill(applying 18% GST): "<<bill;
    return 0;
}