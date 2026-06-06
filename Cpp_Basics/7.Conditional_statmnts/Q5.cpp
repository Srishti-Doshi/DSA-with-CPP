//Question5: For any 3 digit number check whether it’s an Armstrong number or not. Armstrong number is a number that is equal to the sum of cubes of its digits. 
// Eg: 371 is an armstrong number. 3*3*3+7*7*7+1*1*1 = 371

#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a 3 digit number: ";
    cin>>n;

    int num = n;

    int dig1 = num % 10;

    num /= 10;

    int dig2 = num % 10;

    num /= 10;

    int dig3 = num;

    int cubesum = dig1*dig1*dig1 + dig2*dig2*dig2 + dig3*dig3*dig3 ;

    if( n == cubesum)
    {
        cout<<"Given number is an Armstrong number";
    }
    else{
        cout<<"Given number is not an Armstrong number";
    }
    return 0;
}