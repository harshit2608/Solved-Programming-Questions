class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        vector<pair<int, int>> vec;
        for (int i = 0; i < n; ++i)
        {
            vec.push_back({start[i], end[i]});
        }
        sort(vec.begin(), vec.end(),
             [](const pair<int, int> &a, const pair<int, int> &b)
             {
                 return a.second < b.second;
             });

        int ans = 1;
        int prev = vec[0].second;
        for (int i = 1; i < n; ++i)
        {
            if (vec[i].first > prev)
            {
                ans++;
                prev = vec[i].second;
            }
        }
        return ans;
    }
};