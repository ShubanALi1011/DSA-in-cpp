#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }

    int smallerProblem = factorial(n-1);
    int biggerProblem = n * factorial(n-1);
    return biggerProblem;
}
int main(){
    int n;
    cout<<"Enter a number for factorial : ";
    cin>>n;
    int fact = factorial(n);
    cout<<"Factorial : "<<fact<<endl;
    return 0;
}