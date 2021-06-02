bool solve(vector<int> &nums)
{
    bool asc = true, desc = true;
    for (int i = 0; i < nums.size() - 1; i++)
    {
        if (nums[i] >= nums[i + 1])
        {
            asc = false;
        }
        if (nums[i] <= nums[i + 1])
        {
            desc = false;
        }
    }
    return asc || desc;
}