// print n natural numbers in reversed manner

#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter n: ";
    cin>>n;

    for(int i = n; i > 0; i--){
        cout<<i<<" ";
    }
    return 0;
}