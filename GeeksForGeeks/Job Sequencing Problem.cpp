class Solution
{
public:
    // Function to find the maximum profit and the number of jobs done.
    static bool comp(Job a, Job b)
    {
        return a.profit > b.profit;
    }

    vector<int> JobScheduling(Job arr[], int n)
    {
        sort(arr, arr + n, comp);
        int jcount = 0, jprofit = 0;
        int md = arr[0].dead;
        for (int i = 1; i < n; ++i)
        {
            md = max(md, arr[i].dead);
        }
        int slot[md + 1];
        memset(slot, -1, sizeof(slot));
        for (int i = 0; i < n; ++i)
        {
            for (int j = arr[i].dead; j > 0; --j)
            {
                if (slot[j] == -1)
                {
                    slot[j] = i;
                    jcount++;
                    jprofit += arr[i].profit;
                    break;
                }
            }
        }
        return {jcount, jprofit};
    }
};
