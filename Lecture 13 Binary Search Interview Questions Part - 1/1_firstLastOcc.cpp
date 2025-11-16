#include<iostream>
using namespace std;

int firstOcc(int *arr, int n, int key){
    int s = 0 ;
    int e = n-1 ;
    int ans = -1 ;
    while(s <= e){
        int mid = s + (e-s)/2 ;
        if(arr[mid]==key){
            ans = mid ;
            e = mid - 1;
        }
        else if(arr[mid] < key){
            s = mid + 1 ;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}

int lastOcc(int *arr, int n, int key){
    int s = 0 ;
    int e = n-1 ;
    int ans = -1 ;
    while(s <= e){
        int mid = s + (e-s)/2 ;
        if(arr[mid]==key){
            ans = mid ;
            s = mid + 1;
        }
        else if(arr[mid] < key){
            s = mid + 1 ;
        }
        else if(arr[mid] > key){
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[5] = {1,2,3,3,5};
    cout<<"First Occ at index : "<<firstOcc(arr,5,3)<<endl;
    cout<<"Last Occ at index : "<<lastOcc(arr,5,3)<<endl;
    cout<<"Total Occ of the Digit : "<<lastOcc(arr,5,3)-firstOcc(arr,5,3)+1<<endl;
    return 0;
}