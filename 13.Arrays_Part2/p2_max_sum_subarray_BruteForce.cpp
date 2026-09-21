// Max Sum Subarray

// For Example:
// arr[5] = {1, 2, 3, 4, 5}

// Subarrays of arr :
// {1}, {1, 2}, {1, 2, 3}, {1, 2, 3, 4}, {1, 2, 3, 4, 5},
// {2}, {2, 3}, {2, 3, 4}, {2, 3, 4, 5},
// {3}, {3, 4}, {3, 4, 5},
// {4}, {4, 5},
// {5}

#include <iostream>

#include <climits>
using namespace std;

// Brute Force Approach : TC = O(n^3)
int maxSubarraySum1(int *arr, int n)
{
    int maxSum = INT_MIN; // initialization is imp else it may lead to garbage value

    // Pre defined macros(INT_MIN and INT_MAX) , already available in C++
    // INT_MIN => -infinity
    // INT_MAX => +infinity

    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int curSum = 0;
            for (int i = start; i <= end; i++)
            {
                curSum += arr[i];
            }
            // cout<<curSum<<" ";

            /*
            if (curSum > maxSum)
            {
                maxSum = curSum;
            }
            */

            maxSum = max(maxSum, curSum);
        }
        // cout<<endl;
    }

    return maxSum;
}

// Brute Force Approach Optimized : TC = O(n^2)
int maxSubarraySum2(int *arr, int n)
{
    int maxSum = INT32_MIN;

    for (int start = 0; start < n; start++)
    {
        int curSum = 0;
        for (int end = start; end < n; end++)
        {
            curSum += arr[end];
            maxSum = max(maxSum, curSum);
        }
    }

    return maxSum;
}

int main()
{
    int num[] = {1, 2, 3, 4, 5};
    cout << maxSubarraySum1(num, 5) << endl;
    cout << maxSubarraySum2(num, 5) << endl;

    int array[] = {2, -3, 6, -5, 4, 2};
    cout << maxSubarraySum1(array, 6) << endl;
    cout << maxSubarraySum2(array, 6) << endl;

    return 0;
}
