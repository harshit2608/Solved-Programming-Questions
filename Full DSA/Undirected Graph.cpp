#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <functional>
#include <queue>
#include <cstring>
using namespace std;
#define ONLINE_JUDGE

#define PI 3.1415926535897932384626
#define mod int(1e9 + 7)
#define ll long long
#define ld long double
#define ull unsigned long long
#define F first
#define S second
#define PB push_back
#define DB pop_back
#define MP make_pair
#define INF INT_MAX
#define NINF INT_MIN
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define repi(i, a, b) for (ll i = b - 1; i >= a; --i)
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

class DSU
{
public:
    DSU(ll vertex)
        : m_Vertex(vertex)
    {
        parent = new ll[vertex];
        rank = new ll[vertex];
        // memset(parent, -1, sizeof(parent));
        for (ll i = 0; i < vertex; ++i)
        {
            parent[i] = -1;
            rank[i] = 1;
        }
    }
    ll findDSU(ll node);
    void unionDSU(ll nodeA, ll nodeB);

    ~DSU()
    {
        delete[] parent;
        delete[] rank;
    }

public:
    ll m_Vertex;
    ll *parent, *rank;
};

ll DSU::findDSU(ll node)
{
    if (parent[node] == -1)
    {
        return node;
    }
    return parent[node] = findDSU(parent[node]);
}

void DSU::unionDSU(ll nodeA, ll nodeB)
{
    ll set1 = findDSU(nodeA);
    ll set2 = findDSU(nodeB);
    if (set1 != set2)
    {
        if (rank[set1] > rank[set2])
        {
            parent[set2] = set1;
            rank[set1] += rank[set2];
        }
        else
        {
            parent[set1] = set2;
            rank[set2] += rank[set1];
        }
    }
}

class Graph
{
public:
    Graph(ll vertices)
        : m_Vertices(vertices)
    {
        adj = new vector<ll>[vertices];
    }

    void addEdge(ll u, ll v);
    void addEdgeDSU(ll u, ll v);
    void print(vector<ll> &input);
    void shortestCycle(ll &ans);
    void isBiPartite(ll src);
    bool isCyclic();
    bool isCyclicDSU();
    ll connectedComponents();
    vector<ll> traversalconnected(ll src = 0);
    vector<ll> traversaldisconnected();
    vector<ll> shortestPath();
    vector<ll> prims();
    vector<ll> krushkal();

private:
    ll m_Vertices = 0;
    vector<ll> *adj;
};

void Graph::addEdge(ll u, ll v)
{
    adj[u].PB(v);
    adj[v].PB(u);
}

void Graph::addEdgeDSU(ll u, ll v)
{
    adj[u].PB(v);
}

void Graph::print(vector<ll> &input)
{
    for (ll i = 0; i < input.size(); ++i)
    {
        if (input[i] == INF || input[i] == NINF)
        {
            cout << "INF ";
        }
        else
        {
            cout << input[i] << " ";
        }
    }
    cout << "\n";
}

bool Graph::isCyclic()
{
    vector<bool> visited(m_Vertices + 1, false);
    function<bool(vector<bool> & visited, ll src)> bfs;
    bfs = [&](vector<bool> &visited, ll src)
    {
        visited[src] = true;
        queue<pair<ll, ll>> q;
        q.push({src, -1});
        while (!q.empty())
        {
            ll node = q.front().F;
            ll parent = q.front().S;
            q.pop();
            for (auto it : adj[node])
            {
                if (!visited[it])
                {
                    visited[it] = true;
                    q.push({it, node});
                }
                else if (parent != it)
                {
                    return true;
                }
            }
        }
        return false;
    };
    for (ll i = 0; i < m_Vertices; ++i)
    {
        if (!visited[i] && bfs(visited, i))
        {
            return true;
        }
    }
    return false;
}

