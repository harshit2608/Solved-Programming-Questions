class Solution
{
public:
    // Function to find length of longest increasing subsequence.
    int dp[100001];
    int lis(int n, int *a, int &ans)
    {
        if (n == 1)
        {
            return dp[n] = 1;
        }

        if (dp[n] != -1)
        {
            return dp[n];
        }
        int res = 0, maxi = 1;
        for (int i = 1; i < n; ++i)
        {
            res = lis(i, a, ans);
            if (a[i - 1] < a[n - 1])
            {
                maxi = max(maxi, res + 1);
            }
        }
        ans = max(ans, maxi);
        return dp[n] = maxi;
    }

    int longestSubsequence(int n, int a[])
    {
        int ans = 1;
        memset(dp, -1, sizeof(dp));
        lis(n, a, ans);
        return ans;
    }
};