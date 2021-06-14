class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        int max = 0, i;
        vector<bool> ans(candies.size(), false);
        for (i = 0; i < candies.size(); i++)
        {
            if (candies[i] > max)
            {
                max = candies[i];
            }
        }

        for (i = 0; i < candies.size(); i++)
        {
            if ((candies[i] + extraCandies) >= max)
                ans[i] = true;
            else
                ans[i] = false;
        }
        return ans;
    }
};