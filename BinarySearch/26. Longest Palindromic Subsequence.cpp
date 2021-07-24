int dp[1001][1001];
int lps(string s, int i, int j)
{
    if (dp[i][j] != -1)
    {
        return dp[i][j]; //
    }
    if (i > j)
    {
        return 0; //noelement
    }
    if (i == j)
    {
        return 1; // palin
    }
    if (s[i] == s[j])
    {
        dp[i][j] = lps(s, i + 1, j - 1) + 2; //palin 2 chars
        return dp[i][j];
    }
    dp[i][j] = max(lps(s, i, j - 1), lps(s, i + 1, j));
    return dp[i][j];
}
int solve(string s)
{
    //4cases
    memset(dp, -1, sizeof(dp));
    return lps(s, 0, s.length() - 1);
}