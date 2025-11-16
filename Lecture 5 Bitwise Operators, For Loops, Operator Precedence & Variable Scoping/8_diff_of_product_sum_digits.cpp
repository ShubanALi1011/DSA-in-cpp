#include<iostream>
using namespace std;
int main(){
    int n = 234;
    int sum = 0;
    int product = 1;
    while(n!=0){
        int lastDigit = n%10;
        sum = sum + lastDigit;
        product = product * lastDigit;
        n = n/10;
    }    
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<product<<endl;
    cout<<"Product-Sum : "<<product-sum<<endl;
    return 0;
}