//TODO: Recursion
class Solution
{
public:
    bool isSubsetSum(int N, int arr[], int sum)
    {
        if (sum == 0)
        {
            return true;
        }
        if (N == 0)
        {
            return false;
        }
        if (arr[N - 1] > sum)
        {
            return isSubsetSum(N - 1, arr, sum);
        }
        return isSubsetSum(N - 1, arr, sum - arr[N - 1]) || isSubsetSum(N - 1, arr, sum);
    }
};

//TODO: Memoization

class Solution
{
public:
    int dp[102][102];
    int helper(int n, int arr[], int sum)
    {
        if (sum == 0)
        {
            return 1;
        }
        if (n <= 0)
        {
            return 0;
        }
        if (dp[n - 1][sum] != -1)
        {
            return dp[n - 1][sum];
        }
        if (arr[n - 1] > sum)
        {
            return dp[n - 1][sum] = helper(n - 1, arr, sum);
        }
        return dp[n - 1][sum] = helper(n - 1, arr, sum) || helper(n - 1, arr, sum - arr[n - 1]);
    }

    bool isSubsetSum(int N, int arr[], int sum)
    {
        memset(dp, -1, sizeof(dp));
        if (helper(N, arr, sum))
        {
            return true;
        }
        return false;
    }
};

//TODO: DP
class Solution
{
public:
    bool isSubsetSum(int N, int arr[], int sum)
    {
        bool dp[N + 1][sum + 1];
        for (int i = 0; i < N + 1; ++i)
        {
            dp[i][0] = true;
        }
        for (int i = 1; i < sum + 1; ++i)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= sum; ++j)
            {
                if (arr[i - 1] > j)
                {
                    dp[i][j] = dp[i - 1][j];
                }
                else if (arr[i - 1] <= j)
                {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
            }
        }

        return dp[N][sum];
    }
};