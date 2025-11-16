#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s, int count, int size){
    // base case
    if(count == size/2){
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s,count+1,size);
    s.push(num);
}
void deleteMid(stack<int>&s){
    int size = s.size();
    int count = 0;
    solve(s,count,size);
}
int main(){
    stack<int> s;
    for(int i=0; i<6; i++){
        int value;
        cout<<i+1<<" ) Vlaue for stack : ";
        cin>>value;
        s.push(value);
        cout<<endl;
    }
    cout<<endl<<endl;
    cout<<"Youre Stack is : ";
    stack s1 = s;
    while(!s1.empty()){
        cout<<s1.top()<<"  ";
        s1.pop();
    }
    deleteMid(s);
    cout<<endl<<endl;
    cout<<"After Deleting mid : ";
    while(!s.empty()){
        cout<<s.top()<<"  ";
        s.pop();
    }
    return 0;
}