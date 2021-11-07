#include <bits/stdc++.h>

using namespace std;

void helper(vector<int> adj[], int i, int c, bool &res, vector<int> &vis)
{
    if (vis[i] != -1 and vis[i] != c)
    {
        res = false;
        return;
    }
    if (vis[i] != -1 and vis[i] == c)
        return;
    vis[i] = c;
    int t;
    t = c == 0 ? 1 : 0;
    for (int j : adj[i])
    {
        helper(adj, j, t, res, vis);
    }
}

int main()
{
    // code
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int m;
        cin >> m;
        vector<int> vis(n + 1, -1);
        vector<int> adj[n + 1];
        for (int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        bool res = true;
        for (int i = 1; i <= n; i++)
        {
            if (vis[i] == -1)
            {
                helper(adj, i, 0, res, vis);
            }
        }
        if (res)
            cout << "yes";
        else
            cout << "no";
        cout << endl;
    }
    return 0;
}