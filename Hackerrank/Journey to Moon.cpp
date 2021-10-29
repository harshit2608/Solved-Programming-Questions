#include <bits/stdc++.h>
using namespace std;

void FASTIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

void dfs(vector<long long int> &visited, vector<long long int> adj[], long long int src, long long int &vertex)
{
    visited[src] = 1;
    vertex++;
    for (auto it : adj[src])
    {
        if (!visited[it])
        {
            dfs(visited, adj, it, vertex);
        }
    }
}

int32_t main()
{
    FASTIO();
    long long int v, e;
    cin >> v >> e;
    vector<long long int> adj[v];
    for (long long int i = 0; i < e; i++)
    {
        long long int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<long long int> sol;
    vector<long long int> visited(v, 0);
    for (long long int i = 0; i < v; i++)
    {
        if (!visited[i])
        {
            long long int counter = 0;
            dfs(visited, adj, i, counter);
            sol.push_back(counter);
        }
    }
    long long int ans = (v * (v - 1)) / 2;
    for (long long int i = 0; i < sol.size(); i++)
    {
        long long int temp = (sol[i] * (sol[i] - 1)) / 2;
        ans = ans - temp;
    }
    cout << ans;
    return 0;
}
