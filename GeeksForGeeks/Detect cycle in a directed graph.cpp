class Solution
{
public:
    //Function to detect cycle in a directed graph.
    bool dfs(vector<int> adj[], bool visited[], bool recStack[], int src)
    {
        visited[src] = true;
        recStack[src] = true;
        for (int it : adj[src])
        {
            if (recStack[it])
            {
                return true;
            }
            else if (!visited[it] && dfs(adj, visited, recStack, it))
            {
                return true;
            }
        }
        recStack[src] = false;
        return false;
    }

    bool isCyclic(int V, vector<int> adj[])
    {
        bool visited[V] = {false};
        bool recStack[V] = {false};

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i] && dfs(adj, visited, recStack, i))
            {
                return true;
            }
        }
        return false;
    }
};