bool Graph::isCyclicDSU()
{
    DSU dsu(m_Vertices);
    for (ll i = 0; i < m_Vertices; ++i)
    {
        for (auto it : adj[i])
        {
            ll s1 = dsu.findDSU(i);
            ll s2 = dsu.findDSU(it);
            if (s1 != s2)
            {
                dsu.unionDSU(s1, s2);
            }
            else
            {
#ifndef ONLINE_JUDGE
                cout << "Parents " << s1 << " and " << s2 << "\n";
                cout << "Parents array\n";
                for (ll i = 0; i < m_Vertices; ++i)
                {
                    cout << dsu.parent[i] << " ";
                }
                cout << "\n";
                cout << "Ranks array\n";
                for (ll i = 0; i < m_Vertices; ++i)
                {
                    cout << dsu.rank[i] << " ";
                }
#endif
                return true;
            }
        }
    }
    return false;
}

void Graph::shortestCycle(ll &ans)
{
    function<void(ll & ans, ll src)> bfsrec;
    bfsrec = [&](ll &ans, ll src)
    {
        vector<ll> distance(m_Vertices + 1, INF);
        queue<ll> q;
        q.push(src);
        distance[src] = 0;
        while (!q.empty())
        {
            ll u = q.front();
            q.pop();
            for (auto it : adj[u])
            {
                if (distance[it] == INF)
                {
                    distance[it] = distance[u] + 1;
                    q.push(it);
                }
                else if (distance[it] >= distance[u])
                {
                    ans = min(ans, distance[it] + distance[u] + 1);
                }
            }
        }
    };

    for (ll i = 0; i < m_Vertices; ++i)
    {
        bfsrec(ans, i);
    }
}

void Graph::isBiPartite(ll src)
{
    vector<ll> visited(m_Vertices, 0);
    ll parent = -1, node = 0, color = 1;
    function<bool(vector<ll> & visited, ll parent, ll node, ll color)> dfs;
    dfs = [&](vector<ll> &visited, ll parent, ll node, ll color)
    {
        visited[node] = color;
        for (auto it : adj[node])
        {
            if (visited[it] == 0)
            {
                if (!dfs(visited, node, it, 3 - color))
                {
                    return false;
                }
            }
            else if (it != parent && visited[it] == color)
            {
                return false;
            }
        }
        return true;
    };

    if (dfs(visited, parent, src, color) == true)
    {
        cout << "Non Bipartite\n";
    }
    else
    {
        cout << "Bipartite\n";
    }
}

