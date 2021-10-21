class Solution
{
public:
    int isNegativeWeightCycle(int n, vector<vector<int>> edges)
    {
        vector<int> dist(n, 0);
        dist[0] = 0;
        // fill
        for (int i = 0; i < n - 1; ++i)
        {
            bool flag = true;
            for (auto it : edges)
            {
                int u = it[0];
                int v = it[1];
                int w = it[2];
                if (dist[v] > dist[u] + w)
                {
                    dist[v] = dist[u] + w;
                    flag = false;
                }
            }
            if (flag)
            {
                break;
            }
        }

        for (auto it : edges)
        {
            int u = it[0];
            int v = it[1];
            int w = it[2];
            if (dist[v] > dist[u] + w)
            {
                return true;
            }
        }
        return false;
    }
};