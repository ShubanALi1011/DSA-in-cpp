#include<iostream>
using namespace std;
int power(int n, int p){
    int ans = 1;
    for(int i=1; i<=p; i++){
        ans = ans * n;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int p;
    cout<<"Enter power for number : ";
    cin>>p;
    int ans = power(n,p);
    cout<<"Answer is : "<<ans<<endl;
    return 0;
}