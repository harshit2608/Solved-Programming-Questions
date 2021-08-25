class Solution
{
public:
    const int MOD = 1000000007;
    long long int solve(int n, vector<int> &dp)
    {
        if (n <= 2)
        {
            return n;
        }
        if (dp[n] != -1)
        {
            return dp[n];
        }
        return dp[n] = (solve(n - 1, dp) % MOD) + ((n - 1) % MOD * (solve(n - 2, dp)) % MOD) % MOD;
    }

    int countFriendsPairings(int n)
    {
        vector<int> dp(n + 1, -1);
        return solve(n, dp) % MOD;
    }
};