class Solution
{
public:
    void immediateSmaller(int *arr, int n)
    {
        int mn = arr[n - 1];
        arr[n - 1] = -1;

        for (int i = n - 2; i >= 0; i--)
        {
            int curr = arr[i];

            if (mn < arr[i])
            {
                arr[i] = mn;
            }
            else
            {
                arr[i] = -1;
            }

            mn = curr;
        }
    }
};