#include<iostream>
using namespace std;
bool binarySearch(int arr[][5], int row, int col, int target){
    int rowIndex = 0;
    int colIndex = col-1;
    while(rowIndex < row && colIndex >=0){
        int element = arr[rowIndex][colIndex];

        if(element == target){
            return true;
        }

        if(element < target){
            rowIndex++;
        }
        else{
            colIndex--;
        }
    }
    return false;
}
int main(){
    int arr[5][5]={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},
    {10,13,14,17,24},{18,21,23,26,30}};
    int key;
    cout<<"Enter key  : ";
    cin>>key;
    if(binarySearch(arr,5,5,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}