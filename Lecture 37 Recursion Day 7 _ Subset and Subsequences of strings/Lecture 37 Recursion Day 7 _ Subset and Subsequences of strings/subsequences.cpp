#include<iostream>
#include<vector>
#include<string>
using namespace std;

void solve(string str, vector<string> output, int index, vector<vector<string>> &ans){
    // base case 
    if(index >= str.length()){
        // empty subset not include 
        if(output.size() > 0 ){
            ans.push_back(output);
        }
        return ;
    }

    // exclude
    solve(str,output,index+1,ans);

    // include
    char ch = str[index];
    output.push_back(string(1,ch)); // converted to string
    solve(str,output,index+1,ans);

}


vector<vector<string>> subsequences(string str){
    vector<vector<string>> ans;
    vector<string> output;
    int index = 0;
    solve(str,output,index,ans);
    return ans;
}
using namespace std;
int main(){
    string str = "abc";
    cout<<"Original string is "<<endl;
    cout<<str<<endl;
    vector<vector<string>> ans = subsequences(str);
    cout<<"Subsequences of string are "<<endl;
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}