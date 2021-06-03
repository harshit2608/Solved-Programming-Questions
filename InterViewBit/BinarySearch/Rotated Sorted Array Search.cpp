int Solution::search(const vector<int> &arr, int B)
{
    int low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == B)
        {
            return mid;
        }
        else if (arr[low] < arr[mid])
        {
            if (B >= arr[low] && B < arr[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (B <= arr[high] && B > arr[mid])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
}
