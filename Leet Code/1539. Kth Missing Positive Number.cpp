class Solution
{
public:
    int findKthPositive(vector<int> &arr, int k)
    {
        std::vector<int> data(k + arr.back() + 1);
        fill(data.begin(), data.end(), 0);
        for (int i = 0; i < arr.size(); i++)
        {
            data[arr[i]] = 1;
        }

        int count = 0, i = 0;
        while (count != k)
        {
            i++;
            if (data[i] == 0)
            {
                count++;
            }
        }
        return i;
    }
};