#include<iostream>
using namespace std;

bool binarySearch(int arr[], int s, int e, int key){
    // base case 
    if(s > e){
        // sara dekh lia nhi mila 
        return false;
    }
    int mid = s + (e-s)/2;
    if(arr[mid]==key){
        // mil gya
        return true;
    }
    if(arr[mid]<key){
        // right side dekho
        return binarySearch(arr,mid+1,e,key);
    }
    else if(arr[mid]>key){
        // left side dekho
        return binarySearch(arr,s,mid-1,key);
    }
    return false;
}
int main(){
    int arr[5]={1,3,5,7,9};
    bool present = binarySearch(arr,0,4,10);
    if(present){
        cout<<"Mil gya "<<endl;
    }
    else{
        cout<<"Nhi mila"<<endl;
    }
}