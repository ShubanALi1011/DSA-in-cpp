#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;

bool isPossible(vector<int> stalls, int cows , int mid){
    int countCow = 1;
    int lastPos = stalls[0];
    for(int i=0; i<stalls.size();i++){
        if(stalls[i]-lastPos >= mid){
            countCow++;
            if(countCow == cows){
                return true ;
            }
            lastPos = stalls[i];
        }
    }
    return false ;
}
int agressiveCows(vector<int> &stalls, int cows){
    sort(stalls.begin(),stalls.end());
    int s = 0 ;
    int maxi = -1 ;
    for(int i=0; i<stalls.size();i++){
        maxi = max(maxi,stalls[i]);
    }
    int e = maxi ;
    int ans = -1 ;
    while(s<=e){
        int mid = s + (e-s)/2 ;
        if(isPossible(stalls,cows,mid)){
            ans = mid ;
            s = mid + 1 ;
        }
        else{
            e = mid - 1;
        }
    }
    return ans ;
}
int main(){
    vector<int> stalls = {4,2,1,3,6};
    int cows = 2;
    int ans = agressiveCows(stalls,cows);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}