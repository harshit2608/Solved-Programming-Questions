class Solution
{
public:
    //Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();

        int ans = 0, cnt = 0, cntOranges = 0;
        queue<pair<pair<int, int>, int>> q;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                }
                if (grid[i][j] != 0)
                {
                    cntOranges++;
                }
            }
        }

        while (!q.empty())
        {
            int x = q.front().first.first;
            int y = q.front().first.second;
            int tm = q.front().second;

            q.pop();
            cnt++;
            ans = max(ans, tm);

            int dx[] = {-1, +1, 0, 0};
            int dy[] = {0, 0, -1, +1};

            for (int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];

                if (newx >= 0 && newx < n && newy >= 0 && newy < m && grid[newx][newy] == 1)
                {
                    grid[newx][newy] = 2;
                    q.push({{newx, newy}, tm + 1});
                }
            }
        }
        if (cnt == cntOranges)
        {
            return ans;
        }
        return -1;
    }
};

// USING TUPLES
