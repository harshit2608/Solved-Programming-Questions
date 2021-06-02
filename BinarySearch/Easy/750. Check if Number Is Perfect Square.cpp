bool solve(int n)
{
    long long low = 0, high = n;
    {
        while (low <= high)
        {
            long long mid = (low + high) / 2;
            if (mid * mid == n)
            {
                return true;
            }
            else if (mid * mid < n)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return false;
}