#include <bits/stdc++.h>
using namespace std;
class Nstack{
    private:
        int *arr;
        int *top;
        int *next;
        int n;
        int s;
        int freespot;
    public:
        Nstack(int S, int N){
            s = S;
            n = N;
            arr = new int[s];
            next = new int[s];
            top = new int[n];
            
            for(int i=0; i<s; i++){
                next[i] = i+1;
            }
            next[s-1] = -1;
            
            for(int i=0; i<n; i++){
                top[i] = -1;
            }
            freespot = 0;
        }
        
        // push function
        bool push(int x, int m){
            if(freespot == -1)
                return false;
            
            // index nikalo
            int index = freespot;
            
            // freespot update kro
            freespot = next[index];
            
            // value insert kro
            arr[index] = x;
            
            // next ko update kro 
            next[index] = top[m-1];
            
            // top update kro
            top[m-1] = index;
            
            return true;
        }
        
        // pop function
        int pop(int m){
            if(top[m-1] == -1)
                return -1;
            
            int index = top[m-1];
            top[m-1] = next[index];
            next[index] = freespot;
            freespot = index;
            
            return arr[index];
        }
        ~Nstack(){
            delete[] arr;
            delete[] next;
            delete[] top;
        }
};
int main() {
	// your code goes here
    int N, S, Q;
    cin>>N>>S>>Q;
    
    Nstack stacks(S,N);
    while(Q--){
        int type;
        cin>>type;
        
        if(type == 1){
            int X, M;
            cin>>X>>M;
            cout<<(stacks.push(X,M) ? "True" : "False")<<endl;
        }else{
            int M;
            cin>>M;
            cout<<stacks.pop(M)<<endl;
        }
    }
    return 0;
}
