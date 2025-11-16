#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int start = n-i+1;
        while(start){
            cout<<"*"<<" ";
            start--;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}