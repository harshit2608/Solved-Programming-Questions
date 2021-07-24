int solve(int n)
{
    int low = 0, high = n, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (mid == n / mid)
        {
            ans = mid;
            break;
        }
        else if (mid > n / mid)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid;
            low = mid + 1;
        }
    }
    return ans;
}