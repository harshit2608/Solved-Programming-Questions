class Solution
{
public:
    int dp[1001][1001];
    int knapSacks(int N, int W, int val[], int wt[])
    {
        if (N == 0 || W == 0)
            return 0;
        if (dp[N][W] != -1)
            return dp[N][W];
        if (wt[N - 1] > W)
            return dp[N][W] = knapSacks(N - 1, W, val, wt);
        return dp[N][W] = max(val[N - 1] + knapSacks(N, W - wt[N - 1], val, wt), knapSacks(N - 1, W, val, wt));
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        memset(dp, -1, sizeof(dp));
        return knapSacks(N, W, val, wt);
    }
};