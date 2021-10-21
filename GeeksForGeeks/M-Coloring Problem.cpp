bool isValid(int i, vector<int> &color, int col, vector<int> adj[])
{
    for (auto it : adj[i])
    {
        if (color[it] == col)
        {
            return false;
        }
    }
    return true;
}

bool isPos(int i, vector<int> &color, vector<int> adj[], int m, int V)
{
    if (i == V)
        return true;
    for (int col = 1; col <= m; col++)
    {
        if (isValid(i, color, col, adj))
        {
            color[i] = col;
            if (isPos(i + 1, color, adj, m, V))
                return true;
            color[i] = 0;
        }
    }
    return false;
}

bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    vector<int> adj[V];
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            if (graph[i][j] == 1)
            {
                adj[i].push_back(j);
                adj[j].push_back(i);
            }
        }
    }
    vector<int> color(V, 0);
    return isPos(0, color, adj, m, V);
}