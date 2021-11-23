class Solution
{
public:
    string longestPalindrome(string S)
    {
        string T = string(S.rbegin(), S.rend());
        int maxi = 0;
        string res;
        int n = S.length();
        int dp[n + 1][n + 1];
        for (int i = 0; i <= n; ++i)
        {
            for (int j = 0; j <= n; ++j)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
                else if (S[i - 1] == T[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                    if (dp[i][j] > maxi)
                    {
                        string temp = S.substr(i - dp[i][j], dp[i][j]);
                        string rev = string(temp.rbegin(), temp.rend());
                        if (temp == rev)
                        {
                            res = temp;
                            maxi = dp[i][j];
                        }
                    }
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        return res;
    }
};