class Solution
{
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int ans = 0;
        bool arr[58] = {false};
        for (auto ch : jewels)
        {
            arr[ch - 65] = true;
        }
        for (auto ch : stones)
        {
            if (arr[ch - 65])
            {
                ans++;
            }
        }
        return ans;
    }
};