ll Graph::connectedComponents()
{
    ll ans = 0;
    vector<bool> visited(m_Vertices + 1, false);
    function<void(vector<bool> & visited, ll src)> bfsrec;
    bfsrec = [&](vector<bool> &visited, ll src)
    {
        queue<ll> q;
        visited[src] = true;
        q.push(src);
        while (!q.empty())
        {
            ll u = q.front();
            q.pop();
            for (auto it : adj[u])
            {
                if (!visited[it])
                {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
    };
    for (ll i = 0; i < m_Vertices; ++i)
    {
        if (!visited[i])
        {
            bfsrec(visited, i);
            ans++;
        }
    }
    return ans;
}

vector<ll> Graph::traversalconnected(ll src)
{
    vector<bool> visited(m_Vertices + 1, false);
    vector<ll> ans;
    queue<ll> q;
    visited[src] = true;
    q.push(src);
    while (!q.empty())
    {
        ll u = q.front();
        q.pop();
        ans.PB(u);
        for (auto it : adj[u])
        {
            if (!visited[it])
            {
                q.push(it);
                visited[it] = true;
            }
        }
    }
    return ans;
}

vector<ll> Graph::traversaldisconnected()
{
    vector<ll> ans;
    vector<bool> visited(m_Vertices + 1, false);
    function<void(vector<bool> & visited, vector<ll> & ans, ll source)> dfsrec;
    dfsrec = [&](vector<bool> &visited, vector<ll> &ans, ll source)
    {
        visited[source] = true;
        ans.PB(source);
        for (auto it : adj[source])
        {
            if (!visited[it])
            {
                dfsrec(visited, ans, it);
            }
        }
    };

    for (ll i = 0; i < m_Vertices; ++i)
    {
        if (!visited[i])
        {
            dfsrec(visited, ans, i);
        }
    }
    return ans;
}

vector<ll> Graph::shortestPath()
{
    vector<ll> distance(m_Vertices);
    vector<bool> visited(m_Vertices + 1, false);
    for (ll i = 0; i < m_Vertices; ++i)
    {
        distance[i] = INF;
    }
    function<void(vector<bool> & visited, vector<ll> & distance, ll src)> bfsrec;
    bfsrec = [&](vector<bool> &visited, vector<ll> &distance, ll src)
    {
        visited[src] = true;
        distance[src] = 0;
        queue<ll> q;
        q.push(src);
        while (!q.empty())
        {
            ll u = q.front();
            q.pop();
            for (auto it : adj[u])
            {
                if (!visited[it])
                {
                    q.push(it);
                    visited[it] = true;
                    distance[it] = distance[u] + 1;
                }
            }
        }
    };
    bfsrec(visited, distance, 0);
    return distance;
}

vector<ll> Graph::prims()
{
    vector<ll> ans;
    return ans;
}

vector<ll> Graph::krushkal()
{
    vector<ll> ans;
    return ans;
}

void solve()
{
    ll vert, edges, src = 0;
    cin >> vert >> edges >> src;
    Graph g(vert);
    Graph gdsu(vert);
    for (ll i = 0; i < edges; ++i)
    {
        ll u, v;
        cin >> u >> v;
        g.addEdge(u, v);
        gdsu.addEdgeDSU(u, v);
    }
    ll shortCycle = vert + 1;
    vector<ll> travcon = g.traversalconnected(src);
    vector<ll> travdis = g.traversaldisconnected();
    vector<ll> shopath = g.shortestPath();
    vector<ll> mstprim = g.prims();
    vector<ll> mstkrus = g.krushkal();
    cout << boolalpha << g.isCyclic() << "\n";
    cout << boolalpha << gdsu.isCyclicDSU() << "\n";
    cout << g.connectedComponents() << "\n";
    g.isBiPartite(src);
    g.shortestCycle(shortCycle);
    if (shortCycle == vert + 1)
    {
        shortCycle = -1;
        cout << shortCycle << "\n";
    }
    else
    {
        cout << shortCycle << "\n";
    }
    g.print(travcon);
    g.print(travdis);
    g.print(shopath);
    // g.print(mstprim);
    // g.print(mstkrus);
#ifndef ONLINE_JUDGE
    cout << "Cyclic " << boolalpha << g.isCyclic() << "\n";
    cout << "Cyclic DSU" << boolalpha << g.isCyclicDSU() << "\n";
    cout << "Connected Components " << g.connectedComponents() << "\n";
    cout << "Shortest Cycle " << shortCycle << "\n";
    g.isBiPartite(src);
    cout << "Traversal connected\n";
    g.print(travcon);
    cout << "Traversal disconnected\n";
    g.print(travdis);
    cout << "Shortest Path\n";
    g.print(shopath);
    cout << "MST Prims\n";
    g.print(mstprim);
    cout << "MST Krushkals\n";
    g.print(mstkrus);
#endif
}

int main()
{
    fastIO;
#ifndef ONLINE_JUDGE
    cerr << "Hello";
#endif
    tc
    {
        static int x = 1;
        cout << "Case #" << x << "\n";
        solve();
        cout << "\n";
        x++;
    }
    return 0;
}

//TODO: ===============================TESTCASES======================================
//TODO: ==============================================================================
//INPUT
// 4
// 4 5 2
// 0 1
// 0 2
// 1 2
// 2 3
// 3 3
// 3 2 0
// 0 1
// 1 2
// 4 4 0
// 0 1
// 1 2
// 2 3
// 3 0
// 7 7 0
// 0 1
// 1 2
// 2 3
// 0 4
// 5 6
// 2 5
// 2 6

//OUTPUT
// Case #1
// true
// true
// 1
// Bipartite
// 1
// 2 0 1 3
// 0 1 2 3
// 0 1 1 2

// Case #2
// false
// false
// 1
// Non Bipartite
// -1
// 0 1 2
// 0 1 2
// 0 1 2

// Case #3
// true
// true
// 1
// Non Bipartite
// 4
// 0 1 3 2
// 0 1 2 3
// 0 1 2 1

// Case #4
// true
// true
// 1
// Bipartite
// 3
// 0 1 4 2 3 5 6
// 0 1 2 3 5 6 4
// 0 1 2 3 1 3 3
