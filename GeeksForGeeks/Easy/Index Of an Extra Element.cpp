class Solution
{
public:
    int findExtra(int a[], int b[], int n)
    {
        int index = -1;
        int high = n - 1, low = 0;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (a[mid] == b[mid])
            {
                low = mid + 1;
            }
            else
            {
                index = mid;
                high = mid - 1;
            }
        }
        return index;
    }
};