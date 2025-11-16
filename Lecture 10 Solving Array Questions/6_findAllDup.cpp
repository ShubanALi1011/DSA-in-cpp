#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> allDupliactes(vector<int> list){
    vector<int> temp;
    for(int i=0; i<list.size(); i++){
        int count = 1;
        for(int j=i+1; j<list.size();j++){
            if(list[i]==list[j]){
                count++;
            }
        }
        if(count > 1){
            temp.push_back(list[i]);
        }
    }
    return temp;
}
int main(){
    vector<int> list = {1,2,3,4,5,2,3};
    vector<int> duplicate = allDupliactes(list);
    for(int i=0; i<duplicate.size(); i++){
        cout<<duplicate[i]<<" ";
    }
    cout<<endl;
    return 0;
}