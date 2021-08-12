class Solution
{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        // code here
        vector<vector<int>> dp(n + 2, vector<int>(m + 1, 0));
        int mx = 0;
        for (int j = 1; j <= m; j++)
        {
            for (int i = 1; i <= n; i++)
            {
                dp[i][j] = M[i - 1][j - 1] + max(dp[i - 1][j - 1], max(dp[i][j - 1], dp[i + 1][j - 1]));
                mx = max(mx, dp[i][j]);
            }
        }
        return mx;
    }
};