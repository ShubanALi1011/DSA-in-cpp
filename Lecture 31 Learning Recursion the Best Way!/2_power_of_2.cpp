#include<iostream>
using namespace std;
int powerof2(int n){
  if(n==0){
    return 1;
  }
  int small = powerof2(n-1);
  int big = 2*small;
  return big;
  
}
int main(){
  int n = 5;
  int ans = powerof2(n);
  cout<<ans<<endl;
  return 0;
}