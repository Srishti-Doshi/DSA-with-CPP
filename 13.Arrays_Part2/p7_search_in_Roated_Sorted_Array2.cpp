/*
There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `K (1 <= k < nums.length)` such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed).

For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` after the possible rotation and an integer `target`, return the index of `target` if it is in `nums`, or `-1` if it is not in `nums`.

You must write an algorithm with **O(log n)** runtime complexity.

### Examples:

**Input:** `nums = [4,5,6,7,0,1,2]`, `target = 0`
**Output:** `4`

**Input:** `nums = [4,5,6,7,0,1,2]`, `target = 3`
**Output:** `-1`
*/

// Rotated sorted array mein target ko binary-search style mein O(log n) time mein find karo.

#include <iostream>
using namespace std;
  
// Approach 2 : TC = O(log n), SC = O(1)
int searchRotated(int *arr, int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        // Target Found
        if (arr[mid] == target)
        {
            return mid;
        }

        // Check if Left half is sorted
        if (arr[start] <= arr[mid])
        {
            // Is target inside the sorted left half?
            if (target >= arr[start] && target < arr[mid])
            {
                end = mid - 1; // search left
            }
            else
            {
                start = mid + 1; // search right
            }
        }
        else // right half is sorted
        {
            // Is target inside the sorted right half?
            if (target > arr[mid] && target <= arr[end])
            {
                start = mid + 1; // search right
            }
            else
            {
                end = mid - 1; // search left
            }
        }
    }
    return -1;
}

int main()
{
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int numsRotated[] = {4, 5, 6, 7, 0, 1, 2, 3}; // rotating pivot k = 3, 1<=k<n

    cout<<searchRotated(numsRotated, 8, 0)<<"\n";
    cout<<searchRotated(numsRotated, 8, 3)<<"\n";
    cout<<searchRotated(numsRotated, 8, 10)<<"\n";
    cout<<searchRotated(nums, 8, 3)<<"\n";
    cout<<searchRotated(nums, 8, 10)<<"\n";

    return 0;
}
