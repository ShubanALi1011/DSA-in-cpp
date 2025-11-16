#include<iostream>
using namespace std;
int strLength(string s){
    int count = 0;
    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}
void reverse(string &s, int n){
    int start=0;
    int end=n-1;
    while(start<=end){
        swap(s[start++],s[end--]);
    }
}
int main(){
    string s = "shuban";
    cout<<"My string is : ";
    cout<<s<<endl;
    int length = strLength(s);
    cout<<"Length of string is : "<<length<<endl;
    reverse(s,length);
    cout<<"My string after reverse : "<<s<<endl;
    return 0;
}