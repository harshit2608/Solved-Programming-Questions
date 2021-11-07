#include <bits/stdc++.h>
using namespace std;

#define PI 3.1415926535897932384626
#define mod int(1e9 + 7)
#define ll long long
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

void DFS(vector<int> adj[], int src, int dest, int prev_len, int *max_len, vector<bool> &visited)
{
    if (src == dest)
    {
        return;
    }
    visited[src] = 1;
    int curr_len = 0;
    for (auto it : adj[src])
    {
        if (!visited[src])
        {
            curr_len = prev_len + 1;
            DFS(adj, it, dest, curr_len, max_len, visited);
        }
    }
    if ((*max_len) < curr_len)
        *max_len = curr_len;

    curr_len = 0;
}

int distance(vector<int> adj[], int n, int *hideouts, int h)
{

    int max_len = INT_MIN;
    vector<bool> visited(n, false);
    int ans = 0;
    for (int i = 0; i < h; i++)
    {
        int node = hideouts[i];
        for (int j = i + 1; j < h; ++j)
        {
            int dest = hideouts[j];
            if (!visited[node])
            {
                DFS(adj, node, dest, 0, &max_len, visited);
            }
        }
        ans += max_len;
    }

    return ans;
}

void floydWarshall(vector<vector<int>> &adjMatrix)
{
    int V = adjMatrix.size();
    int dist[V][V], i, j, k;

    /* Initialize the solution matrix same
    as input graph matrix. Or we can say
    the initial values of shortest distances
    are based on shortest paths considering
    no intermediate vertex. */
    for (i = 0; i < V; i++)
        for (j = 0; j < V; j++)
            dist[i][j] = adjMatrix[i][j];

    for (k = 0; k < V; k++)
    {

        for (i = 0; i < V; i++)
        {

            for (j = 0; j < V; j++)
            {

                if (dist[i][j] > (dist[i][k] + dist[k][j]) && (dist[k][j] != INF && dist[i][k] != INF))
                    dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }
}
vector<vector<int>> convert(vector<int> adj[], int V)
{
    // Initialize a matrix
    vector<vector<int>> matrix(V, vector<int>(V, 0));

    for (int i = 0; i < V; i++)
    {
        for (auto j : adj[i])
            matrix[i][j] = 1;
    }
    return matrix;
}

int main()
{
    // n is number of cities
    fastIO;
    ll N, H;
    cin >> N >> H;
    int hideouts[H];
    for (int i = 0; i < H; ++i)
    {
        cin >> hideouts[i];
    }

    vector<int> adj[N];
    for (ll i = 0; i < N; ++i)
    {
        ll u, v, w;
        w = 1;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<vector<int>> adjMatrix = convert(adj, N);
    for (int i = 0; i < adjMatrix.size(); ++i)
    {
        for (int j = 0; j < adjMatrix.size(); ++j)
        {
            i
        }
    }
    // cout << distance(adj, N, hideouts, H);

    return 0;
}
