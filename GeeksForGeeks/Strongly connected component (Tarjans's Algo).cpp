class Solution
{
public:
    // Function to return a list of lists of integers denoting the members
    // of strongly connected components in the given graph.
    static bool comp(vector<int> &a, vector<int> &b)
    {
        return a[0] < b[0];
    }

    vector<vector<int>> tarjans(int V, vector<int> adj[])
    {
        vector<vector<int>> ans;
        vector<int> discTime(V, 0);
        vector<int> lowdiscTime(V, 0);
        vector<int> inStack(V, 0);
        vector<int> visited(V, 0);
        stack<int> store;
        int time_vis = 0;
        function<void(stack<int> & store, vector<int> & discTime, vector<int> & lowdiscTime, vector<int> & inStack, vector<int> & visited, vector<vector<int>> & ans, int src, int &time_vis)> dfs;
        dfs = [&](stack<int> &store, vector<int> &discTime, vector<int> &lowdiscTime, vector<int> &inStack, vector<int> &visited, vector<vector<int>> &ans, int src, int &time_vis)
        {
            visited[src] = 1;
            store.push(src);
            inStack[src] = 1;
            discTime[src] = time_vis;
            lowdiscTime[src] = time_vis;
            time_vis++;
            for (auto itr : adj[src])
            {
                if (!visited[itr])
                {
                    dfs(store, discTime, lowdiscTime, inStack, visited, ans, itr, time_vis);
                    lowdiscTime[src] = min(lowdiscTime[itr], lowdiscTime[src]);
                }
                else if (inStack[itr] == 1)
                {
                    lowdiscTime[src] = min(lowdiscTime[src], discTime[itr]);
                }
            }
            if (lowdiscTime[src] == discTime[src])
            {
                vector<int> components;
                while (store.top() != src)
                {
                    components.push_back(store.top());
                    inStack[store.top()] = 0;
                    store.pop();
                }
                components.push_back(store.top());
                inStack[store.top()] = 0;
                store.pop();
                ans.push_back(components);
            }
        };

        for (int i = 0; i < V; ++i)
        {
            if (visited[i] == 0)
            {
                dfs(store, discTime, lowdiscTime, inStack, visited, ans, i, time_vis);
            }
        }

        for (vector<int> &itr : ans)
        {
            sort(itr.begin(), itr.end());
        }

        sort(ans.begin(), ans.end(), comp);
        return ans;
    }
};