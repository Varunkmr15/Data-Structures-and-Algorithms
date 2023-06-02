// TC:O(n)+O(2E)
// SC:O(n)

vector<int> bfsOfGraph(int v, vector<int> adj[]) {
        vector<int>visited(v),ans;
        visited[0]=1;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int vertex=q.front();
            q.pop();
            ans.push_back(vertex);
            for(auto x:adj[vertex]){
                if(visited[x]!=1){
                    visited[x]=1;
                    q.push(x);
                }
            }
            
        }
        return ans;
    }
