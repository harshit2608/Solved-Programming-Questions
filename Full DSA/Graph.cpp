#include <bits/stdc++.h>
using namespace std;

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

class AdjListNode
{
public:
    AdjListNode(int v, int weight = 0)
    {
        this->v = v;
        this->weight = weight;
    }
    int getV() const { return v; }
    int getWeight() const { return weight; }

private:
    int v;
    int weight;
};

class Graph
{
public:
    Graph(int V)
    {
        this->V = V;
        adj = new vector<AdjListNode>[V];
    }

    void addEdge(int u, int v, int weight)
    {
        AdjListNode node(v, weight);
        adj[u].push_back(node);
    }

    bool isCycle();
    ll connectedComponents(); //TODO:
    vector<ll> traversal();
    vector<ll> topologicalSort();
    vector<ll> shortestPath(vector<ll> &topo, ll src);
    vector<ll> longestPath(vector<ll> &topo, ll src);
    void print(vector<ll> &ans);

private:
private:
    int V;
    vector<AdjListNode> *adj;
};

bool Graph::isCycle()
{
    function<bool(vector<bool> & visited, vector<bool> & recursion, ll src)> dfs;
    dfs = [&](vector<bool> visited, vector<bool> recursion, ll src)
    {
        visited[src] = true;
        recursion[src] = true;
        for (AdjListNode it : adj[src])
        {
            if (!visited[it.getV()] && dfs(visited, recursion, it.getV()))
            {
                return true;
            }
            else if (recursion[it.getV()])
            {
                return true;
            }
        }
        recursion[src] = false;
        return false;
    };

    vector<bool> visited(V, false);
    vector<bool> recursion(V, false);
    for (ll i = 0; i < V; ++i)
    {
        if (!visited[i] && dfs(visited, recursion, i))
        {
            return true;
        }
    }
    return false;
}

ll Graph::connectedComponents()
{
    //TODO:
    auto bfs = [&](vector<bool> visited, ll src)
    {
        visited[src] = true;
        queue<ll> storage;
        storage.push(src);
        while (!storage.empty())
        {
            src = storage.front();
            storage.pop();
            for (AdjListNode it : adj[src])
            {
                if (!visited[it.getV()])
                {
                    visited[it.getV()] = true;
                    storage.push(it.getV());
                }
            }
        }
    };

    ll ans = 0;
    vector<bool> visited(V, false);
    for (ll i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            bfs(visited, i);
        }
    }
    return ans;
}
vector<ll> Graph::traversal()
{
    auto bfs = [&](vector<bool> &visited, vector<ll> &ans, ll src)
    {
        visited[src] = true;
        queue<ll> storage;
        storage.push(src);
        while (!storage.empty())
        {
            src = storage.front();
            ans.PB(src);
            storage.pop();
            for (AdjListNode it : adj[src])
            {
                if (!visited[it.getV()])
                {
                    visited[it.getV()] = true;
                    storage.push(it.getV());
                }
            }
        }
    };

    vector<ll> ans;
    vector<bool> visited(V, false);
    for (ll i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            bfs(visited, ans, i);
        }
    }
    return ans;
}
vector<ll> Graph::topologicalSort()
{
    vector<ll> indegree(V, 0);
    vector<ll> ans;
    for (ll i = 0; i < V; ++i)
    {
        for (AdjListNode it : adj[i])
        {
            indegree[it.getV()]++;
        }
    }
    queue<ll> q;
    for (ll i = 0; i < V; ++i)
    {
        if (indegree[i] == 0)
        {
            q.push(i);
        }
    }
    while (!q.empty())
    {
        ll f = q.front();
        ans.PB(f);

        q.pop();
        for (AdjListNode it : adj[f])
        {
            indegree[it.getV()]--;
            if (indegree[it.getV()] == 0)
            {
                q.push(it.getV());
            }
        }
    }
    return ans;
}

vector<ll> Graph::shortestPath(vector<ll> &topo, ll src)
{
    vector<ll> ans(V, INF);
    ans[src] = 0;
    for (ll j = 0; j < topo.size(); ++j)
    {
        ll u = topo[j];
        vector<AdjListNode>::iterator i;
        if (ans[u] != INF)
        {
            for (i = adj[u].begin(); i != adj[u].end(); ++i)
            {
                if (ans[i->getV()] > ans[u] + i->getWeight())
                {
                    ans[i->getV()] = ans[u] + i->getWeight();
                }
            }
        }
    }
    return ans;
}
vector<ll> Graph::longestPath(vector<ll> &topo, ll src)
{
    vector<ll> ans(V, NINF);
    ans[src] = 0;
    for (ll j = 0; j < topo.size(); ++j)
    {
        ll u = topo[j];
        vector<AdjListNode>::iterator i;
        if (ans[u] != INF)
        {
            for (i = adj[u].begin(); i != adj[u].end(); ++i)
            {
                if (ans[i->getV()] < ans[u] + i->getWeight())
                {
                    ans[i->getV()] = ans[u] + i->getWeight();
                }
            }
        }
    }
    return ans;
}

void Graph::print(vector<ll> &ans)
{
    for (ll i = 0; i < ans.size(); ++i)
    {
        if (ans[i] == INF || ans[i] == NINF)
        {
            cout << "INF ";
        }
        else
        {
            cout << ans[i] << " ";
        }
    }
    cout << "\n";
}

void solve()
{
    ll V, E, src;
    cin >> V >> E >> src;
    Graph g(V);
    for (int i = 0; i < E; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }
    vector<ll> topo = g.topologicalSort();
    vector<ll> shortest = g.shortestPath(topo, src);
    vector<ll> longest = g.longestPath(topo, src);
    vector<ll> trav = g.traversal();
    cout << boolalpha << g.isCycle() << "\n";
    g.print(trav);
    g.print(topo);
    g.print(shortest);
    g.print(longest);
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

//TestCase 1:
//Input->
// 2
// 6 7 0
// 0 1 2
// 0 4 1
// 1 2 3
// 4 2 2
// 4 5 4
// 2 3 6
// 5 3 1

// 7 10 1
// 0 1 5
// 0 2 3
// 1 3 6
// 1 2 2
// 2 4 4
// 2 5 2
// 2 3 7
// 3 5 1
// 3 4 -1
// 4 5 -2

//Output->
// Case #1
// false
// 0 1 4 2 5 3
// 0 1 4 2 5 3
// 0 2 3 6 1 5
// 0 2 5 11 1 5

// Case #2
// false
// 0 1 2 3 4 5
// 0 1 2 3 4 5
// INF 0 2 6 5 3
// INF 0 2 9 8 10