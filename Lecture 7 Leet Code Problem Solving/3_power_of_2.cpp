#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0; i<=30; i++){
        int ans = pow(2,i);
        if(ans==n){
            cout<<"Power of 2"<<endl;
            break;
        }
        if(i==30){
        cout<<"Not power of 2"<<endl;
        break;
    }
    }
    return 0;
}