#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void sort01(int *arr, int n){
    int i=0,j=n-1;
    while(i<=j){
        while(arr[i]==0){
            i++;
        }
        while(arr[j]==1){
            j--;
        }
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[6] = {1,0,1,0,1,0};
    print(arr,6);
    sort01(arr,6);
    print(arr,6);
    return 0;
}