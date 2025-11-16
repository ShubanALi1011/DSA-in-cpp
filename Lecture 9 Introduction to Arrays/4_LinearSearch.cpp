#include<iostream>
using namespace std;
bool isPresent(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]{1,3,5,7,9};
    int key;
    cout<<"Enter a Key : ";
    cin>>key;
    if(isPresent(arr,5,key)){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}