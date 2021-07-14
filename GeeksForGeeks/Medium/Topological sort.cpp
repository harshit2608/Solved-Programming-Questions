class Solution
{
public:
    //Function to return list containing vertices in Topological order.
    vector<int> topoSort(int V, vector<int> adj[])
    {
        vector<int> ans;
        vector<int> inorder(V, 0);

        for (int i = 0; i < V; ++i)
        {
            for (auto it : adj[i])
            {
                inorder[it]++;
            }
        }

        queue<int> q;

        for (int i = 0; i < V; ++i)
        {
            if (inorder[i] == 0)
            {
                q.push(i);
            }
        }

        while (!q.empty())
        {
            int u = q.front();
            ans.push_back(u);
            for (auto v : adj[u])
            {
                inorder[v]--;
                if (inorder[v] == 0)
                {
                    q.push(v);
                }
            }
            q.pop();
        }

        return ans;
    }
};
