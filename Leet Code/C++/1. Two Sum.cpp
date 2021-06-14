class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> umap;

        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            int rem = target - nums[i];
            auto it = umap.find(rem);
            if (it != umap.end())
            {
                return {it->second, i};
            }
            umap[num] = i;
        }
        return {};
    }
};