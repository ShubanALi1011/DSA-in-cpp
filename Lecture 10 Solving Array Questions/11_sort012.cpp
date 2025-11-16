#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sort012(int *arr, int n) {
    int low = 0, mid = 0, high = n - 1;
    
    while(mid <= high) {
        switch(arr[mid]) {
            case 0:
                swap(arr[low], arr[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high]);
                high--;
                break;
        }
    }
}

int main(){
    int arr[9] = {2, 1, 1, 0, 0, 2, 1, 2, 0};
    print(arr,9);
    sort012(arr, 9);
    print(arr, 9);
    return 0;
}
