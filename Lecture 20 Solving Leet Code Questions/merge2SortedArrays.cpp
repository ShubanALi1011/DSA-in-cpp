#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void mergeSorted(int *arr1, int n, int *arr2, int m, int *arr3){
    int i=0,j=0,k=0;

    // dono ma sy jo chota ha osy pehly dalo
    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // agr pehli array bach gahi ha to dalo
    while(i < n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // agr dusri array bach gahi ha to dal do
    while(j < m){
        arr3[k] = arr2[j];
        j++;
        k++;
    }
}
int main(){
    int arr1[5]={1,3,5,7,9};
    int arr2[5]={0,2,4,6,8};
    int arr3[10]={0};
    cout<<"Original Array1 is : "<<endl;
    print(arr1,5);
    cout<<"Original Array2 is : "<<endl;
    print(arr2,5);
    cout<<"Merged Sorted Array is : "<<endl;
    mergeSorted(arr1,5,arr2,5,arr3);
    print(arr3,10);
    return 0;
}