class Solution
{
public:
    vector<int> productExceptSelf(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 1);
        int temp = 1;
        for (int i = 0; i < nums.size(); ++i)
        {
            ans[i] *= temp;
            temp = temp * nums[i];
        }

        temp = 1;
        for (int j = nums.size() - 1; j >= 0; j--)
        {
            ans[j] *= temp;
            temp = temp * nums[j];
        }
        return ans;
    }
};