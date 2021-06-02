bool solve(vector<int> &nums, int k)
{
    unordered_map<int, int> umap;
    for (int i = 0; i < nums.size(); i++)
    {
        int num = nums[i];
        int rem = k - nums[i];
        auto it = umap.find(rem);
        if (it != umap.end())
        {
            return true;
        }
        umap[num] = i;
    }
    return false;
}