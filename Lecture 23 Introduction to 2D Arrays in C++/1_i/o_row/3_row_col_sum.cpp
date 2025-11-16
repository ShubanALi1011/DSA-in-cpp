#include<iostream>
using namespace std;

void print(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void printSumRow(int arr[][3], int row, int col){
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        cout<<"Sum of row "<<i<<" is : "<<sum<<endl;
    }
}

void printSumCol(int arr[][3], int row, int col){
    for(int j=0; j<row; j++){
        int sum=0;
        for(int i=0; i<col; i++){
            sum+=arr[i][j];
        }
        cout<<"Sum of col "<<j<<" is : "<<sum<<endl;
    }
}
int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"Youre 2D array is :-"<<endl;
    print(arr,3,3);
    cout<<"Youre Row Sum is :-"<<endl;
    printSumRow(arr,3,3);
    cout<<endl;
    cout<<"Youre Col Sum is :-"<<endl;
    printSumCol(arr,3,3);
    cout<<endl;
    return 0;
}