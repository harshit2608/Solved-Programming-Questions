class Solution
{

public:
    int solve(int arr[], int n, vector<vector<int>> &dp, int &tot, int sum)
    {
        if (n == 0)
        {
            return abs(abs(tot - sum) - sum);
        }
        if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }
        return dp[n][sum] = min(solve(arr, n - 1, dp, tot, sum + arr[n - 1]), solve(arr, n - 1, dp, tot, sum));
    }

    int minDifference(int arr[], int n)
    {
        int tot = 0;
        for (int i = 0; i < n; ++i)
        {
            tot += arr[i];
        }
        vector<vector<int>> dp(n + 1, vector<int>(tot, -1));
        return solve(arr, n, dp, tot, 0);
    }
};