#include<iostream>
using namespace std;
int AP(int n){
    int ap = (3*n)+7;
    return ap;
}
int main(){
    int n,ans;
    cout<<"Enter a number : ";
    cin>>n;
    ans = AP(n);
    cout<<"A.P : "<<ans<<endl;
    return 0;
}