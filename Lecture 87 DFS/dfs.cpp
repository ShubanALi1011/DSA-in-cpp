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
        vector<int> dfs() {
            // code here
            int v = adj.size();
            unordered_map<int, bool> visited;
            vector<int> ans;

            for(int i=0; i<v; i++){
                if(!visited[i]){
                    dfsR(adj, visited, ans, i);
                }
            }

            return ans;
        }
        // dfs helper
        void dfsR(unordered_map<int, list<int>>& adj, unordered_map<int, bool>& visited, vector<int>& ans, int node){
            ans.push_back(node);
            visited[node] = true;

            for(auto i:adj[node]){
                if(!visited[i]){
                    dfsR(adj, visited, ans, i);
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
    vector<int> res = g.dfs();
    for(auto i:res){
        cout<<i<<" ";
    }
    cout<<endl<<endl;
    return 0;
}