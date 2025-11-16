#include<iostream>
using namespace std;

string removeOccurances(string s, string part){
    while(s.length() != 0 && s.find(part) < s.length()){
        s.erase(s.find(part), part.length());
    }
    return s;
}
int main(){
    string s = "daabcbaabcbc";
    string part = "abc";
    cout<<"s : "<<s<<endl;
    cout<<"part : "<<part<<endl;
    string str = removeOccurances(s,part);
    cout<<"ans : "<<str<<endl;
    return 0;
}