class Solution
{
public:
    // Function to count paths between two vertices in a directed graph.
    void dfs(vector<int> adj[], int src, int &res, int destination)
    {
        if (src == destination)
        {
            res++;
            return;
        }
        for (auto it : adj[src])
        {
            dfs(adj, it, res, destination);
        }
    }

    int countPaths(int V, vector<int> adj[], int source, int destination)
    {
        int res = 0;
        dfs(adj, source, res, destination);
        return res;
    }
};