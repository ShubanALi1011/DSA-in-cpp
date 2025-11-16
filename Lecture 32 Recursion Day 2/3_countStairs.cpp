#include<iostream>
using namespace std;
int countStairs(int nStairs){
   if(nStairs==0)
       return 1;
   if(nStairs<0)
       return 0;
   return countStairs(nStairs-1)+countStairs(nStairs-2);
}
int main(){
  int nStairs;
  cout<<"Enter the number of stairs: ";
  cin>>nStairs;
  int ans = countStairs(nStairs);
  cout<<"Ways to climb the stairs: "<<ans<<endl;
  return 0;
}