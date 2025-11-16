#include<iostream>
using namespace std;

bool isPresent(int arr[][3], int row, int col, int target){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    int key;
    cout<<"Enter key 1-9 : ";
    cin>>key;
    if(isPresent(arr,3,3,key)){
        cout<<"Mil Gya"<<endl;
    }
    else{
        cout<<"Nhi Mila"<<endl;
    }
    return 0;
}