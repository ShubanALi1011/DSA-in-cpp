#include<iostream>
#include<algorithm>
using namespace std;
void print(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={1,2,3};
    int arr3[5]={0};
    int arr4[5];
    int size = 5;
    int value = 1;
    // entire array to intialize same element 
    fill(arr4,arr4 + size, value);

    // printing
    cout<<"arr1 : ";
    print(arr1,5);
    cout<<endl<<"arr2 : ";
    print(arr2,5);
    cout<<endl<<"arr3 : ";
    print(arr3,5);
    cout<<endl<<"arr4 : ";
    print(arr4,5);
    cout<<endl;
    return 0;
}