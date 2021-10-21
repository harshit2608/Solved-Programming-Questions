class Solution
{
public:
    /*  Function to implement Dijkstra
     *   adj: vector of vectors which represents the graph
     *   S: source vertex to start traversing graph with
     *   V: number of vertices
     */
    vector<int> bellman_ford(int V, vector<vector<int>> adj, int S)
    {
        vector<int> dist(V, 1e8);
        dist[S] = 0;
        for (int i = 0; i < V - 1; i++)
        {
            bool flag = true;
            for (auto &it : adj)
            {
                int u = it[0];
                int v = it[1];
                int w = it[2];
                if (dist[u] + w < dist[v])
                {
                    dist[v] = dist[u] + w;
                    flag = false;
                }
            }
            if (flag)
            {
                break;
            }
        }
        return dist;
    }
};
