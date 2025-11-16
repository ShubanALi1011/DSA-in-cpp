#include<iostream>
#include<vector>
using namespace std;

// print vector
void print(vector<int> list){
    for(int i=0; i<list.size(); i++){
        cout<<list[i]<<" ";
    }
    cout<<endl;
}

vector<int> Intersection(vector<int> list1, vector<int> list2){
    int n = list1.size();
    int m = list2.size();
    vector<int> ans ;
    int i=0,j=0;
    while(i<n && j<m){
        if(list1[i]==list2[j]){
            ans.push_back(list1[i]);
            i++;
            j++;
        }
        else if(list1[i] < list2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> list1 = {1,2,2,3,4};
    vector<int> list2 = {2,2,3,3};
    vector<int> ans = Intersection(list1,list2);
    print(ans);
    return 0;
}