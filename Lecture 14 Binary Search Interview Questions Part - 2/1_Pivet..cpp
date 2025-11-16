#include<iostream>
using namespace std;

int getPivet(int *arr, int n){
    int s = 0 ;
    int e = n-1 ;
    while(s<e){
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid+1;
        }
        else{
            e = mid ;
        }
    }
    return s;
}
int main(){
    int arr[5] = {7,9,1,2,3};
    int pivet = getPivet(arr,5);
    cout<<"Pivet at index : "<<pivet<<endl;
    return 0;
}