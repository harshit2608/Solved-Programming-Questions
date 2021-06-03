int sol(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &A)
{
    if (i == A.size() || j == A.size())
    {
        return 0;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    return dp[i][j] = A[i][j] + max(sol(i + 1, j, dp, A), sol(i + 1, j + 1, dp, A));
}

int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
    return sol(0, 0, dp, A);
}