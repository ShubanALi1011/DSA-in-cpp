#include<iostream>
using namespace std;

// function to input array
void input(int arr[], int n){
    cout<<"Enter youre Array :  ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
}

// function to print array
void print(int arr[], int n){
     for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

// function to get max
int getMax(int arr[], int n){
    int max = -2147483648;
    for(int i=0; i<n; i++){
        if(arr[i] > max){
        max = arr[i];
    }
    }
    return max;
}

// function to get min
int getMin(int arr[], int n){
    int min = 2147483647;
    for(int i=0; i<n; i++){
        if(arr[i] < min){
        min = arr[i];
    }
    }
    return min;
}

int main(){
    int arr[8];
    input(arr,8);
    cout<<endl<<endl<<"Youre array is :  ";
    print(arr,8);
    cout<<endl;
    cout<<"Maximum : "<<getMax(arr,8)<<endl;
    cout<<"Minimum : "<<getMin(arr,8)<<endl;
    return 0;
}