/*
(MEDIUM)
Maximum Product Subarray

Given an integer array `nums`, find a subarray that has the largest product, and return the product.

The test cases are generated so that the answer will fit in a 32-bit integer.

Note: This question might feel difficult as a beginner because it uses a DP approach.

Examples:

Input: nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

A subarray is always contiguous — all elements must be next to each other.

*/

#include<iostream>
using namespace std;

//Brute Force Approach => TC : O(n^2)
int maxProductSubarr(int *arr, int n)
{
    int maxProduct = arr[0];
    for(int start = 0; start < n; start++)
    {
        int currProduct = 1;
        for(int end = start; end < n; end++)
        {
            currProduct *= arr[end];
            maxProduct = max(currProduct, maxProduct);
        }
    }
    return maxProduct;
}


//Optimized approach
//TC : O(n)
int maxSubarrayProduct(int *arr, int n)
{
    int maxP = arr[0];
    int minP = arr[0];
    int ans = arr[0];

    for(int i = 1; i < n; i++)
    {
        int tempMax = maxP;
        int tempMin = minP;

        maxP = max(arr[i], max(tempMax*arr[i], tempMin*arr[i]));
        minP = min(arr[i], min(tempMax*arr[i], tempMin*arr[i]));

        ans = max(ans, maxP);
    }
    return ans;
}

int main()
{
    int nums[] = {2, 3, -2, 4};
    int nums2[] = {-2, 0, -1};
    int nums3[] = {-2, 3, -4};

    cout<<maxProductSubarr(nums, 4)<<"\n";
    cout<<maxProductSubarr(nums2, 3)<<"\n";
    cout<<maxProductSubarr(nums3, 3)<<"\n";

    cout<<maxSubarrayProduct(nums, 4)<<"\n";
    cout<<maxSubarrayProduct(nums2, 3)<<"\n";
    cout<<maxSubarrayProduct(nums3, 3)<<"\n";

    return 0;
}