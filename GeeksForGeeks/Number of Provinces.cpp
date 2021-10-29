class Solution
{
public:
    int ans = 0;
    void bfs(vector<vector<int>> &adj, vector<int> &visited, int V, int src)
    {
        queue<int> q;
        visited[src] = 1;
        q.push(src);
        while (!q.empty())
        {
            int curr = q.front();
            q.pop();
            for (int i = 0; i < V; ++i)
            {
                // int f = it[0],s = it[1];
                if (!visited[i] && adj[curr][i] == 1)
                {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }

    int numProvinces(vector<vector<int>> adj, int V)
    {
        vector<int> visited(V, 0);

        for (int i = 0; i < V; ++i)
        {
            if (!visited[i]) //&& bfs(adj,visited,V,i))
            {
                bfs(adj, visited, V, i);
                ans++;
            }
        }
        return ans;
    }
};