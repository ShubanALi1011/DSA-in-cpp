#include<iostream>
using namespace std;
int SetBits(int n){
    int count = 0;
    while(n != 0){
        if(n&1){
            count++;
        }
        n = n>>1;
    }
    return count ;
}
int setBitsAB(int a, int b){
    int count1 = SetBits(a);
    int count2 = SetBits(b);
    int totalSetBits = count1 + count2;
    return totalSetBits;
}
int main(){
    int a = 2;
    int b = 3;
    int ans = setBitsAB(a,b);
    cout<<"Total SetBits : "<<ans<<endl;
    return 0;
}