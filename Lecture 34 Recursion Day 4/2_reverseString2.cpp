#include<iostream>
using namespace std;

void reverse(int i, string &s){
    // base case
    if(i>s.length()-i-1){
        return ;
    }
    swap(s[i],s[s.length()-i-1]);
    i++;
    reverse(i,s);
}

int main(){
    string s = "abcd";
    cout<<"Original String :  ";
    cout<<s<<endl;
    reverse(0,s);
    cout<<"Reversed String :  ";
    cout<<s<<endl;
    return 0;
}