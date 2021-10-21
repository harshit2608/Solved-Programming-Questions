class Solution
{
public:
    // Function to find the shortest distance of all the vertices
    // from the source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> st;
        st.push({0, S});
        // set<pair<int,int>>st;
        vector<int> ans(V, INT_MAX);
        // st.insert({0,S});
        ans[S] = 0;
        while (!st.empty())
        {
            // auto it = st.begin();
            // int dist = it->first;
            // int node = it->second;

            auto p = st.top();
            int node = p.second;
            st.pop();
            // st.erase(it);

            for (auto itr : adj[node])
            {
                int itrnode = itr[0];
                int itrweight = itr[1];
                if (ans[itrnode] > ans[node] + itrweight)
                {
                    ans[itrnode] = ans[node] + itrweight;
                    // st.insert({ans[itrnode],itrnode});
                    st.push({ans[itrnode], itrnode});
                }
            }
        }
        return ans;
    }
};