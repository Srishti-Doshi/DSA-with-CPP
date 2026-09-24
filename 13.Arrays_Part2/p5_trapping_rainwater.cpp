//Trapping Rainwater
// input : an array with bar heights as values
//Find trapped water between bars

#include <iostream>
#include <climits>
using namespace std;

void trapped_rainwater(int *heights, int n)
{
    int leftMax[100000];
    int rightMax[100000];

    // leftMax[0] = INT_MIN;   //in C++ INT_MIN - 4 = +value  => hence initialize it such that min(leftmax, rightmax)-heights = 0
    leftMax[0] = heights[0];
    // rightMax[n - 1] = INT_MIN;
    rightMax[n - 1] = heights[n - 1];

    for (int i = 1; i < n; i++)
    {
        leftMax[i] = max(heights[i - 1], leftMax[i - 1]);
    }
    cout << endl;

    for (int i = n - 2; i >= 0; i--)
    {
        rightMax[i] = max(heights[i + 1], rightMax[i + 1]);
    }

    int trappedWater = 0;
    for (int i = 0; i < n; i++)
    {
        int currWater = min(leftMax[i], rightMax[i]) - heights[i];
        if (currWater > 0)
        {
            trappedWater += currWater;
        }
    }
    cout << "Trapped Rainwater = " << trappedWater << endl;
}

int main()
{
    int heights[] = {4, 2, 0, 6, 3, 2, 5};
    trapped_rainwater(heights, 7);

    return 0;
}