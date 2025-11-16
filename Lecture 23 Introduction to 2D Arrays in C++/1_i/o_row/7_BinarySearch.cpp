#include<iostream>
using namespace std;
bool binarySearch(int arr[][3], int row, int col, int target){
    int start = 0;
    int end = row*col-1;
    while(start <= end){
        int mid = start + (end-start)/2;
        int element = arr[mid/col][mid%col];

        if(element == target){
            return true;
        }

        if(element < target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return false;
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter key [1-9] : ";
    cin>>key;
    if(binarySearch(arr,3,3,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}