#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,4> a = {1,2,3,4}; // static
    int size = a.size();
    cout<<"Size : "<<size<<endl;
    cout<<"a.at[3] : "<<a.at(3)<<endl;
    cout<<"Empty ? : "<<a.empty()<<endl;
    cout<<"1st Element : "<<a.front()<<endl;
    cout<<"Last Element : "<<a.back()<<endl;
    return 0;
}