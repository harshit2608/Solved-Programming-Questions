//TODO: Memoization

class Solution
{

public:
    int dp[101][10001];
    int minCoins(int coins[], int M, int sum)
    {
        memset(dp, -1, sizeof(dp));
        int ans = solve(coins, M, sum);
        // Your code goes here
        if (ans == INT_MAX)
        {
            return -1;
        }
        return ans;
    }

    int solve(int coins[], int n, int sum)
    {
        if (sum == 0)
        {
            return 0;
        }
        if (n <= 0 || sum < 0)
        {
            return INT_MAX - 1;
        }
        if (dp[n][sum] != -1)
        {
            return dp[n][sum];
        }
        if (coins[n - 1] > sum)
        {
            return dp[n][sum] = solve(coins, n - 1, sum);
        }
        return dp[n][sum] = min(solve(coins, n - 1, sum), 1 + solve(coins, n, sum - coins[n - 1]));
    }
};

//TODO: Iterative

for (int i = 0; i <= n; i++)
{
    dp[i][0] = 0;
}
for (int i = 1; i <= sum; i++)
{
    dp[0][i] = INT_MAX - 1;
}

for (int i = 1; i <= n; i++)
{
    for (int j = 1; j <= sum; j++)
    {
        if (coins[i - 1] <= j)
        {
            dp[i][j] = min(dp[i - 1][j], 1 + dp[i][j - coins[i - 1]]);
        }
        else
            dp[i][j] = dp[i - 1][j];
    }
}
return dp[n][sum];
}