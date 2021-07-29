//TODO: Memoization

class Solution
{
public:
    long long int sol[1001][1001];
    long long int count(int S[], int sz, int target)
    {
        vector<vector<long long int>> dp(sz, vector<long long int>(target + 1, -1));
        memset(sol, -1, sizeof(sol));
        return solve(S, sz, target);
    }

    long long int solve(int S[], int sz, int target)
    {
        if (target == 0)
        {
            return 1;
        }
        if (target < 0)
        {
            return 0;
        }
        if (sz <= 0 && target >= 1)
        {
            return 0;
        }
        if (sol[sz - 1][target] != -1)
        {
            return sol[sz - 1][target];
        }
        return sol[sz - 1][target] = solve(S, sz - 1, target) + solve(S, sz, target - S[sz - 1]);
    }
};

//TODO: Iterative

