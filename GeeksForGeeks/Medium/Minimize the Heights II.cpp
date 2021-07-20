class Solution
{
public:
    int getMinDiff(int arr[], int n, int k)
    {
        sort(arr, arr + n);
        int maxel, minel;
        int res = arr[n - 1] - arr[0];
        for (int i = 1; i < n - 1; ++i)
        {
            if (arr[i] >= k)
            {
                maxel = max(arr[i - 1] + k, arr[n - 1] - k);
                minel = min(arr[0] + k, arr[i] - k);

                res = min(res, maxel - minel);
            }
        }
        return res;
    }
};