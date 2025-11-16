#include<iostream>
using namespace std;
int arraySum(int arr[], int n){
    // base case
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }

    int remains = arraySum(arr+1,n-1);
    int sum = arr[0] + remains;
    return sum;
}
int main(){
    int arr[5] = {3,2,5,1,6};
    int sum = arraySum(arr,5);
    cout<<"Sum : "<<sum<<endl;
    return 0;
}