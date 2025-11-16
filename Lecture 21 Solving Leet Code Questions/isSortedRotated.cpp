#include<iostream>
#include<vector>
using namespace std;
bool check(vector<int> & nums){
    int count = 0;
    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]>nums[i]){
            count++;
        }
    }
    if(nums[nums.size()-1]>nums[0]){
        count++;
    }
    if(count <= 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {3,4,5,1,2};
    vector<int> c = {3,5,7,1,6};
    vector<int> d = {1,1,1,1,1};
    cout<<"a"<<" : "<<check(a)<<endl;
    cout<<"b"<<" : "<<check(b)<<endl;
    cout<<"c"<<" : "<<check(c)<<endl;
    cout<<"d"<<" : "<<check(d)<<endl;
    return 0;
}