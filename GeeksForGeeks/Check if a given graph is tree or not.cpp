#include <bits/stdc++.h>

using namespace std;
#define ll long long int

class Graph
{
public:
    Graph(ll vertices)
        : m_Vertices(vertices)
    {
        adj = new vector<ll>[vertices];
    }

    void addEdge(ll u, ll v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool isTree()
    {
        vector<bool> visited(m_Vertices, false);
        function<bool(vector<bool> & visited, ll src)> bfs;
        bfs = [&](vector<bool> &visited, ll src)
        {
            visited[src] = true;
            queue<pair<ll, ll>> q;
            q.push({src, -1});
            while (!q.empty())
            {
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                for (auto it : adj[node])
                {
                    if (!visited[it])
                    {
                        visited[it] = true;
                        q.push({it, node});
                    }
                    else if (it != parent)
                    {
                        return true;
                    }
                }
            }
            return false;
        };

        if (bfs(visited, 0))
        {
            return false;
        }
        for (ll i = 0; i < m_Vertices; ++i)
        {
            if (!visited[i])
            {
                return false;
            }
        }
        return true;
    }

private:
    ll m_Vertices = 0;
    vector<ll> *adj;
};

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll v, e;
        cin >> v >> e;
        Graph g(v);
        for (ll i = 0; i < e; ++i)
        {
            ll u, v;
            cin >> u >> v;
            g.addEdge(u, v);
        }
        cout << boolalpha << g.isTree() << "\n";
    }
    return 0;
}