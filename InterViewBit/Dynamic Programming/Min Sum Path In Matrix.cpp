int sol(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &A, int n, int m)
{
    if (i == n - 1 && j == m - 1)
    {
        return A[i][j];
    }

    if (i == n || j == m)
    {
        return INT_MAX;
    }
    if (dp[i][j] != -1)
    {
        return dp[i][j];
    }
    return dp[i][j] = A[i][j] + min(sol(i, j + 1, dp, A, n, m), sol(i + 1, j, dp, A, n, m));
}

int Solution::minPathSum(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return sol(0, 0, dp, A, n, m);
}
