class Solution
{
public:
    int getOddOccurrence(int arr[], int n)
    {
        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            res = res ^ arr[i];
        }
        return res;
    }
};