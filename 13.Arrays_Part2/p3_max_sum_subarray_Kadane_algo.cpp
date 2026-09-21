// Max Sum Subarray

// For Example:
// arr[5] = {1, 2, 3, 4, 5}

// Subarrays of arr :
// {1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {1, 2, 3, 4, 5},
// {2}, {2, 3}, {2, 3, 4}, {2, 3, 4, 5},
// {3}, {3, 4}, {3, 4, 5},
// {4}, {4, 5},
// {5}

// Sum of Subarrays:
// 1, 3, 6, 10, 15,
// 2, 5, 9, 14,
// 3, 7, 12,
// 4, 9,
// 5

//Max sum of Subarrays : 15

#include <iostream>

#include <climits>
using namespace std;

// Kadane's Algorithm (Dynamic Programming Approach)
int maxSubarraySum(int *arr, int n)
{
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);

        if(currSum < 0)
        {
            currSum = 0;
        }

    }

    return maxSum;
}


int main()
{
    int num[] = {1, 2, 3, 4, 5};
    cout << maxSubarraySum(num, 5) << endl;

    int array[] = {2, -3, 6, -5, 4, 2};
    cout << maxSubarraySum(array, 6) << endl;

    return 0;
}
