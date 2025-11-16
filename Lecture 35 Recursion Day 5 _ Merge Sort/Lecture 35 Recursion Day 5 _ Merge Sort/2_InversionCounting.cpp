#include<iostream>
using namespace std;

// function to print an array 
void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " "; 
    }
    cout << endl;
}

// function to merge and sort arrays, also counting inversions
int merge(int *arr, int s, int e){
    int mid = s + (e - s) / 2;
    int len1 = mid - s + 1;
    int len2 = e - mid;
    
    int *first = new int[len1];
    int *second = new int[len2];

    // copy values to temporary arrays
    int mainArrayIndex = s;
    for(int i = 0; i < len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid + 1;
    for(int i = 0; i < len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // merge and sort 2 arrays and count inversions
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;
    int inversionCount = 0; // to count inversions

    while(index1 < len1 && index2 < len2){
        if(first[index1] <= second[index2]){ // Change '<' to '<=' to prevent unnecessary inversions
            arr[mainArrayIndex++] = first[index1++];
        } else {
            arr[mainArrayIndex++] = second[index2++];
            inversionCount += (len1 - index1); // Counting inversions
        }
    }

    // Check if any elements are left in the first array
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }

    // Check if any elements are left in the second array
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    // Free dynamic memory
    delete[] first;
    delete[] second;

    return inversionCount;
}

// recursive function to mergeSort and count inversions
int mergeSort(int *arr, int s, int e){
    // base case
    if(s >= e){
        return 0;
    }
    
    int mid = s + (e - s) / 2;

    // sort left half and count inversions
    int inversionCount = mergeSort(arr, s, mid);

    // sort right half and count inversions
    inversionCount += mergeSort(arr, mid + 1, e);

    // count inversions during merge process
    inversionCount += merge(arr, s, e);

    return inversionCount;
}

// main function
int main(){
    int arr[5] = {3, 2, 4, 5, 1};
    int n = 5;
    
    print(arr, n); // print original unsorted array
    
    // call mergeSort and count inversions
    int inversionCount = mergeSort(arr, 0, n - 1);
    
    // output sorted array
    cout << "Merge Sorted Array is : ";
    print(arr, n);
    
    // output the inversion count 
    cout << "Total Inversions : " << inversionCount << endl;

    return 0;
}
