#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    string name = "shuban";
    stack<char> s;
    for(int i=0; i<name.size(); i++){
        s.push(name[i]);
    }
    string ans = "";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"Reverse : "<<ans<<endl;
    return 0;
}