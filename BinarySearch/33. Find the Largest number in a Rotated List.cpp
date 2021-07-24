int solve(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    while (high - low > 1)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[low])
        {
            low = mid;
        }
        else if (arr[mid] < arr[low])
        {
            high = mid;
        }
    }
    return max(arr[low], arr[high]);
}