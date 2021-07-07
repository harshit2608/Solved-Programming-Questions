
class Solution
{
public:
    int canRepresentBST(int arr[], int N)
    {
        int mini = INT_MIN;
        int maxi1 = INT_MIN;
        int maxi2 = arr[0];
        for (int i = 1; i < N; ++i)
        {
            if (arr[i] < mini)
            {
                return 0;
            }
            if (arr[i] < maxi1)
            {
                return 0;
            }
            else if (arr[i] > arr[i - 1]) //right side
            {
                mini = arr[i - 1];
                if (arr[i] > maxi2)
                {
                    maxi1 = max(maxi2, maxi1);
                    maxi2 = arr[i];
                }
            }
        }
        return 1;
    }
};