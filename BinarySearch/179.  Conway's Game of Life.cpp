bool isSafe(int i, int j, int n, int m)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
    {
        return false;
    }
    return true;
}

vector<vector<int>> solve(vector<vector<int>> &matrix)
{
    vector<vector<int>> ans(matrix.begin(), matrix.end());
    int dx[8] = {1, 1, 0, -1, -1, -1, 0, 1};
    int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

    // count the surrounding 1 for a given cell
    // if count ==2 || count ==3
    // cell = 1
    // else cell = 0

    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            int count = 0;
            for (int k = 0; k < 8; ++k)
            {
                int newi = i + dx[k];
                int newj = j + dy[k];
                if (isSafe(newi, newj, n, m) && matrix[newi][newj] == 1)
                {
                    count++;
                }
            }
            if (matrix[i][j] == 1 && (count == 2 || count == 3))
            {
                ans[i][j] = 1;
            }
            else if (matrix[i][j] == 0 && (count == 3))
            {
                ans[i][j] = 1;
            }
            else
            {
                ans[i][j] = 0;
            }
        }
    }
    return ans;
}