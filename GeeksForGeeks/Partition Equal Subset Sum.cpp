class Solution
{
public:
    bool subsetsum(int arr[], int N, int target)
    {
        bool dp[N + 1][target + 1];
        for (int i = 0; i < N + 1; ++i)
        {
            dp[i][0] = true;
        }
        for (int i = 1; i < target + 1; ++i)
        {
            dp[0][i] = false;
        }
        for (int i = 1; i <= N; ++i)
        {
            for (int j = 1; j <= target; ++j)
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
        return dp[N][target];
    }

    int equalPartition(int N, int arr[])
    {
        int sum = 0;
        bool ans;
        for (int i = 0; i < N; i++)
        {
            sum += arr[i];
        }
        if (sum % 2 != 0)
        {
            return 0;
        }
        else if (sum % 2 == 0)
        {
            ans = subsetsum(arr, N, sum / 2);
        }
        if (ans)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};