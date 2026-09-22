/*
Buy & Sell Stocks with Max profit

Conditions:
1) Buy first , then sell
2) cannot buy and sell at the same day
3) return max profit else 0

For Example:  price[] = {7, 1, 5, 3, 6, 4}

In given array, values are stock prices and index are days
*/

#include <iostream>
#include <climits>
using namespace std;

//1. Brute-force version
//TC = O(n^2)
//SC = O(1)    =>No extra array/data structure is created.

/*
Logic
prices = [7, 1, 5, 3, 6, 4]


maxProfit = 5
*/
int max_profit(int *prices, int n)
{
    int maxProfit = 0;
    int currProfit = 0;

    for (int buy = 0; buy < n - 1; buy++)
    {
        for (int sell = buy + 1; sell < n; sell++)
        {
            currProfit = prices[sell] - prices[buy];
            maxProfit = max(currProfit, maxProfit);
        }
    }

    return maxProfit;
}

// 2. bestBuy version
// TC = O(n)
// SC = O(1) => because array size is fixed, 1000 is a fixed constant.

/*
Logic
prices = [7, 1, 5, 3, 6, 4]  => selling prices at day i
bestBuy = [+infinity, 7, 1, 1, 1, 1]  => best buying price at day i

Profit = [-infinity, -6, 4, 2, 5, 3]

maxProfit = 5
*/
int maxProfit(int *prices, int n)
{
    // int bestBuy[n];  //variable-length array, which C++ standard does not support.
    int bestBuy[10000];  // range is generally given in Qs  : 1 ≤ n ≤ 10000
    bestBuy[0] = INT_MAX;

    for (int i = 1; i < n; i++)
    {
        bestBuy[i] = min(bestBuy[i - 1], prices[i - 1]);
    }

    int maxProfit = 0;
    int currProfit = 0;

    for (int i = 0; i < n; i++)
    {
        currProfit = prices[i] - bestBuy[i];
        maxProfit = max(maxProfit, currProfit);
    }

    return maxProfit;
}

int main()
{
    int price[] = {7, 1, 5, 3, 6, 4};
    cout << max_profit(price, 6) << endl;  //5
    cout << maxProfit(price, 6) << endl;  //5

    int stocks[] = {7, 6, 5, 4, 3, 2, 1};
    cout << max_profit(stocks, 6) << endl;  //0
    cout << maxProfit(stocks, 6) << endl; //0

    return 0;
}