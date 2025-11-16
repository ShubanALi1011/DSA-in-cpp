#include<iostream>
#include<algorithm>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

void swapArray(int arr[], int n){
    int start = 0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<"Original Array is : ";
    print(arr,5);
    cout<<endl;
    cout<<"Swaped Array is   : ";
    swapArray(arr,5);
    print(arr,5);
    cout<<endl;
    return 0;
}