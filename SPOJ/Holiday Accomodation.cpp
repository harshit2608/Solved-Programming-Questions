#include <bits/stdc++.h>
using namespace std;

#define HAR_HAR_MAHADEV int main()

#define mod int(1e9 + 7)
#define ll long long
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

class Graph
{
public:
    Graph(ll vertex)
        : V(vertex)
    {
        adj = new vector<pair<ll, ll>>[V];
    }

    void addEdge(ll u, ll v, ll weight)
    {
        adj[u].push_back({v, weight});
        adj[v].push_back({u, weight});
    }

    void print(vector<ll> &ans);
    ll holiday();

private:
    ll V;
    vector<pair<ll, ll>> *adj;
};

ll Graph::holiday()
{
    vector<ll> visited(V, 0);
    vector<ll> distance(V, 1);
    function<ll(vector<ll> & visited, vector<ll> & distance, ll src, ll & ans)> dfs;
    dfs = [&](vector<ll> &visited, vector<ll> &distance, ll src, ll &ans)
    {
        visited[src] = 1;
        for (auto itr : adj[src])
        {
            ll node = itr.first;
            ll weight = itr.second;
            if (visited[node] == 0)
            {
                distance[src] += dfs(visited, distance, node, ans);
                ans += 2 * min(distance[node], V - 1 - distance[node]) * weight;
            }
        }
        return distance[src];
    };

    ll ans = 0;
    dfs(visited, distance, 1, ans);
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    Graph g(n + 1);
    for (int i = 1; i < n; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }
    cout << g.holiday();
}

HAR_HAR_MAHADEV
{
    fastIO;
    int counter = 1;
#ifndef ONLINE_JUDGE
    cerr << "HEllo";
#endif
    tc
    {
        cout << "Case #" << counter << ": ";
        solve();
        cout << "\n";
        counter++;
    }
    return 0;
}