class Solution
{
public:
    //Function to return a list containing the DFS traversal of the graph.
    void dfs(vector<int> adj[], int v, int visited[], vector<int> &ans)
    {
        visited[v] = 1;
        ans.push_back(v);
        for (auto i : adj[v])
        {
            if (visited[i] == false)
            {
                dfs(adj, i, visited, ans);
            }
        }
    }

    vector<int> dfsOfGraph(int V, vector<int> adj[])
    {
        int visited[V];
        memset(visited, 0, sizeof(visited));
        vector<int> ans;
        dfs(adj, 0, visited, ans);
        return ans;
    }
};
