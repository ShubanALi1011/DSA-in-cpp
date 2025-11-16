#include<iostream>
#include<deque>
using namespace  std;
int main(){
    deque<int> d ;  // dynamic | random access 
    d.push_back(1);    // insertion / removal from both sides
    d.push_back(2);
    d.push_front(0);
    cout<<"d.at(0) : "<<d.at(0)<<endl;
    cout<<"d.empty() ? : "<<d.empty()<<endl;
    cout<<"d.size before erase : "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"d.size after erase : "<<d.size()<<endl;
    return 0;
}