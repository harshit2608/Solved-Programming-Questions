class Solution
{
public:
    int dp[101][501];
    int matrixMultiplication(int N, int arr[])
    {
        memset(dp, -1, sizeof(dp));
        return helper(N, arr, 1, N - 1);
    }
    int helper(int n, int arr[], int i, int j)
    {
        if (i == j)
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int ans = INT_MAX;
        for (int k = i; k < j; ++k)
        {
            int temp = helper(n, arr, i, k) + helper(n, arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
            ans = min(temp, ans);
        }
        return dp[i][j] = ans;
    }
};