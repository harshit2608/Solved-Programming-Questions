vector<int> solve(vector<int> &nums)
{
    int n = nums.size();
    for (int i = 0; i < n; ++i)
    {
        if (i < n - 2 and nums[i] == nums[i + 1] and nums[i] == nums[i + 2])
        {
            continue;
        }
        else
        {
            ans.push_back(nums[i]);
        }
    }
    return ans;
}