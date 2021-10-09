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
    ll t;     \
    cin >> t; \
    while (t--)
#define fastIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

class AdjListNode
{
public:
    AdjListNode(ll v, ll weight = 0)
    {
        this->v = v;
        this->weight = weight;
    }
    ll getV() const { return v; }
    ll getWeight() const { return weight; }

private:
    ll v;
    ll weight;
};

class Graph
{
public:
    Graph(ll vertex)
        : V(vertex)
    {
        adj = new vector<AdjListNode>[V];
        revadj = new vector<AdjListNode>[V];
    }

    void addEdge(ll u, ll v, ll weight)
    {
        AdjListNode node(v, weight);
        adj[u].PB(node);
    }

    void addEdgeSCC(ll u, ll v, ll weight)
    {
        AdjListNode node(u, weight);
        revadj[v].PB(node);
    }

    bool isCycle();
    // ll connectedComponents();
    vector<ll> traversal();
    vector<ll> topologicalSort();
    vector<ll> shortestPath(vector<ll> &topo, ll src);
    vector<ll> longestPath(vector<ll> &topo, ll src);
    ll sccKosaraju();
    void print(vector<ll> &ans);

private:
    ll V;
    vector<AdjListNode> *adj;
    vector<AdjListNode> *revadj;
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

// ll Graph::connectedComponents()
// {
//     //TODO:
//     auto bfs = [&](vector<bool> visited, ll src)
//     {
//         visited[src] = true;
//         queue<ll> storage;
//         storage.push(src);
//         while (!storage.empty())
//         {
//             src = storage.front();
//             storage.pop();
//             for (AdjListNode it : adj[src])
//             {
//                 if (!visited[it.getV()])
//                 {
//                     visited[it.getV()] = true;
//                     storage.push(it.getV());
//                 }
//             }
//         }
//     };

//     ll ans = 0;
//     vector<bool> visited(V, false);
//     for (ll i = 0; i < V; ++i)
//     {
//         if (!visited[i])
//         {
//             bfs(visited, i);
//         }
//     }
//     return ans;
// }

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

ll Graph::sccKosaraju()
{
    ll ans = 0;
    vector<bool> visited(V, false);
    vector<ll> stack(V);
    function<void(vector<bool> & visited, vector<ll> & stack, ll src)> dfsStack;
    dfsStack = [&](vector<bool> &visited, vector<ll> &stack, ll src)
    {
        visited[src] = true;
        for (AdjListNode it : adj[src])
        {
            if (!visited[it.getV()])
            {
                dfsStack(visited, stack, it.getV());
            }
        }
        stack.PB(src);
    };

    function<void(vector<bool> & visited, ll src)> dfs;
    dfs = [&](vector<bool> &visited, ll src)
    {
        visited[src] = true;
        cout << src << " ";
        for (AdjListNode it : revadj[src])
        {
            if (!visited[it.getV()])
            {
                dfs(visited, it.getV());
            }
        }
    };

    for (ll i = 0; i < V; ++i)
    {
        if (!visited[i])
        {
            dfsStack(visited, stack, i);
        }
    }

    vector<bool> visited2(V, false);
    char compo = 'A';
    for (ll i = stack.size() - 1; i >= 0; --i)
    {
        ll node = stack[i];
        if (!visited2[node])
        {
            cout << "Component " << compo << " --> ";
            dfs(visited2, node); //revGraph
            cout << "\n";
            compo++;
            ans++;
        }
    }
    cout << "SCC: ";
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
    for (ll i = 0; i < E; ++i)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
        g.addEdgeSCC(u, v, w);
    }
    vector<ll> topo = g.topologicalSort();
    vector<ll> shortest = g.shortestPath(topo, src);
    vector<ll> longest = g.longestPath(topo, src);
    vector<ll> trav = g.traversal();
    cout << boolalpha << g.isCycle() << "\n";
    cout << g.sccKosaraju() << "\n";
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
        static ll x = 1;
        cout << "Case #" << x << "\n";
        solve();
        cout << "\n";
        x++;
    }
    return 0;
}

//TODO: ===============================TESTCASES======================================
//TODO: ==============================================================================

//TestCase 1: ---->
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
// 6 10 1 ===
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

//Output 1 ->
// Case #1
// false
// Component A --> 0
// Component B --> 4
// Component C --> 5
// Component D --> 1
// Component E --> 2
// Component F --> 3
// SCC: 6
// 0 1 4 2 5 3
// 0 1 4 2 5 3
// 0 2 3 6 1 5
// 0 2 5 11 1 5

// Case #2
// false
// Component A --> 0
// Component B --> 1
// Component C --> 2
// Component D --> 3
// Component E --> 4
// Component F --> 5
// SCC: 6
// 0 1 2 3 4 5
// 0 1 2 3 4 5
// INF 0 2 6 5 3
// INF 0 2 9 8 10

// TESTCASE 2: ---->
// 1
// 7 8 0
// 2 1 0
// 1 0 0
// 0 2 0
// 0 3 0
// 3 5 0
// 5 6 0
// 6 3 0
// 3 4 0

//OUTPUT 2-->
// Case #1
// true
// Component A --> 0 1 2
// Component B --> 3 6 5
// Component C --> 4
// SCC: 3
// 0 2 3 1 5 4 6

// 0 INF INF INF INF INF INF
// 0 INF INF INF INF INF INF