class Solution
{
public:
    int findTargetSumWays(vector<int> &nums, int target)
    {
        vector<vector<int>> dp(nums.size(), vector<int>(2001, -1));
        return sol(nums, target, 0, 0, dp);
    }

    int sol(vector<int> &nums, int target, int n, int s, vector<vector<int>> &dp)
    {
        if (n == nums.size())
        {
            return s == target ? 1 : 0;
        }
        if (dp[n][s + 1001] != -1)
        {
            return dp[n][s + 1001];
        }
        return dp[n][s + 1001] = sol(nums, target, n + 1, s + nums[n], dp) + sol(nums, target, n + 1, s - nums[n], dp);
    }
};