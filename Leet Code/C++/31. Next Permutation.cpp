class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
        {
            return;
        }

        int i = 1;
        int peak = -1;
        while (i < n)
        {
            if (nums[i] > nums[i - 1])
            {
                peak = i;
            }
            i++;
        }

        if (peak == -1)
        {
            for (i = 0; i < n / 2; ++i)
                swap(nums[i], nums[n - i - 1]);
            return;
        }

        int index = peak;
        for (i = peak; i < n; ++i)
        {
            if (nums[i] > nums[peak - 1] and nums[i] < nums[index])
            {
                index = i;
            }
        }
        swap(nums[peak - 1], nums[index]);
        sort(nums.begin() + peak, nums.end());
    }
};