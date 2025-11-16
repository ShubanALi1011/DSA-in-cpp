#include<iostream>
using namespace std;
int gcd(int a, int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    while(a != b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-1;
        }
    }
    return a;
}
int LCM(int a, int b){
    int hcf = gcd(a,b);
    int lcm = (a*b)/hcf;
    return lcm;
}
int main(){
    int a,b;
    cout<<"Enter first number : ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    int ans = gcd(a,b);
    int ans1 = LCM(a,b);
    cout<<"GCS/HCF : "<<ans<<endl;
    cout<<"LCM : "<<ans1<<endl;
    return 0;
}