class Solution
{
public:
    int tribonacci(int n)
    {
        if (n <= 1)
        {
            return n;
        }
        if (n == 2)
        {
            return 1;
        }
        int ans = 0;
        int zero = 0, one = 1, two = 1;
        for (int i = 3; i <= n; i++)
        {
            ans = zero + one + two;
            zero = one;
            one = two;
            two = ans;
        }
        return ans;
    }
};