#include<iostream>
#include<unordered_map>
#include<list>
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
    return 0;
}