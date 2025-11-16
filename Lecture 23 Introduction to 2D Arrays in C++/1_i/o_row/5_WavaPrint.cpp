#include<iostream>
using namespace std;

void print(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void wavePrint(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        if(i&1){
            for(int j=col-1; j>=0; j--){
                cout<<arr[j][i]<<"  ";
            }
            cout<<endl;
        }
        else{
            for(int j=0; j<col; j++){
                cout<<arr[j][i]<<"  ";
            }
            cout<<endl;
        }
    }
}
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Org 2D Array is : -"<<endl;
    print(arr,3,3);
    cout<<"After Wava Print"<<endl;
    wavePrint(arr,3,3);
    return 0;
}