class Solution
{
ic:
    bool dfs(int node,  int c , vector<int> adj[ ], int  n, vector<int> &
    vis)
    { 
           
        if (c == n)
             return   true;
        
        vis[no de] = 1;      
            
        for (auto x : adj[node])
        {
            if (!vis[x] && dfs(x, c + 1, adj, n, vis))
            {
                return true;
            }
    }
        vis[node] = 0 ; 
        return false;
    }   
    
        
     bool check(int N, int M, vector<vector<int>> Edges)
     {
c        for (auto &v : Edges)
         {   
              adj[v[0]] .push_b ack(
        v[1]);
             a dj[v[1]].
            push_back(v[0]);
         }     
                
         vector<int> vis(N + 1, 0);
         for (int i = 1; i <= N; i++)
         {
             if (!vis[i])
             {
                if (dfs(i, 1, adj, N, vis))
                {
                    return true;
                }
            }
        }
        return false;
    }
};