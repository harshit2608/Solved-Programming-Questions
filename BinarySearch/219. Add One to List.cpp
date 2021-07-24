vector<int> solve(vector<int> &nums)
{
    for (int i = nums.size() - 1; i >= 0; --i)
    {
        ++nums[i];
        if (nums[i] >= 10)
        {
            nums[i] %= 10;
            if (i == 0)
            {
                nums.insert(nums.begin(), 1);
            }
        }
        else
        {
            break;
        }
    }
    return nums;
}
