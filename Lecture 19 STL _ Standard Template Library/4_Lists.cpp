#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_front(0);

    cout<<"Size before erase : "<<l.size()<<endl;
    l.erase(l.begin());
    cout<<"Size after erase : "<<l.size()<<endl;
    return 0;
}