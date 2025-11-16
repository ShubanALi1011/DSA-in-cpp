// if element is present then return index of that element 
// if element is not present then return -1

#include<iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid]==key){
            // mil gya 
            return mid;
        }
        else if(arr[mid]<key){
            // right part ma dekho
            start = mid+1;
        }
        else if(arr[mid]>key){
            // left part ma dekho
            end = mid-1;
        }
    }
    // nhi mila ?
    return -1;
}
int main(){
    int even[6]={0,2,4,6,8,10};
    int odd[5]={1,3,5,7,9};
    cout<<"Even -> Element present at index : "<<binarySearch(even,6,0)<<endl;
    cout<<"Odd -> Element present at index : "<<binarySearch(odd,5,10)<<endl;
    return 0;
}