//Output & Input array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int len = sizeof(arr)/sizeof(int);

    //input array
    cout<<"Input array elements: ";

    for(int i = 0; i < len; i++)
    {
        cin>>arr[i];
    }
  
    cout<<endl;


    //output array


    cout << "Array elements are:\n";

    for(int i = 0; i < len; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}