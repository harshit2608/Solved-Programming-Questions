class Solution
{
public:
    bool bfs(vector<vector<int>> & graph,int src, int dest,vector<int>&parent,int N)
    {
        vector<bool> visited(N,false);
        queue<int>q;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;
        while(!q.empty())
        {
            int curr = q.front();
            q.pop();
            for(int itr =0 ;itr<N;++itr)
            {
                if(!visited[itr] && graph[curr][itr] > 0)
                {
                    q.push(itr);
                    visited[itr] = true;
                    parent[itr] = curr;
                }
            }
        }
        return (visited[dest] == true);
    }
    
    int edmanKarp(vector<vector<int>> &graph,int src, int dest, int N)
    {
        int ans = 0;
        vector<int> parent(N,-1);
        while(bfs(graph,src,dest,parent,N))
        {
            int flow = INT_MAX,prev = 0;
            for(int i = dest; i!=src;i = parent[i])
            {
                prev = parent[i];
                flow = min(flow,graph[prev][i]);
            }
            
            for(int i = dest; i!=src;i = parent[i])
            {
                prev = parent[i];
                graph[prev][i] -= flow;
                graph[i][prev] += flow;
            }
            ans+=flow;
        }
        
        return ans;
    }
    
    int solve(int N,int M,vector<vector<int>> Edges)
    {
        int ans = 0;
        vector<vector<int>> graph(N,vector<int>(N,0));
        for(auto it:Edges)
        {
            int u = it[0]-1;
            int v = it[1]-1;
            int wt = it[2];
            
            graph[u][v] += wt;
            graph[v][u] += wt;
        }
        
        return edmanKarp(graph,0,N-1,N);
    }
};