SC: O(n)
TC:O(n)+O(2E)

void dfs(vector<int> adj[],vector<int>&visited,vector<int>&ans,int vertex){
        visited[vertex]=1;
        ans.push_back(vertex);
        for(auto x:adj[vertex]){
            if(visited[x]!=1){
                dfs(adj,visited,ans,x);
            }
        }
        
    }
    
    vector<int> dfsOfGraph(int v, vector<int> adj[]) {
        vector<int>visited(v);
        vector<int>ans;
        dfs(adj,visited,ans,0);
        return ans;
        
    }
