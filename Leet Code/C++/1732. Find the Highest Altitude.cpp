class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        vector<int> ans(gain.size() + 1, 0);
        int max = 0;
        for (int i = 1; i < gain.size() + 1; i++)
        {
            ans[i] = ans[i - 1] + gain[i - 1];
            if (ans[i] > max)
            {
                max = ans[i];
            }
        }
        return max;
    }
};