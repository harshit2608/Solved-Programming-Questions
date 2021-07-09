class Solution
{
public:
    //Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[])
    {
        int visited[V + 1];
        vector<int> ans;
        memset(visited, 0, sizeof(visited));
        queue<int> q;
        q.push(0);
        visited[0] = 1;
        while (!q.empty())
        {
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for (auto v : adj[node])
            {
                if (!visited[v])
                {
                    visited[v] = 1;
                    q.push(v);
                }
            }
        }

        return ans;
    }
};