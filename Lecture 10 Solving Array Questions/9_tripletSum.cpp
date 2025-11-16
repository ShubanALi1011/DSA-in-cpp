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
vector<vector<int>> tripleSum(vector<int> list, int s){
    vector<vector<int>> ans ;
    for(int i=0; i<list.size(); i++){
        for(int j=i+1; j<list.size(); j++){
            for(int k=j+1; k<list.size(); k++){
                if(list[i]+list[j]+list[k]==s){
                    vector<int> temp;
                    temp.push_back(list[i]);
                    temp.push_back(list[j]);
                    temp.push_back(list[k]);
                    ans.push_back(temp);
                }
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
    vector<vector<int>> ans = tripleSum(list,s);
    print(ans);
    return 0;
}