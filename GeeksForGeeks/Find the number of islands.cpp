class Solution
{
public:
    //Function to find the number of islands.

    void dfs(vector<vector<char>> &grid, int n, int m, int i, int j)
    {
        if (i >= 0 && j >= 0 && i < n && j < m && grid[i][j] == '1')
        {
            grid[i][j] = '5';
            dfs(grid, n, m, i - 1, j);     //top
            dfs(grid, n, m, i + 1, j);     //down
            dfs(grid, n, m, i, j - 1);     //left side
            dfs(grid, n, m, i, j + 1);     //right side
            dfs(grid, n, m, i - 1, j - 1); //north west
            dfs(grid, n, m, i + 1, j + 1); //south east
            dfs(grid, n, m, i - 1, j + 1); //north east
            dfs(grid, n, m, i + 1, j - 1); //south west
        }
    }

    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        int n = grid.size();
        int m = grid[0].size();

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if (grid[i][j] == '1')
                {
                    dfs(grid, n, m, i, j);
                    count++;
                }
            }
        }

        return count;
    }
};