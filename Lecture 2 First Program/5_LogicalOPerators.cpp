#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=2;
    bool c=1;
    // && and
    bool check1 = (a>b && a!=0);
    bool check2 = (a<b && a!=0);
    // || or
    bool check3 = (a>b || a==0);
    bool check4 = (a<b || a==0);
    // != not
    c = !c;
    cout<<endl<<"a=5 && b=2"<<endl;
    cout<<"a>b && a!=0 : "<<check1<<endl;
    cout<<"a<b && a!=0 : "<<check2<<endl;

    cout<<"a>b || a==0 : "<<check3<<endl;
    cout<<"a<b || a==0 : "<<check4<<endl;

    cout<<"c : "<<c<<endl;
    return 0;
}