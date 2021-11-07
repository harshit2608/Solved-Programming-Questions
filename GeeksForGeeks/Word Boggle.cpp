class Solution
{
public:
    vector<vector<bool>> vis;
    int n, m;

    bool dfs(int x, int y, string word, vector<vector<char>> &board)
    {
        if (word.size() == 1 && word[0] == board[x][y])
            return 1;
        if (word[0] != board[x][y])
            return 0;

        vis[x][y] = 1;

        int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
        int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};

        for (int i = 0; i < 8; i++)
        {
            int newx = x + dx[i], newy = y + dy[i];

            if (0 <= newx && newx < n && 0 <= newy && newy < m)
            {
                if (!vis[newx][newy] && dfs(newx, newy, word.substr(1), board))
                    return 1;
            }
        }

        vis[x][y] = 0;
        return 0;
    }

    vector<string> wordBoggle(vector<vector<char>> &board, vector<string> &dictionary)
    {
        // Code here

        n = board.size(), m = board[0].size();
        vector<string> ans;

        for (auto word : dictionary)
        {
            vis = vector<vector<bool>>(n, vector<bool>(m));
            bool done = 0;

            for (int x = 0; x < n; x++)
            {
                for (int y = 0; y < m; y++)
                {
                    if (dfs(x, y, word))
                    {
                        ans.push_back(word);
                        done = 1;
                        break;
                    }
                }
                if (done)
                    break;
            }
        }
        return ans;
    }
};