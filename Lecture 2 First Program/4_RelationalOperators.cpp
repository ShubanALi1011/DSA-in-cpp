#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=2;

    bool chk1 = (a==b);
    bool chk2 = (a>b);
    bool chk3 = (a<b);
    bool chk4 = (a>=b);
    bool chk5 = (a<=b);
    bool chk6 = (a!=b);

    cout<<"a=5 && b=2"<<endl;
    cout<<"a==b : "<<chk1<<endl;
    cout<<"a>b : "<<chk2<<endl;
    cout<<"a<b : "<<chk3<<endl;
    cout<<"a>=b : "<<chk4<<endl;
    cout<<"a<=b : "<<chk5<<endl;
    cout<<"a!=b : "<<chk6<<endl;
    return 0;
}