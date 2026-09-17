// Linear Search

// arr[] = {10, 20, 17, 15}

/*

key = 17
index = 0, 10 == 17
index = 1, 20 == 17
index = 2, 17 == 17
return 2

key = 37
index = 0, 10 == 37
index = 1, 20 == 37
index = 2, 17 == 37
index = 3, 15 == 37
return -1

*/

#include <iostream>
using namespace std;

int LinearSearch(int *arr, int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int num[] = {10, 20, 55, 34, 23};

    cout << LinearSearch(num, 5, 34)<<endl;
    cout << LinearSearch(num, 5, 24)<<endl;
}

//TC = O(n)
