class Solution
{
public:
    const long long MOD = 1000000007;
    long long fact(int a)
    {
        unsigned long long f = 1LL;
        for (int i = 1; i <= a; i++)
            f = (f * i) % MOD;
        return f;
    }

    long long optfact(int l, int r)
    {
        unsigned long long f = 1LL;
        for (int i = r; i <= l; i++)
            f = (f * i) % MOD;
        return f;
    }

    long long inv(long long x, long long n)
    {
        long long res = 1LL;
        while (n)
        {
            if (n & 1)
            {
                res = (res * x) % MOD;
            }
            n >>= 1;
            x = (x * x) % MOD;
        }
        return res;
    }

    int nCr(int n, int r)
    {
        if (r > n)
        {
            return 0;
        }

        if (r == n)
        {
            return 1;
        }
        long long num = optfact(n, n - r + 1);
        long long denom = fact(r);
        return (num * inv(denom, 1000000005)) % MOD;
    }
};

//TODO: DP Solution
const long long MOD = 1000000007;

int dp[1001][801];
int helper(int n, int r)
{
    if (!n || !r)
    { //!r so that we dont get negative r if we chose to select n objects
        return !r;
    }
    if (dp[n][r] != -1)
    {
        return dp[n][r];
    }
    return dp[n][r] = (helper(n - 1, r - 1) + helper(n - 1, r)) % 1000000007;
}
int nCr(int n, int r)
{
    memset(dp, -1, sizeof(dp));
    if (r == n)
    {
        return 1;
    }
    else if (r > n)
    {
        return 0;
    }
    return helper(n, r);
}

int nCr(int n, int r)
{
    int dp[r + 1] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = min(i, r); j >= 1; j--)
            dp[j] = (dp[j] + dp[j - 1]) % MOD;
    return dp[r];
}