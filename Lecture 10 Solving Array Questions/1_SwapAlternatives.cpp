#include<iostream>
using namespace std;

// function to print array
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// function to swap alternatives 
void swapAlter(int *arr, int n){
    for(int i=0; i<n; i+=2){
        if((i+1)<n){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[5] = {2,1,4,3,5};
    cout<<"Orginal Array is : ";
    print(arr,5);
    swapAlter(arr,5);
    cout<<"Swaped Array is  : ";
    print(arr,5);
    return 0;
}