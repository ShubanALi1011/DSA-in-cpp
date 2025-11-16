#include<iostream>
using namespace std;

void reverse(int i, int j, string &s){
    // base case
    if(i>j){
        return ;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverse(i,j,s);
}

int main(){
    string s = "abcd";
    cout<<"Original String :  ";
    cout<<s<<endl;
    reverse(0,s.length()-1,s);
    cout<<"Reversed String :  ";
    cout<<s<<endl;
    return 0;
}