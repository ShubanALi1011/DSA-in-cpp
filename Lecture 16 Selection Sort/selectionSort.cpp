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
void selectionSort(int *arr, int n){
    for(int i=0; i<n-1; i++){
        int minIndex = i ;
        for(int j=i+1; j<n; j++){
            if(arr[minIndex] > arr[j]){
                minIndex = j ;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main(){
    int arr[10];
    cout<<"Enter Array Elements ( max 10 ) : ";
    input(arr,10);
    cout<<endl;
    cout<<"Original Unsorted Array is    : ";
    print(arr,10);
    selectionSort(arr,10);
    cout<<endl;
    cout<<"After selection Sort Array is : ";
    print(arr,10);
    return 0;
}