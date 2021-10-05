class Solution
{
public:
    //Function to find a Mother Vertex in the Graph.
    void dfs(vector<int> adj[], bool visited[], int src)
    {
        visited[src] = true;
        for (auto it : adj[src])
        {
            if (!visited[it])
            {
                dfs(adj, visited, it);
            }
        }
    }

    int findMotherVertex(int V, vector<int> adj[])
    {
        bool visited[V + 1] = {false};
        int ans = 0;
        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                dfs(adj, visited, i);
                ans = i;
            }
        }

        fill(visited, visited + V + 1, false);
        dfs(adj, visited, ans);
        for (int i = 0; i < V; ++i)
        {
            if (visited[i] == false)
            {
                return -1;
            }
        }
        return ans;
    }
};