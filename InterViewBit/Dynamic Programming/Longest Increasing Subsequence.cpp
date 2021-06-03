int Solution::lis(const vector<int> &arr)
{
    int n = arr.size();
    int LIS[n];
    fill_n(LIS, n, 1);

    /* Compute optimized LIS values in bottom up manner */
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
            if (arr[i] > arr[j] && LIS[i] < LIS[j] + 1)
                LIS[i] = LIS[j] + 1;
    }

    // Return maximum value in lis[]
    return *max_element(LIS, LIS + n);
}
