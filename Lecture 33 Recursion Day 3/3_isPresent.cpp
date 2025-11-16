#include<iostream>
using namespace std;
bool isPresent(int arr[], int n, int key){
    // base case 
    if(n==0){
        return 0;
    }
    bool remains;
    if(arr[0]==key){
        return 1;
    }
    else{
        remains = isPresent(arr+1,n-1,key);
    }
    return remains;
}
int main(){
    int arr[6] = {2,4,6,9,11,13};
    int key;
    cout<<"Enter key : ";
    cin>>key;
    bool check = isPresent(arr,6,key);
    if(check){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent "<<endl;
    }
    return 0;
}