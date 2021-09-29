class Solution
{
public:
    int cz(int num)
    {
        int ans = 0;
        while (num != 0)
        {
            num = num / 5;
            ans += num;
        }
        return ans;
    }
    int findNum(int n)
    {
        int l = 0, r = n * 5, ans = INT_MAX;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (cz(mid) >= n)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return ans;
    }
};