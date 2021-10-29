class Solution
{
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        int count = 0;
        queue<pair<int, int>> q;
        int n = hospital.size();
        int m = hospital[0].size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (hospital[i][j] == 2)
                {
                    q.push({i, j});
                }
                else if (hospital[i][j] == 1)
                {
                    count++;
                }
            }
        }

        if (count == 0)
        {
            return 0;
        }

        int ans = -1, cnt = 0;
        while (!q.empty())
        {
            int sz = q.size();
            while (sz--)
            {
                pair<int, int> p = q.front();
                int i = p.first;
                int j = p.second;
                if (hospital[i][j] == 1)
                {
                    hospital[i][j] = 2;
                    cnt++;
                }
                q.pop();

                if (i - 1 >= 0 && hospital[i - 1][j] == 1)
                {
                    q.push({i - 1, j});
                }
                if (i + 1 < n && hospital[i + 1][j] == 1)
                {
                    q.push({i + 1, j});
                }
                if (j + 1 < m && hospital[i][j + 1] == 1)
                {
                    q.push({i, j + 1});
                }
                if (j - 1 >= 0 && hospital[i][j - 1] == 1)
                {
                    q.push({i, j - 1});
                }
            }
            ans++;
        }

        if (count != cnt)
        {
            return -1;
        }
        return ans;
    }
};