class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // make adj list
        unordered_map<int, list<int>> adj;
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        // count indegree
        vector<int> indegree(V);
        for(auto i:adj){
            for(auto j:i.second){
                indegree[j]++;
            }
        }
        
        // push 0 degree in queue
        queue<int> q;
        for(int i=0; i<V; i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        // bfs
        vector<int> ans;
        while(!q.empty()){
            int frontNode = q.front();
            q.pop();
            
            ans.push_back(frontNode);
            
            for(auto nei:adj[frontNode]){
                indegree[nei]--;
                if(indegree[nei] == 0){
                    q.push(nei);
                }
            }
        }
        return ans;
    }
};