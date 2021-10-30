class Solution
{
public:
    int dx[8] = {1, 1, -1, -1, 2, 2, -2, -2};
    int dy[8] = {2, -2, 2, -2, 1, -1, 1, -1};

    bool isSafe(int i, int j, int n)
    {
        if (i < 1 || i > n || j < 1 || j > n)
        {
            return false;
        }
        return true;
    }

    int minStepToReachTarget(vector<int> &start, vector<int> &end, int N)
    {
        int ans = 0;
        queue<pair<int, int>> q;
        vector<vector<int>> visited(N + 1, vector<int>(N + 1, 0));

        int s0 = start[0], s1 = start[1];
        q.push({s0, s1});
        visited[s0][s1] = 1;

        while (!q.empty())
        {
            int sx = q.size();
            while (sx--)
            {
                pair<int, int> curr = q.front();
                q.pop();
                int x = curr.first;
                int y = curr.second;

                if (x == end[0] && y == end[1])
                {
                    return ans;
                }

                for (int i = 0; i < 8; ++i)
                {
                    int newx = x + dx[i];
                    int newy = y + dy[i];
                    if (isSafe(newx, newy, N) && !visited[newx][newy])
                    {
                        q.push({newx, newy});
                        visited[newx][newy] = 1;
                    }
                }
            }
            ans++;
        }
        return ans;
    }
};