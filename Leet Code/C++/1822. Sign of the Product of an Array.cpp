class Solution
{
public:
    int arraySign(vector<int> &nums)
    {
        int count = 0, prod = 1;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] < 0)
            {
                count++;
            }
            if (nums[i] == 0)
            {
                prod = 0;
            }
        }
        if (prod == 0)
        {
            return 0;
        }
        if (count % 2 == 0)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
};