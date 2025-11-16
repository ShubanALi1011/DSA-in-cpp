#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=2;
    int sum = a+b;
    int sub = a-b;
    int mul = a*b;
    int divide = a/b; // return only int value as ans stored in int
    int mod = a%b; //  & only work with int data type

    cout<<"a = 5 && b=2"<<endl;
    cout<<"a+b = "<<sum<<endl;
    cout<<"a-b = "<<sub<<endl;
    cout<<"a*b = "<<mul<<endl;
    cout<<"a/b = "<<divide<<endl;
    cout<<"a%b = "<<mod<<endl;
    return 0;
}