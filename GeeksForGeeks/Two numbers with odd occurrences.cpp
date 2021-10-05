class Solution
{
public:
    vector<int> twoOddNum(int Arr[], int N)
    {
        vector<int> ans;
        int res = Arr[0], a1 = 0, a2 = 0;
        for (int i = 1; i < N; ++i)
        {
            res ^= Arr[i];
        }
        int num = res & ~(res - 1);
        for (int i = 0; i < N; ++i)
        {
            if ((num & Arr[i]) != 0)
            {
                a1 = a1 ^ Arr[i];
            }
            else
            {
                a2 = a2 ^ Arr[i];
            }
        }
        ans.push_back(max(a1, a2));
        ans.push_back(min(a1, a2));
        return ans;
    }
};