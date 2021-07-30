class Solution
{
public:
    int minimumNumberOfDeletions(string str)
    {
        int n = str.length();
        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; ++i)
        {
            dp[i][0] = 0;
            dp[0][i] = 0;
        }
        string a = str;
        reverse(str.begin(), str.end());
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (a[i - 1] == str[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return n - dp[n][n];
    }
};