//TODO: Recursion
class Solution
{
public:
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        if (x == 0 || y == 0)
        {
            return 0;
        }
        if (s1[x - 1] == s2[y - 1])
        {
            return 1 + lcs(x - 1, y - 1, s1, s2);
        }
        return max(lcs(x - 1, y, s1, s2), lcs(x, y - 1, s1, s2));
    }
};

//TODO: Recursion + Memo
class Solution
{
public:
    //Function to find the length of longest common subsequence in two strings.
    int dp[1001][1001];
    int lcs(int x, int y, string s1, string s2)
    {
        memset(dp, -1, sizeof(dp));
        return solve(x, y, s1, s2);
    }

    int solve(int x, int y, string &s1, string &s2)
    {
        if (x == 0 || y == 0)
        {
            return 0;
        }

        if (dp[x][y] != -1)
        {
            return dp[x][y];
        }
        if (s1[x - 1] == s2[y - 1])
        {
            return dp[x][y] = 1 + solve(x - 1, y - 1, s1, s2);
        }
        return dp[x][y] = max(solve(x - 1, y, s1, s2), solve(x, y - 1, s1, s2));
    }
};

//TODO: Top - Down
class Solution
{
public:
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[x + 1][y + 1];
        memset(dp, 0, sizeof(dp));
        for (int i = 1; i <= x; ++i)
        {
            for (int j = 1; j <= y; ++j)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        return dp[x][y];
        // return solve(x,y,s1,s2);
    }
};