class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = prices[0], res = 0;
        for (int i = 0; i < prices.size(); ++i)
        {
            profit = min(profit, prices[i]);
            res = max(res, (prices[i] - profit));
        }
        return res;
    }
};