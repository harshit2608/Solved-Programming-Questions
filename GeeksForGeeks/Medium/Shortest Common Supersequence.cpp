//TODO: Memo

class Solution
{
public:
    //Function to find length of shortest common supersequence of two strings.
    int dp[1001][1001];
    int shortestCommonSupersequence(string X, string Y, int m, int n)
    {
        memset(dp, -1, sizeof(dp));
        int len = X.size() + Y.size();
        return len - lcs(X, Y, m, n);
    }

    int lcs(string &X, string &Y, int m, int n)
    {
        if (m == 0 || n == 0)
        {
            return 0;
        }
        if (dp[m][n] != -1)
        {
            return dp[m][n];
        }
        if (X[m - 1] == Y[n - 1])
        {
            return dp[m][n] = 1 + lcs(X, Y, m - 1, n - 1);
        }
        return dp[m][n] = max(lcs(X, Y, m - 1, n), lcs(X, Y, m, n - 1));
    }
};

//TODO: Tabulation
s