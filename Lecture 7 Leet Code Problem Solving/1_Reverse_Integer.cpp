#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int m=n;
    int ans = 0;
    while(n!=0){
        int lastDigit = n%10;
        ans = (ans*10)+lastDigit;
        n = n/10;
    }
    cout<<"Original n : "<<m<<endl;
    cout<<"Reversed n : "<<ans<<endl;
    return 0;
}