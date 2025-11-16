#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}

void moveZero(int *arr, int n){
    int i=0;
    for(int j=0; j<n; j++){
        if(arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[5]= {0,1,0,2,3};
    cout<<"Array before move zero : "<<endl;
    print(arr,5);
    cout<<"Array after move zero : "<<endl;
    moveZero(arr,5);
    print(arr,5);
    return 0;
}