#include<iostream>
using namespace std;
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubbleSort(int *arr, int n){
    // base case
    if(n==0 || n==1){
        return ;
    }
    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSort(arr,n-1);
}
int main(){
    int arr[5]={4,2,3,5,1};
    cout<<"Original Array : ";
    print(arr,5);
    bubbleSort(arr,5);
    cout<<"Sorted Array   : ";
    print(arr,5);
    return 0;
}