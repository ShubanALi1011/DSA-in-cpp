#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}

void rotate(vector<int>& v, int k){
    vector<int> temp (v.size());
    for(int i=0; i<v.size(); i++){
        temp[(i+k)%v.size()]=v[i];
    }
    v = temp;
}

int main(){
    vector<int> v = {11,12,13,14,15};
    cout<<"Before Rotate"<<endl;
    print(v);
    rotate(v,2);
    cout<<"After Rotate"<<endl;
    print(v);
    return 0;
}