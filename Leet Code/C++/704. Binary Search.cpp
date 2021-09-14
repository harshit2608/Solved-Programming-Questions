class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int l = 0, h = nums.size();
        while (l < h)
        {
            int mid = (l + h) / 2;
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                h = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return -1;
    }
};