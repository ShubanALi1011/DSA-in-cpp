#include<iostream>
using namespace std;
int fact(int n){
    int facto = 1;
    for(int i=1; i<=n; i++){
        facto = facto * i;
    }
    return facto;
}
int nCr(int n, int r){
    int nomi = fact(n);
    int deno = fact(r) * fact(n-r);
    int ans = nomi / deno ;
    return ans;
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int r;
    cout<<"Enter r :";
    cin>>r;
    int ans = nCr(n,r);
    cout<<"nCr : "<<ans<<endl;
    return 0;
}