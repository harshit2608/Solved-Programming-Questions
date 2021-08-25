class Solution
{
public:
    int firstNonRepeating(int arr[], int n)
    {
        unordered_map<int, int> h;
        for (int i = 0; i < n; i++)
        {
            h[arr[i]]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (h[arr[i]] == 1)
            {
                return arr[i];
            }
        }

        return 0;
    }
};