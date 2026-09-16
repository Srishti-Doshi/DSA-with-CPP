//Output & Input array

#include <iostream>
using namespace std;

int main()
{
    
    cout<<"Enter length of array: ";
    int n;
    cin>>n;
    
    //dynamically providing size to array => possible only in modern c++
    int arr[n];

    //input array
    cout<<"Input array elements: \n";

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
  
    cout<<endl;


    //output array


    cout << "Array elements are: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << ", ";
    }

    return 0;
}