class Solution
{
public:
    int minJumps(int arr[], int n)
    {
        int ans = 0, end = 0, curr = 0;
        for (int i = 0; i < n; ++i)
        {
            curr = max(curr, arr[i] + i);
            if (i == end)
            {
                ans++;
                end = curr;
            }
            if (end >= n - 1)
            {
                break;
            }
        }
        if (end < n - 1)
        {
            return -1;
        }
        else
        {
            return ans;
        }
    }
};