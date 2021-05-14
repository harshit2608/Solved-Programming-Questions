class Solution
{
public:
    bool isPalindrome(int x)
    {
        int ans = 0;
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        while (x > ans)
        {
            ans = ans * 10 + x % 10;
            x /= 10;
        }
        return ((ans == x) || (x == ans / 10));
    }
};