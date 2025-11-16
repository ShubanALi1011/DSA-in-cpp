#include<iostream>
using namespace std;
void counting(int n){
  if(n==0){
    return ;
  }
  counting(n-1);
  cout<<n<<"  ";
}
int main(){
  int i = 9;
  counting(i);
  return 0;
}