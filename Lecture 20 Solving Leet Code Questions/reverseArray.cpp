#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int *arr, int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Original Array is : "<<endl;
    print(arr,5);
    cout<<"Reversed Array is : "<<endl;
    reverseArray(arr,5);
    print(arr,5);
    return 0;
}