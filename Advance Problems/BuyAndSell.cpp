#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int maxProfit(vector<int> &prices)
{

    int minPrice = prices[0];
    int maxProfit = 0;

    for (int i = 1; i < prices.size(); i++)
    {

        // Current price par sell karke profit
        int profit = prices[i] - minPrice;

        // Maximum profit update
        maxProfit = max(maxProfit, profit);

        // Minimum buying price update
        minPrice = min(minPrice, prices[i]);
    }

    return maxProfit;
}
int main()
{

    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << maxProfit(prices);

    return 0;
}