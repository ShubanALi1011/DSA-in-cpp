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

int LargestRowSum(int arr[][3], int row, int col){
    int maxi = -1;
    int rowIndex=-1;
    for(int i=0; i<row; i++){
        int sum=0;
        for(int j=0; j<col; j++){
            sum+=arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i+1;
        }
    }
    cout<<"The Maximum sum  is : "<<maxi<<endl;
    return rowIndex;
}

int main(){
    int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    cout<<"Youre 2D array is :-"<<endl;
    print(arr,3,3);
    cout<<endl;
    int rowIndex = LargestRowSum(arr,3,3);
    cout<<"Largest sum at row : "<<rowIndex<<endl;
    return 0;
}