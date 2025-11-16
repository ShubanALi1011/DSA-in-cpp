#include<iostream>
using namespace std;
int strLength(string s){
    int count = 0;
    for(int i=0; s[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    string s = "shuban";
    cout<<"My string is : ";
    cout<<s<<endl;
    int length = strLength(s);
    cout<<"Length of string is : "<<length<<endl;
    return 0;
}