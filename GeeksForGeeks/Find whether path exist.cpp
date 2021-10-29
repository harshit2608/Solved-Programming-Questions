class Solution
{
public:
    // Function to find whether a path exists from the source to destination.
    bool isSafe(int i, int j, int n, vector<vector<int>> &grid)
    {
        if (i < 0 || i >= n || j < 0 || j >= n || grid[i][j] == 0)
        {
            return false;
        }
        return true;
    }

    bool is_Possible(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        vector<vector<int>> visited(n, vector<int>(n, 0));
        pair<int, int> source;
        // pair<int,int> dest;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (grid[i][j] == 1)
                {
                    source.first = i;
                    source.second = j;
                    visited[i][j] = 1;
                    break;
                }
            }
        }

        queue<pair<int, int>> q;
        q.push(source);
        while (!q.empty())
        {
            pair<int, int> curr = q.front();
            q.pop();
            int x = curr.first, y = curr.second;
            if (grid[x][y] == 2)
            {
                return true;
            }
            for (int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                if (isSafe(newx, newy, n, grid) && !visited[newx][newy])
                {
                    q.push({newx, newy});
                    visited[newx][newy] = 1;
                }
            }
        }
        return false;
    }
};