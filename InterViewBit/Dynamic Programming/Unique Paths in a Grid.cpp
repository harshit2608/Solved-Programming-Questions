int sol(int i, int j, vector<vector<int>> &dp, vector<vector<int>> &A, int n, int m)
{

    if (i >= n || j >= m || A[i][j] == 1)
        return 0;

    if (i == n - 1 && j == m - 1)
        return 1;

    if (dp[i][j] != -1)
        return dp[i][j];

    dp[i][j] = sol(i, j + 1, dp, A, n, m) + sol(i + 1, j, dp, A, n, m);

    return dp[i][j];
}

int Solution::uniquePathsWithObstacles(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1));
    return sol(0, 0, dp, A, n, m);
}