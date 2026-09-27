/*
There is an integer array `nums` sorted in ascending order (with distinct values).

Prior to being passed to your function, `nums` is possibly rotated at an unknown pivot index `K (1 <= k < nums.length)` such that the resulting array is `[nums[k], nums[k+1], ..., nums[n-1], nums[0], nums[1], ..., nums[k-1]]` (0-indexed).

For example, `[0,1,2,4,5,6,7]` might be rotated at pivot index `3` and become `[4,5,6,7,0,1,2]`.

Given the array `nums` after the possible rotation and an integer `target`, return the index of `target` if it is in `nums`, or `-1` if it is not in `nums`.

### Examples:

**Input:** `nums = [4,5,6,7,0,1,2]`, `target = 0`
**Output:** `4`

**Input:** `nums = [4,5,6,7,0,1,2]`, `target = 3`
**Output:** `-1`
*/

#include <iostream>
using namespace std;

int BinarySearch(int *arr, int n, int target)
{
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            // search in left half
            end = mid - 1;
        }
        else // arr[mid] < target
        {
            // search in right half
            start = mid + 1;
        }
    }

    return -1;
}

// Aapproach 1 => TC: O(n), SC = O(n)
void findInRotatedArray(int *arr, int n, int target)
{
    // Find rotating pivot
    int pivot = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            pivot = i;
            break;
        }
    }

    if (pivot == -1)
    {
        // Array is not rotated
        cout << BinarySearch(arr, n, target) << endl;
        return;
    }

    int arr1[1000];
    for (int i = 0; i <= pivot; i++)
    {
        arr1[i] = arr[i];
    }

    int j = 0;
    int arr2[1000];
    for (int i = pivot + 1; i < n; i++)
    {
        arr2[j] = arr[i];
        j++;
    }

    int index1 = BinarySearch(arr1, pivot + 1, target);
    int index2 = BinarySearch(arr2, n - pivot - 1, target);

    if (index1 != -1)
    {
        cout << index1 << endl;
    }
    else if (index2 != -1)
    {
        cout << index2 + pivot + 1 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int nums[] = {0, 1, 2, 3, 4, 5, 6, 7};
    int numsRotated[] = {4, 5, 6, 7, 0, 1, 2, 3}; // rotating pivot k = 3, 1<=k<n

    findInRotatedArray(numsRotated, 8, 0);
    findInRotatedArray(numsRotated, 8, 3);
    findInRotatedArray(numsRotated, 8, 10);
    findInRotatedArray(nums, 8, 3);
    findInRotatedArray(nums, 8, 10);
    
    return 0;
}
