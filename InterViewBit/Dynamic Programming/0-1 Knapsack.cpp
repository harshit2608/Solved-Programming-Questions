int knapsack(vector<int> &A, vector<int> &B, int C, int n, vector<vector<int>> &dp)
{
    if (C == 0 || n == 0)
    {
        return 0;
    }
    if (dp[C][n] != -1)
    {
        return dp[C][n];
    }
    if (B[n - 1] <= C)
    {
        dp[C][n] = max(A[n - 1] + knapsack(A, B, C - B[n - 1], n - 1, dp), knapsack(A, B, C, n - 1, dp));
    }
    else if (B[n - 1] > C)
    {
        dp[C][n] = knapsack(A, B, C, n - 1, dp);
    }
    return dp[C][n];
}
int Solution::solve(vector<int> &A, vector<int> &B, int C)
{
    int n = A.size();
    vector<vector<int>> dp(C + 1, vector<int>(n + 1, -1));
    return knapsack(A, B, C, n, dp);
}
