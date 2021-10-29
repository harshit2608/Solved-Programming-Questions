class Solution
{
public:
    // Function to find the minimum number of swaps required to sort the array.
    int minSwaps(vector<int> &nums)
    {
        unordered_map<int, int> mp;
        vector<int> vect(nums.begin(), nums.end());
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++)
        {
            mp[nums[i]] = i;
        }

        int ans = 0, it = 0;
        for (int i = 0; i < nums.size();)
        {
            if (nums[i] != vect[i])
            {
                ans++;
                swap(vect[i], vect[mp[vect[i]]]);
            }
            else
            {
                i++;
            }
        }
        return ans;
    }
};