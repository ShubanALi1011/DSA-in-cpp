#include<iostream>
#include<vector>
using namespace std;

void solve(string str, vector<string> &ans, int index){
    // base case
    if(index >= str.size()){
        ans.push_back(str);
        return ;
    }

    for(int j=index; j<str.size(); j++){
        swap(str[index],str[j]);
        solve(str,ans,index+1);
        // back track
        swap(str[index],str[j]);
    }
}
vector<string> permute(string str){
    vector<string> ans;
    int index = 0;
    solve(str,ans,index);
    return ans;
}
int main(){
    string str = "abc";
    cout<<"Original string is : "<<"'"<<str<<"'"<<endl;
    vector<string> ans = permute(str);
    cout<<"Permutations are ->>"<<endl;
    for(int i=0; i<ans.size();i++){
        cout<<i+1<<" : "<<ans[i]<<endl;
    }
    return 0;
}