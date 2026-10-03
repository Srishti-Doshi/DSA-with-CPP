// Inbuilt Sort

//Ascending order   =>    sort(start, end)
//Descending order  =>    sort(start, end, greater<int>())

// arr and arr+8 are pointers/iterator-like addresses, but sort() treats them as the boundaries of a range.

// it means Sort the elements starting from arr up to, but NOT including, arr + 8.


#include<iostream>
#include<algorithm>
using namespace std;

void print(int *arr, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int arr[8] = {1, 4, 1, 3, 2, 4, 3, 7};

    print(arr, 8);

    sort(arr, arr+8);   // sort() uses the default comparison a<b. So, it gives ascending order.    1 2 3 ....

    print(arr, 8);

    sort(arr, arr+8, greater<int>());   // greater<int>() is a comparison object (functor) that tells sort() to compare elements in greater-than (>) order.   i.e it tells compare using a>b.    5 4 3 ....
    
    print(arr, 8);

    sort(arr+2, arr+5);  // arr can also be sorted in specific parts like from index 2 to index 4

    print(arr, 8);

    return 0;
}