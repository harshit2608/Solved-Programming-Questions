class Solution
{
public:
    bool isBipartite(int V, vector<int> adj[])
    {
        vector<int> visited(V, 0);
        function<bool(vector<int> & visited, int parent, int node, int color)> dfs;
        dfs = [&](vector<int> &visited, int parent, int node, int color)
        {
            visited[node] = color;
            for (auto it : adj[node])
            {
                if (visited[it] == 0)
                {
                    if (!dfs(visited, node, it, 3 - color))
                    {
                        return false;
                    }
                }
                else if (it != parent && visited[it] == color)
                {
                    return false;
                }
            }
            return true;
        };

        for (int i = 0; i < V; ++i)
        {
            if (visited[i] == 0 && !dfs(visited, -1, i, 1))
            {
                return false;
            }
        }
        return true;
    }
};