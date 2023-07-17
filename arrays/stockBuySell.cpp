#include <bits/stdc++.h>
using namespace std;

void getMaxProfit(vector<int> &prices)
{
    int sz = prices.size();
    int point = 0;
    int maxProfit = INT_MIN;
    int profit;
    for (int i = 1; i < sz; ++i)
    {
        if (prices[i] < prices[point])
            point = i;
        else
            maxProfit = max(prices[i] - prices[point], maxProfit);
    }
    if (maxProfit < 0)
        maxProfit = 0;

    cout << maxProfit;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i)
        cin >> nums[i];
    getMaxProfit(nums);

    return 0;
}