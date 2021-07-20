class Solution
{
public:
    void segregateElements(int arr[], int n)
    {
        vector<int> v;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > 0)
            {
                v.push_back(arr[i]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] < 0)
            {
                v.push_back(arr[i]);
            }
        }
        for (int i = 0; i < n; ++i)
        {
            arr[i] = v[i];
        }
    }
};