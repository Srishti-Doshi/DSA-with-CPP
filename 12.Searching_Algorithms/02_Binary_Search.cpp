// Binary Search = only works on sorted array

/*
arr[] = {2, 4, 6, 8, 10, 12, 14}
n = 7
key = 12

start = 0;
end = n-1 => 6;

mid = (0+6)/2 = 3
arr[3] == key   => 8 == 12
8 < 12 => true  => 2nd half
start = mid + 1 => 4

mid = (4+6)/2 = 5;
arr[mid] == key => 12 == 12 => true 
return mid => 5

*/

#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key)
{
    int start = 0;
    int end = n-1;
    int mid;

    while(start <= end)
    {
        mid = (start + end)/2;

        if(arr[mid] == key)
        {
            return mid;  //key found
        }
        else if(arr[mid] < key)
        {
            //search in 2nd half
            start = mid + 1;
        }
        else // arr[mid] > key
        {
            //search in 1st half
            end = mid - 1;
        }
    }

    return -1;
    
}

int main()
{
    cout<<"Binary Search \n";
    int num[] = {2, 4, 8, 12, 24, 38, 40};

    cout << binarySearch(num, 7, 24)<<endl;
    cout << binarySearch(num, 7, 8)<<endl;
    cout << binarySearch(num, 7, 44)<<endl;

    return 0;
}

// Time Complexity => relation between input size (n) and no. of operations performed(iterations).

/*
1st iteration = array size n/2^0
2nd iteration = array size n/2^1
3rd iteration = array size n/2^2
     |                 | 
     |                 |
x iteration = array size =>  n/2^(x-1) = 1

n = 2^(x-1)
log n = x-1 (taking log base 2 on both sides)
x = log n + 1

x = log n
*/

// TC= O(log n)

// Space Complexity : Inside binarySearch(), only a fixed number of variables are created, There is no extra array, no recursion, and no dynamically growing data structure.

//The input array itself takes O(n) space, but this is input space, not auxiliary space.

// auxiliary space — the extra memory used by the algorithm excluding the input data.

//SC = O(1) Auxiliary Space
