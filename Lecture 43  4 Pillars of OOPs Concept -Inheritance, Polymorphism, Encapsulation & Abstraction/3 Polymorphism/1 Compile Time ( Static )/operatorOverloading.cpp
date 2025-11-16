#include<iostream>
using namespace std;
class OP{
    public:
    int a;
    int b;
    void operator+(OP obj){
        int value1 = this->a;
        int value2 = obj.a;
        cout<<"Output : "<<value2-value1<<endl;
    }

    void operator() (){
        cout<<"I'm bracket."<<endl;
    }
};
int main(){
    OP obj1,obj2;
    obj1.a = 4;
    obj2.a = 7;
    obj1 + obj2;
    obj1();
return 0;
}