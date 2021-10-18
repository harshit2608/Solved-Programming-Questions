class Solution
{
public:
    /**
     * @param maze: the maze
     * @param start: the start
     * @param destination: the destination
     * @return: whether the ball could stop at the destination
     */
    bool hasPath(vector<vector<int>> &maze, vector<int> &start, vector<int> &destination)
    {
        int n = maze.size();
        int m = maze[0].size();
        queue<pair<int, int>> q;
        q.push({start[0], start[1]});

        int visited[n][m];
        memset(visited, 0, sizeof(visited));
        visited[start[0]][start[1]] = 1;

        while (!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if (x == destination[0] && y == destination[1])
            {
                return true;
            }
            int dx[] = {+1, -1, 0, 0};
            int dy[] = {0, 0, -1, +1};
            for (int i = 0; i < 4; ++i)
            {
                int newX = x;
                int newY = y;

                while (newX >= 0 && newY >= 0 && newX < n && newY < m && maze[newX][newY] == 0)
                {
                    newX += dx[i];
                    newY += dy[i];
                }

                newX -= dx[i];
                newY -= dy[i];
                if (visited[newX][newY] == 0)
                {
                    visited[newX][newY] = 1;
                    q.push({newX, newY});
                }
            }
        }
        return false;
    }
};