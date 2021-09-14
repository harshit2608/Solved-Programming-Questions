class Solution
{
public:
    // Function to find maximum product subarray
    long long maxProduct(vector<int> arr, int n)
    {
        long long res = arr[0], maxi = arr[0], mini = arr[0];
        for (int i = 1; i < n; ++i)
        {
            if (arr[i] < 0)
            {
                swap(maxi, mini);
            }
            mini = min(arr[i] * 1LL, arr[i] * mini);
            maxi = max(arr[i] * 1LL, arr[i] * maxi);
            res = max(res, maxi);
        }
        return res;
    }
};
