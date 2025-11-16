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
void spiralPrint(int arr[][3], int row, int col) {
    int count = 0;
    int total = row * col;

    // Index Initialization
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total) {

        // print starting row
        for (int index = startingCol; index <= endingCol && count < total; index++) {
            cout << arr[startingRow][index] << "  ";
            count++;
        }
        startingRow++;

        // print ending column
        for (int index = startingRow; index <= endingRow && count < total; index++) {
            cout << arr[index][endingCol] << "  ";
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; index >= startingCol && count < total; index--) {
            cout << arr[endingRow][index] << "  ";
            count++;
        }
        endingRow--;

        // print starting column
        for (int index = endingRow; index >= startingRow && count < total; index--) {
            cout << arr[index][startingCol] << "  ";
            count++;
        }
        startingCol++;
    }
}

int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    cout<<"Org 2D Array is : -"<<endl;
    print(arr,3,3);
    cout<<"After Spiral Print"<<endl;
    spiralPrint(arr,3,3);
    return 0;
}