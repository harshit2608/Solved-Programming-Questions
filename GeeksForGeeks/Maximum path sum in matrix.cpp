class Solution
{
public:
    int maximumPath(int N, vector<vector<int>> mat)
    {
        int dp[N + 1][N + 1];
        int ans = 0;
        for (int i = 0; i <= N; ++i)
        {
            for (int j = 0; j <= N; ++j)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = mat[i - 1][j - 1] + max({dp[i - 1][j - 1], dp[i - 1][j], dp[i - 1][j + 1]});
                }
                ans = max(dp[i][j], ans);
            }
        }
        return ans;
    }
};