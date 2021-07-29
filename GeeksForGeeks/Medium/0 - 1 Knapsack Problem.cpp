
//TODO: Recursion

class Solution
{
public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
        {
            return 0;
        }
        if (wt[n - 1] <= W)
        {
            return max(val[n - 1] + knapSack(W - wt[n - 1], wt, val, n - 1), knapSack(W, wt, val, n - 1));
        }
        return knapSack(W, wt, val, n - 1);
    }
};

//TODO: Memoization

class Solution
{
public:
    //Function to return max value that can be put in knapsack of capacity W.
    int arr[1001][1001];
    int helper(int W, int wt[], int val[], int n)
    {
        if (n == 0 || W == 0)
        {
            return 0;
        }
        if (arr[n][W] != -1)
        {
            return arr[n][W];
        }
        if (wt[n - 1] <= W)
        {
            return arr[n][W] = max(val[n - 1] + helper(W - wt[n - 1], wt, val, n - 1), helper(W, wt, val, n - 1));
        }
        return arr[n][W] = helper(W, wt, val, n - 1);
    }
    int knapSack(int W, int wt[], int val[], int n)
    {
        memset(arr, -1, sizeof(arr));
        return helper(W, wt, val, n);
    }
};

//TODO: Top-Down
class Solution
{
public:
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n)
    {
        int dp[n + 1][W + 1];
        for (int i = 0; i < n + 1; ++i)
        {
            dp[i][0] = 0;
        }
        for (int j = 0; j < W + 1; ++j)
        {
            dp[0][j] = 0;
        }

        for (int i = 1; i < n + 1; ++i)
        {
            for (int j = 1; j < W + 1; ++j)
            {
                if (wt[i - 1] <= j)
                {
                    dp[i][j] = max(val[i - 1] + dp[i - 1][j - wt[i - 1]], dp[i - 1][j]);
                }
                else
                {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][W];
    }
};