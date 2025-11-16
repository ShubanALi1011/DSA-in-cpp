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
void insertionSort(int *arr, int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j ;
        for(j = i-1; j>=0; j--){
            if(arr[j]>temp){
                // shift
                arr[j+1] = arr[j];
            }
            else{
                // ruk jao
                break;
            }
        }
        arr[j+1] = temp;
    }
}
int main(){
    int arr[10];
    cout<<"Enter Array Elements ( max 10 ) : ";
    input(arr,10);
    cout<<endl;
    cout<<"Original Unsorted Array is    : ";
    print(arr,10);
    insertionSort(arr,10);
    cout<<endl;
    cout<<"After insertion Sort Array is : ";
    print(arr,10);
    return 0;
}