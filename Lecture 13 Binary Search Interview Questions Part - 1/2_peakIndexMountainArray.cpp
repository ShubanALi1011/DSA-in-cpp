#include<iostream>
using namespace std;

int peakIndexMountainArray(int *arr, int n){
    int s = 0 ;
    int e = n-1 ;
    while(s<e){
        int mid = s + (e-s)/2 ;
        if(arr[mid] < arr[mid+1]){
            s = mid + 1 ;
        }
        else{
            e = mid ;
        }
    }
    return s;
}
int main(){
    int arr[4] = {3,4,5,1};
    int peak = peakIndexMountainArray(arr,4);
    cout<<"Peak Element at index : "<<peak<<endl;
    return 0;
}