#include<iostream>
#include<unordered_map>
#include<list>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;

class Graph{
    private:
        unordered_map<int, list<int>> adj;
    public:
        void addEdge(int u, int v, bool direction){
            // direction -> 0 undirected
            // direction -> 1 directed

            // create an edge from u to v
            adj[u].push_back(v);

            if(!direction)
                adj[v].push_back(u);
        }

        void printAdjList(){
            for(auto i:adj){
                cout<<i.first<<" -> ";
                for(auto j:i.second){
                    cout<<j<<" , ";
                }
                cout<<endl;
            }
        }

        // bfs
        vector<int> bfs() {
            // code here
            vector<int> ans;
            unordered_map<int, bool> visited;
            int vertex = adj.size();
            
            for(auto i:adj){
                int node = i.first;
                if(!visited[node]){
                    solve(adj, visited, ans, node);
                }
            }
            return ans;
        }
        // bfs helper
        void solve(unordered_map<int, list<int>> adj, unordered_map<int, bool>& visited, vector<int>& ans, int node){
            queue<int> q;
            q.push(node);
            visited[node] = true;
            
            while(!q.empty()){
                int frontNode = q.front();
                q.pop();
                
                ans.push_back(frontNode);
                
                for(auto i:adj[frontNode]){
                    if(!visited[i]){
                        q.push(i);
                        visited[i] = true;
                    }
                }
            }
        }
};
int main(){
    Graph g;
    int m;
    cout<<"Enter number of edges : ";
    cin>>m;
    for(int i=0; i<m; i++){
        int u,v;
        cin>>u>>v;
        // create adj list
        g.addEdge(u,v,0);
    }
    cout<<endl<<endl;
    g.printAdjList();
    cout<<endl<<endl;
    vector<int> res = g.bfs();
    sort(res.begin(), res.end());
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    return 0;
}