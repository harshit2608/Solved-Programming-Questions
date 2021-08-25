#define mod 1003
class Solution
{
public:
    int dp[201][201][2];
    int solve(int i, int j, string str, int val)
    {
        if (i > j)
        {
            return dp[i][j][val] = 0;
        }
        if (i == j)
        {
            if (val == 1)
            {
                return dp[i][j][val] = (str[i] == 'T') ? 1 : 0;
            }
            else
            {
                return dp[i][j][val] = (str[i] == 'F') ? 1 : 0;
            }
        }
        if (dp[i][j][val] != -1)
        {
            return dp[i][j][val];
        }
        int ans = 0;
        for (int k = i + 1; k <= j - 1; k += 2)
        {
            int lt = dp[i][k - 1][1],
                rt = dp[k + 1][j][1],
                lf = dp[i][k - 1][0],
                rf = dp[k + 1][j][0];

            if (lt == -1)
            {
                lt = solve(i, k - 1, str, 1);
                dp[i][k - 1][1] = lt;
            }
            if (rt == -1)
            {
                rt = solve(k + 1, j, str, 1);
                dp[k + 1][j][1] = rt;
            }
            if (lf == -1)
            {
                lf = solve(i, k - 1, str, 0);
                dp[i][k - 1][0] = lf;
            }
            if (rf == -1)
            {
                rf = solve(k + 1, j, str, 0);
                dp[k + 1][j][0] = rf;
            }
            if (str[k] == '|')
            {
                if (val == 1)
                {
                    ans += lt * rt + lt * rf + rt * lf;
                }
                else
                {
                    ans += lf * rf;
                }
            }
            else if (str[k] == '&')
            {
                if (val == 1)
                {
                    ans += lt * rt;
                }
                else
                {
                    ans += lt * rf + rt * lf + lf * rf;
                }
            }
            else if (str[k] == '^')
            {
                if (val == 1)
                {
                    ans += lt * rf + rt * lf;
                }
                else
                {
                    ans += lt * rt + lf * rf;
                }
            }
        }
        return dp[i][j][val] = ans % mod;
    }
    int countWays(int N, string S)
    {
        dp[N][N][2];
        memset(dp, -1, sizeof(dp));
        return solve(0, N - 1, S, 1) % mod;
    }
};

//TODO: USING VECTOR OF PAIRS

// class Solution{
// public:
// const int mod = 1003;
//     int countWays(int N, string S)
//     {
//         vector<vector<pair<int,int>>> dp(S.size(),vector<pair<int,int>> (S.size(),{-1,-1}));
//         return solve(S,0,N-1,dp).first;
//     }

//     pair<int,int> solve(string &str,int i ,int j, vector<vector<pair<int,int>>> &dp)
//     {
//       if(i==j)
//       {
//           if(str[i]=='T')
//           {
//               return {1,0};
//           }
//           else
//           {
//               return {0,1};
//           }
//       }
//       if(dp[i][j].first!=-1)
//       {
//           return dp[i][j];
//       }
//       pair<int,int> temp = {0,0};
//       for(int k = i+1;k<j;k+=2)
//       {
//           pair<int,int> a,b;
//           if(dp[i][k-1].first!=-1)
//           {
//               a = dp[i][k-1];
//           }
//           else
//           {
//               a = solve(str,i,k-1,dp);
//           }
//           b = {0,0};
//           if(dp[k+1][j].first!=-1)
//           {
//               b = dp[k+1][j];
//           }
//           else
//           {
//               b = solve(str,k+1,j,dp);
//           }

//           int tt = (a.first*b.first)%mod;
//           int ft = (a.second*b.first)%mod;
//           int ff = (a.second*b.second)%mod;
//           int tf = (a.first*b.second)%mod;

//           if(str[k] == '|')
//           {
//               temp.first = (tt+tf+ft+temp.first)%mod;
//               temp.second = (ff+temp.second)%mod;
//           }
//           else if(str[k] == '^')
//           {
//               temp.first = (tf+ft+temp.first)%mod;
//               temp.second = (tt+ff+temp.second)%mod;
//           }
//           else
//           {
//               temp.first = (tt+temp.first)%mod;
//               temp.second = (tf+ft+ff+temp.second)%mod;
//           }
//       }
//       return dp[i][j] = temp;
//     }
// };