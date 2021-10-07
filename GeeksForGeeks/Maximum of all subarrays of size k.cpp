class Solution
{
public:
    //Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        vector<int> ans;
        deque<int> dq;
        int i = 0, j = 0;
        while (j < n)
        {
            while (!dq.empty() && arr[j] > dq.back())
            {
                dq.pop_back();
            }
            dq.push_back(arr[j]);
            if (j - i + 1 < k)
            {
                j++;
            }
            else
            {
                ans.push_back(dq.front());
                if (dq.front() == arr[i])
                {
                    dq.pop_front();
                }
                i++;
                j++;
            }
        }
        return ans;
    }
};
