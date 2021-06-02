int solve(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    if (arr.size() == 0)
    {
        return -1;
    }
    while (low < high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= mid)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }
    if (arr[low] == low)
    {
        return low;
    }
    return -1;
}