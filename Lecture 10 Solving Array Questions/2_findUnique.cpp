#include<iostream>
using namespace std;

// function to print array
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<i[arr]<<" ";
    }
    cout<<endl;
}

// function to find unique element 
int findUnique(int *arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[5]={4,2,3,4,2};
    int unique = findUnique(arr,5);
    print(arr,5);
    cout<<"Unique Element : "<<unique<<endl;
    return 0;
}