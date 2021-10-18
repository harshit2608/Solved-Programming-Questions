class Solution
{
public:
    //Function to find number of strongly connected components in the graph.
    int kosaraju(int V, vector<int> adj[])
    {
        vector<bool> visited(V, false);
        vector<int> stack;
        vector<int> rev_adj[V];
        for (int i = 0; i < V; ++i)
        {
            for (auto it : adj[i])
            {
                rev_adj[it].push_back(i);
            }
        }

        function<void(vector<bool> & visited, vector<int> & stack, int src)> dfs;
        dfs = [&](vector<bool> &visited, vector<int> &stack, int src)
        {
            visited[src] = true;
            for (auto it : adj[src])
            {
                if (!visited[it])
                {
                    dfs(visited, stack, it);
                }
            }
            stack.push_back(src);
        };

        function<void(vector<bool> & visited, int src)> dfs2;
        dfs2 = [&](vector<bool> &visited, int src)
        {
            visited[src] = true;
            for (auto it : rev_adj[src])
            {
                if (!visited[it])
                {
                    dfs2(visited, it);
                }
            }
        };

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i])
            {
                dfs(visited, stack, i);
            }
        }
        int ans = 0;

        visited.assign(V, false);
        for (int i = stack.size() - 1; i >= 0; --i)
        {
            int node = stack[i];
            if (!visited[node])
            {
                dfs2(visited, node);
                ans++;
            }
        }
        return ans;
    }
};