#include<iostream>
using namespace std;
int main(){
    int a , b;
    char op;
    cout<<"Enter first value : ";
    cin>>a;
    cout<<"Enter 2nd value : ";
    cin>>b;
    cout<<"Enter operation : ";
    cin>>op;
    switch (op)
    {
    case '+':
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        break;

    case '-':
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        break;

    case '*':
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        break;

    case '/':
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
        break;

    default:
        cout<<"Invalid operator"<<endl;
        break;
    }
    return 0;
}