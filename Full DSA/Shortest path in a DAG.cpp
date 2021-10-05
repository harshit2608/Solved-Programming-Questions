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
    AdjListNode(int v, int weight)
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

    void shortestPath(ll src, stack<ll> &order, vector<ll> &topo, vector<ll> &ans)
    {
        ans[src] = 0;
        // while (order.empty() == false)
        // {
        //     int u = order.top();
        //     order.pop();

        //     vector<AdjListNode>::iterator i;
        //     if (ans[u] != INF)
        //     {
        //         for (i = adj[u].begin(); i != adj[u].end(); ++i)
        //         {
        //             if (ans[i->getV()] > ans[u] + i->getWeight())
        //             {
        //                 ans[i->getV()] = ans[u] + i->getWeight();
        //             }
        //         }
        //     }
        // }
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
    }

    void longestPath(ll src, vector<ll> &topo, vector<ll> &ans)
    {
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
    }

    void topologicalsort(stack<ll> &order, vector<ll> &topo)
    {
        vector<AdjListNode>::iterator j;
        vector<ll> indegree(V, 0);
        for (ll i = 0; i < V; ++i)
        {
            for (AdjListNode it : adj[i])
            {
                indegree[it.getV()]++;
            }
        }
        queue<int> q;
        for (int i = 0; i < V; ++i)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int f = q.front();
            order.push(f);
            topo.PB(f);

            q.pop();
            for (AdjListNode it : adj[f])
            {
                // AdjListNode node = *j;
                indegree[it.getV()]--;
                if (indegree[it.getV()] == 0)
                {
                    q.push(it.getV());
                }
            }
        }
    }

private:
    int V;
    vector<AdjListNode> *adj;
};

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

    bool visited[V + 1] = {false};
    stack<ll> order;
    vector<ll> topo;
    vector<ll> ans(V + 1, INF);
    for (ll i = 0; i < V; ++i)
    {
        ans[i] = INF;
    }
    g.topologicalsort(order, topo);

#ifndef ONLINE_JUDGE
    cout << "Stack topo ->\n";
    for (ll i = 0; i < order.size(); ++i)
    {
        cout << order.top() << " ";
        order.pop();
    }
    cout << "\n";
    cout << "vector topo->\n";
    for (ll i = 0; i < topo.size(); ++i)
    {
        cout << topo[i] << " ";
    }
    cout << "\nAns->\n";
#endif

    g.shortestPath(src, order, topo, ans);
    // g.longestPath(src, topo, ans);
    for (ll i = 0; i < V; ++i)
    {
        if (ans[i] == INF)
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

int main()
{
    fastIO;
#ifndef ONLINE_JUDGE
    cerr << "Hello";
#endif
    tc
    {
        solve();
    }
    return 0;
}