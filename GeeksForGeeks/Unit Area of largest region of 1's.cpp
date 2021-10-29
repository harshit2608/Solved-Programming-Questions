class Solution
{
public:
    // Function to find unit area of the largest region of 1s.
    int ans = 0, res = 0;
    void dfs(vector<vector<int>> &grid, int &res, int &ans, int n, int m, int i, int j)
    {
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] != 1)
        {
            return;
        }
        grid[i][j] = 2;
        res++;
        dfs(grid, res, ans, n, m, i + 1, j);
        dfs(grid, res, ans, n, m, i - 1, j);
        dfs(grid, res, ans, n, m, i, j + 1);
        dfs(grid, res, ans, n, m, i, j - 1);
        dfs(grid, res, ans, n, m, i + 1, j + 1);
        dfs(grid, res, ans, n, m, i - 1, j - 1);
        dfs(grid, res, ans, n, m, i + 1, j - 1);
        dfs(grid, res, ans, n, m, i - 1, j + 1);
        ans = max(ans, res);
    }

    int findMaxArea(vector<vector<int>> &grid)
    {
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                res = 0;
                dfs(grid, res, ans, n, m, i, j);
            }
        }

        return ans;
    }
};