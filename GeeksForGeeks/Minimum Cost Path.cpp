class Solution
{
public:
    // Function to return the minimum cost to react at bottom
    // right cell from top left cell.
    bool isSafe(int i, int j, int n)
    {
        if (i < 0 || i >= n || j < 0 || j >= n)
        {
            return false;
        }
        return true;
    }

    int minimumCostPath(vector<vector<int>> &grid)
    {
        int n = grid.size();
        vector<vector<int>> dist(n, vector<int>(n, INT_MAX));
        int dx[4] = {1, -1, 0, 0};
        int dy[4] = {0, 0, -1, 1};

        auto cmp = [&](tuple<int, int, int> &left, tuple<int, int, int> &right)
        {
            return get<2>(left) > get<2>(right);
        };

        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, decltype(cmp)> pq(cmp);
        dist[0][0] = grid[0][0];
        pq.push(make_tuple(0, 0, grid[0][0]));

        while (!pq.empty())
        {
            tuple<int, int, int> tup = pq.top();
            pq.pop();
            int x = get<0>(tup);
            int y = get<1>(tup);
            for (int i = 0; i < 4; ++i)
            {
                int newx = x + dx[i];
                int newy = y + dy[i];
                if (!isSafe(newx, newy, n))
                {
                    continue;
                }

                if (dist[newx][newy] > dist[x][y] + grid[newx][newy])
                {
                    dist[newx][newy] = dist[x][y] + grid[newx][newy];
                    pq.push(make_tuple(newx, newy, dist[newx][newy]));
                }
            }
        }
        return dist[n - 1][n - 1];
    }
};