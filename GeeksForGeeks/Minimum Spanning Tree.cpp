class Solution
{
public:
    //Function to find sum of weights of edges of the Minimum Spanning Tree.
    int spanningTree(int V, vector<vector<int>> adj[])
    {
        int cost = 0;
        int key[V];
        fill(key, key + V, INT_MAX);
        key[0] = 0;
        bool visited[V] = {false};

        for (int i = 0; i < V; ++i)
        {
            int u = -1;
            for (int j = 0; j < V; ++j)
            {
                if (!visited[j] && (u == -1 || key[j] < key[u]))
                {
                    u = i;
                }
            }
            visited[u] = true;
            cost += key[u];

            for (int j = 0; j < V; ++j)
            {
                if (!visited[j] && adj[u][j] != 0)
                {
                    key[j] = min(adj[u][j], key[j]);
                }
            }
        }
        return cost;
    }
};