vector<int>
solve(vector<int> &nums)
{
    vector<int> ans(nums.size());
    int left = 0, right = nums.size() - 1, i = nums.size() - 1;
    while (left <= right)
    {
        if (abs(nums[left]) > abs(nums[right]))
        {
            ans[i] = nums[left] * nums[left];
            left++;
        }
        else
        {
            ans[i] = nums[right] * nums[right];
            right--;
        }
        i--;
    }

    return ans;
}