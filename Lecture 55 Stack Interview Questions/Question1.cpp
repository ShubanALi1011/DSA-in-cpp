#include<bits/stdc++.h>
using namespace std;
int main(){
    string st;
    cout<<"Enter A String for Reverse : ";
    cin>>st;
    stack<char> s;
    for(int i=0; i<st.size(); i++){
        s.push(st[i]);
    }
    string ans = "";
    while(!s.empty()){
        ans+=s.top();
        s.pop();
    }
    cout<<"After Reverse : "<<ans<<endl;
    return 0;
}