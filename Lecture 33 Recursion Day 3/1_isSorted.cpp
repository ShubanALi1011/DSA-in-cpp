#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    // base case
    if(n==0 || n==1){
        return 1;
    }
    bool ans;
    if(arr[0]>arr[1]){
        return 0;
    }
    else{
        ans = isSorted(arr+1,n-1);
    }
    return ans;
}
int main(){
    int arr[6] = {2,4,6,9,11,13};
    bool check = isSorted(arr,6);
    if(check){
        cout<<"Sorted "<<endl;
    }
    else{
        cout<<"Un Sorted "<<endl;
    }
    return 0;
}