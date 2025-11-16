#include<iostream>
using namespace std;

void print(int *arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int partition(int *arr, int s, int e){
    int pivet = arr[s] ;
    int count = 0 ;
    for(int i=s+1; i<=e; i++){
        if(arr[i] < pivet){
            count++;
        }
    }

    // place pivet at right position
    int pivetIndex = s + count ;
    swap(arr[pivetIndex],arr[s]);

    // left and right part smbhal lety hn
    int i=s, j=e;
    while(i < pivetIndex && j > pivetIndex){
        // agr left side already sort ha 
        while(arr[i] < pivet){
            i++ ;
        }

        // agr right side already sort ha 
        while(arr[j] > pivet){
            j-- ;
        }

        if(i < pivetIndex && j > pivetIndex){
            swap(arr[i],arr[j]);
            i++ ;
            j-- ;
        }
    }

    return pivetIndex ;
}

void quickSort(int *arr, int s, int e){
    // base case
    if(s >=e ){
        return ;
    }
    int p = partition(arr,s,e);

    // left part sort karu recursion sy 
    quickSort(arr,0,p-1);

    // right part sort karo recursion sy 
    quickSort(arr,p+1,e);
}


int main(){
    int arr[6] = {3,5,1,8,2,4};
    int n = 6 ;
    cout<<"Array before quickSort : ";
    print(arr,n);

    cout<<"Array after quickSort  : ";
    quickSort(arr,0,n-1);
    print(arr,n);
    return 0;
}