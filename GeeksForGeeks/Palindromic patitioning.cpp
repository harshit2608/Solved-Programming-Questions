class Solution
{
public:
    int dp[501][501];
    bool isPalindrome(string &str, int i, int j)
    {
        while (i < j)
        {
            if (str[i++] != str[j--])
                return false;
        }
        return true;
    }
    int palindromicPartition(string str)
    {
        memset(dp, -1, sizeof(dp));
        return solve(str, 0, str.size() - 1);
    }

    int solve(string &str, int i, int j)
    {
        if (i == j || isPalindrome(str, i, j))
        {
            return 0;
        }
        if (dp[i][j] != -1)
        {
            return dp[i][j];
        }
        int temp = INT_MAX;
        for (int k = i; k < j; ++k)
        {
            temp = min(temp, solve(str, i, k) + solve(str, k + 1, j) + 1);
        }
        return dp[i][j] = temp;
    }
};