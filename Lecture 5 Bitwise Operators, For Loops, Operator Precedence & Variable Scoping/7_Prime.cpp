#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    bool isPrime = true ;
    for(int i=2; i<num; i++){
        if(num%i==0){
            isPrime = false;
            break;
        }
    }

    if(isPrime){
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}