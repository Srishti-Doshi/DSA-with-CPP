/*
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct

Example:
Input: nums = 
Output: false

Input: nums = [1, 1, 1, 3, 3, 4, 3, 2, 4, 2]
Output: true
*/

/*
Logic

Input : [1, 2, 3, 4]

Outer Loop : 0 to n-1
Inner Loop : 0 to n-1 except current i

Outer loop : 1
Inner loop compares 1 with : 2 , 3, 4

Outer loop : 2
Inner loop compares 1 with : 1, 3, 4
Inner loop compares 1 with : 3, 4           (avoid unnecessary comparisons)

Outer loop : 3
Inner loop compares 1 with : 4
Inner loop compares 1 with : 4

Outer loop : 4
Inner loop compares 1 with : 1, 2 , 3
Inner loop compares 1 with :nothing

*/

#include <iostream>
using namespace std;

//Brute Force Approach
bool containsDuplicate(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == j)
            {
                continue;
            }
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}
// TC = O(n^2)
// SC = O(1)


//Cleaner Version , avoid duplicate comparisons
bool containsDuplicate2(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                return true;
            }
        }
    }

    return false;
}
// TC = O(n^2)
// SC = O(1)

int main()
{
    int nums[] = {1, 2, 3, 4};
    cout<<containsDuplicate(nums, 4)<<"\n";
    cout<<containsDuplicate2(nums, 4)<<"\n";

    int digits[] = {1, 1, 1, 3, 3, 4, 3, 2, 4, 2};
    cout<<containsDuplicate(digits, 10)<<"\n";
    cout<<containsDuplicate2(digits, 10)<<"\n";

    return 0;
}