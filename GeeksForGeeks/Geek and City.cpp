#include <bits/stdc++.h>

using namespace std;

void DFS(vector<int> adj[], int N, int u, vector<bool> &visited)
{
    visited[u] = true;

    for (auto v : adj[u])
    {
        if (visited[v] == false)
        {
            DFS(adj, N, v, visited);
        }
    }
}

int geekAndCity(vector<int> adj[], int N)
{
    vector<bool> visited(N, false);

    int countIsland = 0;

    for (int i = 0; i < N; i++)
    {
        if (visited[i] == false)
        {
            DFS(adj, N, i, visited);
            countIsland++;
        }
    }

    return countIsland - 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int T;
    cin >> T;

    while (T--)
    {
        int N, M;
        cin >> N >> M;

        vector<int> adj[N];

        while (M--)
        {
            int u, v;
            cin >> u >> v;

            adj[u - 1].push_back(v - 1);
            adj[v - 1].push_back(u - 1);
        }

        cout << geekAndCity(adj, N) << "\n";
    }

    return 0;
}