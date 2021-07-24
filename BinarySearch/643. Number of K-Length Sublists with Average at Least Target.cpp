int solve(vector<int> &nums, int k, int target)
{
    if (nums.size() < k)
    {
        return 0;
    }
    int ans = 0, curr_sum = 0;
    for (int i = 0; i < k; ++i)
    {
        curr_sum += nums[i];
    }

    if (curr_sum / k >= target)
    {
        ans++;
    }

    for (int i = k; i < nums.size(); ++i)
    {
        curr_sum += (nums[i] - nums[i - k]);
        if (curr_sum / k >= target)
        {
            ans++;
        }
    }

    return ans;
}