#include<iostream>
using namespace std;
int main(){
    int n;
    int count = 0;
    cout<<"Enter a number : ";
    cin>>n;
    while(n!=0){
        if(n&1){ // return 1 if last bit of n is 1
            count++;
        }
        n = n>>1;
    }
    cout<<"No of 1 bit : "<<count<<endl;
        
    return 0;
}