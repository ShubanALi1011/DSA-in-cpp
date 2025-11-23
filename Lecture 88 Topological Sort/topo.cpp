class Solution {
  private:
    void topologicalSort(unordered_map<int, list<int>>& adj, vector<int>& visited, stack<int>& s, int node){
        visited[node] = true;
        
        for(auto nei : adj[node]){
            if(!visited[nei]){
                topologicalSort(adj, visited, s, nei);
            }
        }
        s.push(node);
    }
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // make adjancy list
        unordered_map<int, list<int>> adj;
        for(int i=0; i<edges.size(); i++){
            int u = edges[i][0];
            int v = edges[i][1];
            
            adj[u].push_back(v);
        }
        
        vector<int> visited(V, false);
        stack<int> s;
        // call topological sort utility fun for every node
        for(int i=0; i<V; i++){
            if(!visited[i]){
                topologicalSort(adj, visited, s, i);
            }
        }
        vector<int> ans;
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;
    }
};