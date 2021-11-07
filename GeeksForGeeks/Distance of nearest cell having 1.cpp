class Solution
{
public:
    // Function to find distance of nearest 1 in the grid for each cell.
    bool isSafe(int i, int j, int n, int m)
    {
        if (i < 0 || i >= n || j < 0 || j >= m)
        {
            return false;
        }
        return true;
    }
    vector<vector<int>> nearest(vector<vector<int>> grid)
    {
        int n = grid.size(), m = grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m, 0));
        queue<pair<int, int>> q;
        int dx[] = {-1, 0, +1, 0};
        int dy[] = {0, +1, 0, -1};
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                }
                else
                {
                    ans[i][j] = INT_MAX;
                }
            }
        }

        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            int x = curr.first;
            int y = curr.second;
            q.pop();
            for (int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                if (isSafe(newx, newy, n, m))
                {
                    if (ans[newx][newy] > 1 + ans[x][y])
                    {
                        ans[newx][newy] = ans[x][y] + 1;
                        q.push({newx, newy});
                    }
                }
            }
        }
        return ans;
    }
};