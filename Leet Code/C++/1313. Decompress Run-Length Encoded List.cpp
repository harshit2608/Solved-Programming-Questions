class Solution
{
public:
    vector<int> decompressRLElist(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size() / 2; i++)
        {
            ans.insert(ans.end(), nums[2 * i], nums[2 * i + 1]);
        }
        return ans;
    }
};