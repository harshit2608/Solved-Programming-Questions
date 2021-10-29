class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& prerequisites)
	{
	    vector<bool> visited(N,false), recStack(N,false);
	    vector<int> adj[N];
	    for(auto itr: prerequisites)
	    {
	        adj[itr.first].push_back(itr.second);
	    }
	    
	    function<bool(vector<bool>& visited, vector<bool>&recStack, int src,vector<int> adj[])> dfs;
	    dfs = [&](vector<bool>& visited, vector<bool>&recStack, int src,vector<int> adj[])
	    {
	        visited[src] = true;
	        recStack[src] = true;
	        for(auto it:adj[src])
	        {
	            if(!visited[it] && dfs(visited,recStack,it,adj) == true) 
	            {
	                //if(dfs(visited,recStack,it,adj) == true)
	                    return true;
	            }
	            else if(recStack[it] == true)
	            {
	                return true;
	            }
	        }
	        recStack[src] = false;
	        return false;
	    };
	    
	    for(int i =0;i<N;++i)
	    {
	        if(!visited[i] && dfs(visited,recStack,i,adj) == true)
	        {
	            return false;
	        }
	    }
	    return true;
	}
};