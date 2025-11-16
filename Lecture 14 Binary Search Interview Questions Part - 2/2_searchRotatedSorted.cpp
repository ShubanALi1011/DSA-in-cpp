#include<iostream> 
using namespace std;

int getPivot(int *arr, int n){
    int s = 0 ;
    int e = n-1 ;
    while(s < e){
        int mid = s + (e-s)/2;
        if(arr[mid] >= arr[0]){
            s = mid + 1;
        }
        else{
            e = mid ;
        }
    }
    return s;
}

bool binarySearch(int *arr, int s, int e, int key){
    while(s <= e){
        int mid = s + (e-s)/2;
        if(arr[mid] == key){
            return true;
        }
        else if(arr[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    return false;
}

int main(){
    int arr[5] = {7,9,1,2,3};
    int n = 5;
    bool isPresent;
    int key;
    cout << "Enter the key: ";
    cin >> key;

    int pivot = getPivot(arr, n);  

    if(key >= arr[pivot] && key <= arr[n-1]){ 
        isPresent = binarySearch(arr, pivot, n-1, key);
    }
    else{
        isPresent = binarySearch(arr, 0, pivot-1, key);
    }

    if(isPresent){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl;
    }
    
    return 0;
}
