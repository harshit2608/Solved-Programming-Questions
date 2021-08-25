int transitionPoint(int arr[], int n)
{
    int ans = -1;
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] > 1)
        {
            high = mid - 1;
        }
        else if (arr[mid] < 1)
        {
            low = mid + 1;
        }

        else
        {
            if (mid == 0 || arr[mid] != arr[mid - 1])
            {
                return mid;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return -1;
    // code here
}