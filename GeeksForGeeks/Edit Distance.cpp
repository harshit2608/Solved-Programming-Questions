class Solution
{
public:
    int dp[101][101];
    int editDistance(string s, string t)
    {
        memset(dp, -1, sizeof(dp));
        return lcs(s, t, s.size(), t.size());
    }

    int lcs(string &s, string &t, int i, int j)
    {
        if (i == 0)
        {
            return j;
        }
        if (j == 0)
        {
            return i;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        if (s[i - 1] == t[j - 1])
        {
            return dp[i][j] = lcs(s, t, i - 1, j - 1);
        }
        return dp[i][j] = 1 + min(lcs(s, t, i - 1, j - 1), min(lcs(s, t, i - 1, j), lcs(s, t, i, j - 1)));
    }
};