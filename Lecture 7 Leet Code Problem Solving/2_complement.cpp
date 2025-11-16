#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int m=n;
    int mask = 0;
    while(m!=0){
        mask = (mask<<1) | 1 ;
        m = m>>1;
    }
    int ans = (~n)&mask;
    cout<<"Original number : "<<n<<endl;
    cout<<"Complement : "<<ans<<endl;
    return 0;
}