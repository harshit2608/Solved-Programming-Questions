class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int max = 0;
        for (auto const &customers : accounts)
        {
            int sum = std::accumulate(customers.begin(), customers.end(), 0);
            max = std::max(sum, max);
        }
        return max;
    }
};