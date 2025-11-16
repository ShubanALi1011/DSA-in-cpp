#include<iostream>
using namespace std;
class ALIEN{
    public:
    string edu;
    string dep;
};
class shuban : public ALIEN{
    public:
    string name;

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Education : "<<edu<<endl;
        cout<<"Department : "<<dep<<endl;
    }
};
class taimoor : public ALIEN{
    public:
    string name;

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Education : "<<edu<<endl;
        cout<<"Department : "<<dep<<endl;
    }
};
int main(){
    shuban shubh;
    shubh.name = "Shuban ALi";
    shubh.edu = "BSCS-AI";
    shubh.dep = "Computer Science";

    taimoor bandar;
    bandar.name = "Taimoor Tahir";
    bandar.edu = "BSCS";
    bandar.dep = "Computer Science";

    cout<<endl<<endl;
    shubh.getInfo();
    cout<<"-------------------------"<<endl;
    bandar.getInfo();
    cout<<endl<<endl;
return 0;
}