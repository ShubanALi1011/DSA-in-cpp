#include<iostream>
#include<vector>
using namespace std;
int main(){

    vector<int> v ; // dynamic array
    cout<<"Capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity after enter 1 : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity after enter 2 : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity after enter 3 : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"Capacity after enter 4 : "<<v.capacity()<<endl;

    cout<<"Size | no of elements : "<<v.size()<<endl;
    cout<<"v.at(2) : "<<v.at(2)<<endl;
    v.pop_back();
    cout<<"Size after pop_back : "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear : "<<v.size()<<endl;
    return 0;

}