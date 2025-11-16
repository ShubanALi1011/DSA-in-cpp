#include<iostream>
using namespace std;
void fibonacci(int n){
    int a = 0;
    int b = 1;
    cout<<a<<"  "<<b<<"  ";
    for(int i=0; i<n; i++){
        int nextDigit = a+b;
        cout<<nextDigit<<"  ";
        a = b;
        b = nextDigit;
    }
}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    fibonacci(n);
    cout<<endl;
    return 0;
}