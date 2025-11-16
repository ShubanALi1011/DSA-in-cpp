#include<iostream>
using namespace std;
int main(){

    // declare an 2D array
    int arr[3][3];
    // intializing 
    // arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};

    // row vise

    // //cin
    // cout<<"Enter Array Elements : ";
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[i][j];
    //     }
    // }

    // // cout
    // cout<<"Your Array is : "<<endl;
    // for(int i=0; i<3; i++){
    //     for(int j=0; j<3; j++){
    //         cout<<arr[i][j]<<"  ";
    //     }
    //     cout<<endl;
    // }

    // column voice
    //cin
    cout<<"Enter Array Elements : ";
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cin>>arr[j][i];
        }
    }

    // cout
    cout<<"Your Array is : "<<endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;

    
}