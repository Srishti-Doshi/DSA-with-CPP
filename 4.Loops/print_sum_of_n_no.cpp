//To print sum of n natural numbers using for loop

#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    int sum = 0;

    for(int i = 1; i<=n; i++)
    {
        sum +=i;
    }
    cout<<"sum of "<<n<<" numbers: "<<sum;
    return 0;
}