#include<iostream>
using namespace std;

bool isPossible(int *arr, int n, int mid, int painters){
    int painterCount = 1 ;
    int board = 0 ;
    for(int i=0 ; i<n; i++){
        if(board+arr[i] <= mid){
            board+=arr[i];
        }
        else{
            painterCount++;
            if(painterCount > painters || arr[i] > mid){
                return false;
            }
        }
        board = arr[i];
    }
    return true ;
}

int paintersPartition(int *arr, int n, int painters){
    int s = 0 ;
    int ans = -1;
    int sum = 0 ;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int e = sum ;
    while(s<=e){
        int mid = s + (e-s)/2 ;
        if(isPossible(arr,n,mid,painters)){
            ans = mid ;
            e = mid - 1 ;
        }
        else{
            s = mid + 1 ;
        }
    }
    return ans ;
}
int main(){
    int arr[4] = {5,5,5,5};
    int painters = 2 ;
    int ans = paintersPartition(arr,4,painters);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}