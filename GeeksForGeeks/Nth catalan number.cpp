class Solution
{
public:
    //Function to find the nth catalan number
    cpp_int findCatalan(int n)
    {
        cpp_int ans = 1;
        for (int i = n; i >= 1; i--)
        {
            ans *= n + i;
            ans /= n - i + 1;
        }
        ans /= n + 1;
        return ans;
    }
};