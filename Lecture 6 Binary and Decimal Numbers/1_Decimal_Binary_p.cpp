#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a decimal number : ";
    cin>>n;
    int i=0;
    int ans=0;
    cout<<"Decimal : "<<n<<endl;
    while (n!=0)
    {
        int bit = n&1;
        ans += ( bit * pow(10,i));
        n=n>>1;
        i++;
    }
    cout<<"Binary : "<<ans<<endl;
    return 0;
}