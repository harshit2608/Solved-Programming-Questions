bool solve(vector<int> &nums)
{
    bool seen = false;
    int i = 0;
    for (i; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            while (i < nums.size() && nums[i] == 1)
            {
                i++;
                seen = true;
            }
        }
        if (seen)
        {
            break;
        }
    }
    for (i; i < nums.size(); i++)
    {
        if (nums[i] == 1 && seen == true)
        {
            return false;
        }
    }
    return true;
}