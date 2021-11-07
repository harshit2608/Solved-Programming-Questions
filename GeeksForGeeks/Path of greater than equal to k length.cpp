class Solution
{
public:
    bool dfs(vector<pair<int, int>> adj[], vector<int> &visited, int src, int len, int k)
    {
        if (k <= 0)
        {
            return true;
        }
        visited[src] = 1;
        for (auto itr : adj[src])
        {
            int node = itr.first;
            int weight = itr.second;
            if (!visited[node])
            {
                // = k - weight;
                if (dfs(adj, visited, node, len, k - weight))
                {
                    return true;
                }
            }
        }
        visited[src] = 0;
        return false;
    }

    bool pathMoreThanK(int V, int E, int k, int *a)
    {
        vector<pair<int, int>> adj[V];
        int len = 0;
        for (int i = 0; i < 3 * E; i += 3)
        {
            adj[a[i]].push_back({a[i + 1], a[i + 2]});
            adj[a[i + 1]].push_back({a[i], a[i + 2]});
        }
        vector<int> visited(V, 0);
        return dfs(adj, visited, 0, len, k);
    }
};