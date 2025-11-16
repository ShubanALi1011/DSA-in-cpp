#include<iostream>
using namespace std;
int febonacci(int n){
  // base case
  if(n==0){
    return 0;
  }
  if(n==1){
    return 1;
  }
  int ans=febonacci(n-1)+febonacci(n-2);
  return ans;
}
int main(){
  int n;
  cout<<"Enter a number: ";
  cin>>n;
  for(int i=0;i<n;i++){
    cout<<febonacci(i)<<" ";
  }
  cout<<endl;
  return 0;
}