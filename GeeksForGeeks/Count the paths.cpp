class Solution
{
public:
    int ans = 0;

    void dfs(vector<int> adj[], vector<int> &visited, int s, int d)
    {
        visited[s] = 1;
        if (s == d)
        {
            ans++;
            return;
        }
        for (auto it : adj[s])
        {
            if (!visited[it])
            {
                dfs(adj, visited, it, d);
                visited[it] = 0;
            }
        }
    }

    int possible_paths(vector<vector<int>> edges, int n, int s, int d)
    {
        vector<int> adj[n];
        for (auto it : edges)
        {
            adj[it[0]].push_back(it[1]);
        }

        vector<int> visited(n, 0);
        dfs(adj, visited, s, d);
        return ans;
    }
};