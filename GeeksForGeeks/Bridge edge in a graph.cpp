class Solution
{
public:
    // Function to find if the given edge is a bridge in graph.
    void dfs(vector<int> adj[], vector<int> &visited, int src, int c, int d)
    {
        visited[src] = true;
        for (auto it : adj[src])
        {
            if ((src == c && it == d) || (src == d && it == c))
            {
                continue;
            }
            if (!visited[it])
            {
                dfs(adj, visited, it, c, d);
            }
        }
    }

    int isBridge(int V, vector<int> adj[], int c, int d)
    {
        vector<int> visited(V, 0);
        dfs(adj, visited, c, c, d);
        if (!visited[d])
        {
            return true;
        }
        return false;
    }
};