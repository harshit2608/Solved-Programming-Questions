class Solution
{
public:
    static bool myCmp(vector<int> &a, vector<int> &b)
    {
        return a[0] < b[0];
    }
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        int size = intervals.size();
        if (size <= 1)
        {
            return intervals;
        }
        sort(intervals.begin(), intervals.end(), myCmp);
        vector<vector<int>> res;
        for (int i = 0; i < size - 1; ++i)
        {
            if (intervals[i + 1][0] > intervals[i][1])
            {
                res.push_back(intervals[i]);
            }
            else
            {
                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = max(intervals[i + 1][1], intervals[i][1]);
            }
        }
        res.push_back(intervals[size - 1]);
        return res;
    }
};