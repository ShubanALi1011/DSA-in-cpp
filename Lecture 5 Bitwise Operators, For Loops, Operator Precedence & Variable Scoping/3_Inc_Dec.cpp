#include<iostream>
using namespace std;
int main(){
    int i=7; // i=7
    cout<<(++i)<<endl; // i ->8, i=8
    cout<<(i++)<<endl; // i->8 , i=9
    cout<<(i--)<<endl; // i->9, i=8
    cout<<(--i)<<endl; // i ->7, i=7
    return 0;
    
}