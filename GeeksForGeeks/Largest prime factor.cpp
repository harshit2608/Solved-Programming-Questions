class Solution
{
public:
    long long int largestPrimeFactor(int N)
    {
        int ans = 1;
        for (int i = 2; i * i <= N; ++i)
        {
            while (N % i == 0)
            {
                ans = max(ans, i);
                N = N / i;
            }
        }
        ans = max(ans, N);
        return ans;
    }
};