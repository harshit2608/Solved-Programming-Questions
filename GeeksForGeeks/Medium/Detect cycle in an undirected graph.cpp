class Solution
{
public:
    //Function to detect cycle in an undirected graph.
    bool dfs(vector<int> adj[], int src, vector<bool> &visited, int parent)
    {
        visited[src] = true;
        for (auto j : adj[src])
        {
            if (!visited[j])
            {
                if (dfs(adj, j, visited, src))
                {
                    return true;
                }
            }
            else if (j != parent)
            {
                return true;
            }
        }
        return false;
    }

    bool isCycle(int V, vector<int> adj[])
    {
        vector<bool> visited(V);
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i] && dfs(adj, i, visited, -1))
            {
                return true;
            }
        }
        return false;
    }
};