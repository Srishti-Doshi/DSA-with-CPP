//BuildaSimpleInterestCalculator.Input:principal(P),rate(R),time(T)Output:(P*R*T)/100

#include <iostream>
using namespace std;

int main(){
    float p, r, t;
    cout<<"P: ";
    cin>>p;

    cout<<"R: ";
    cin>>r;

    cout<<"T: ";
    cin>>t;

    float si = p*r*t/100;

    cout<<"SI: "<<si;
    
    return 0;
}
//Writeaprogramtocalculatetheareaofacircle.Input:r(radius)Output:PI*r*r(area)
