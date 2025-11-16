#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// print vector of vector
void print(vector<vector<int>> list){
    for(int i=0; i<list.size(); i++){
        for(int j=0; j<list[i].size(); j++){
            cout<<list[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
vector<vector<int>> pairSum(vector<int> list, int s){
    vector<vector<int>> ans ;
    for(int i=0; i<list.size(); i++){
        for(int j=i+1; j<list.size(); j++){
            if(list[i]+list[j]==s){
                vector<int> temp;
                temp.push_back(min(list[i],list[j]));
                temp.push_back(max(list[i],list[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}
int main(){
    vector<int> list = {1,2,3,4,5};
    int s ;
    cout<<"Enter sum target : ";
    cin>>s;
    vector<vector<int>> ans = pairSum(list,s);
    print(ans);
    return 0;
}