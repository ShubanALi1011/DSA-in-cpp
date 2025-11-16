#include<iostream>
using namespace std;

// function to input array
void input(int *arr, int n){
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

// function to print array
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// function to sort an array using selection sort algorithm 
void bubbleSort(int *arr, int n){
    bool swaped = false ;
    for(int i=1; i<n; i++){
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swaped = true ;
            }
        }
        if(swaped == false){
                break ;
            }        
    }
}
int main(){
    int arr[10];
    cout<<"Enter Array Elements ( max 10 ) : ";
    input(arr,10);
    cout<<endl;
    cout<<"Original Unsorted Array is    : ";
    print(arr,10);
    bubbleSort(arr,10);
    cout<<endl;
    cout<<"After bubble Sort Array is : ";
    print(arr,10);
    return 0;
}