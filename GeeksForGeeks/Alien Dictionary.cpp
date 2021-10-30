class Solution
{
public:
    void dfs(vector<int> adj[], vector<int> &visited, stack<int> &st, int src)
    {
        visited[src] = 1;
        for (auto it : adj[src])
        {
            if (!visited[it])
            {
                dfs(adj, visited, st, it);
            }
        }
        st.push(src);
    }

    string topo(vector<int> adj[], int vertices)
    {
        stack<int> st;
        vector<int> visited(vertices, 0);
        for (int i = 0; i < vertices; ++i)
        {
            if (!visited[i])
            {
                dfs(adj, visited, st, i);
            }
        }

        string ans;
        while (!st.empty())
        {
            ans.push_back(st.top() + 'a');
            st.pop();
        }
        return ans;
    }

    string findOrder(string dict[], int N, int K)
    {
        vector<int> adj[26];
        for (int i = 0; i < N - 1; ++i)
        {
            string s1 = dict[i];
            string s2 = dict[i + 1];
            for (int j = 0; j < min(s1.size(), s2.size()); ++j)
            {
                if (s1[j] != s2[j])
                {
                    int idx1 = s1[j] - 'a';
                    int idx2 = s2[j] - 'a';
                    adj[idx1].push_back(idx2);
                    break;
                }
            }
        }
        return topo(adj, K);
    }
};