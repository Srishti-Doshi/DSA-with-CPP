//To check whetheer a number is prime or not

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool isPrime = true;

    for (int i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            isPrime = false;
            break;
        }
    }

    if(isPrime)
    {
        cout<<"Prime no.";
    }
    else{
        cout<<"Non-Prime no.";
    }
    return 0;
}