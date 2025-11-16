#include<iostream>
using namespace std;
class Poli{
    public:
    void sum(){
        cout<<"Hello I'm sum function"<<endl;
    }
    
    int sum(int a, int b){
        return a+b;
    }

    int sum(int a, double b){
        return a+b;
    }

    int sum(int a, int b, int c){
        return a+b+c;
    }
};
int main(){
    Poli func;
    cout<<endl<<endl;
    func.sum();
    cout<<endl<<"--------------------------"<<endl;
    cout<<"2 Sum : "<<func.sum(2,5)<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"float-int : "<<func.sum(2,5.6)<<endl;
    cout<<"--------------------------"<<endl;
    cout<<"3 Sum : "<<func.sum(2,5,3)<<endl;
    cout<<"--------------------------"<<endl;
return 0;
}