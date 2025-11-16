#include<iostream>
using namespace std;

int findDuplicate(int *arr, int n){
    int ans = 0 ;
    // Xor ing all array elements
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    // xor [1 - n-1]
    for(int i=0; i<n; i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    int arr[5]= {1,2,3,4,3};
    int ans = findDuplicate(arr,5);
    cout<<"Ans : "<<ans<<endl;
    return 0;
}