#include<iostream>
using namespace std;

// function to print an array 
void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

// merge function
void merge(int *arr, int s, int e){
    int mid = s + (e-s)/2 ;
    int len1 = mid - s + 1 ;
    int len2 = e - mid ;
    int *first = new int[len1];
    int *second = new int[len2];
    //copy values 

    int mainArrayIndex = s;
    // left ma copy krdo
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    // right ma copy krdo 
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // dono ko sort or merge krdo
    int index1 = 0 ;
    int index2 = 0 ;
    mainArrayIndex = s ;

    while(index1 < len1 && index2 < len2){
        if(first[index1] < second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }

    // left ko check kro kuch reh gya kya ?
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    // right ko check kro kuch reh gya kya ?
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    // delete dynamic allocated memory 
    delete[] first;
    delete[] second;

}

// recursive function of merge sort
void mergeSort(int *arr, int s, int e){
    // base case
    if(s >= e){
        return ;
    }
    int mid = s + (e-s)/2 ;
    // left part sort krna ha 
    mergeSort(arr,s,mid);
    // right part sort krna ha 
    mergeSort(arr,mid+1,e);
    // dono ko merge krna ha 
    merge(arr,s,e);
}


// main function 
int main(){
    int arr[5] = {2,5,3,1,4};
    int n = 5;
    cout<<"Original Array is     : ";
    print(arr,n);
    // calling mergeSort
    mergeSort(arr,0,n-1);
    cout<<"Merge Sorted Array is : ";
    print(arr,n);
    return 0;
}