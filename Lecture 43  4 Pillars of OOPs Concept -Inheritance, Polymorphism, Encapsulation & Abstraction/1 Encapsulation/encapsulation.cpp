#include<iostream>
using namespace std;
class student{
    private:
    string cnic;
    public:
    string name;
    string aridNo;

    // setter
    void setCnic(string cnic){
        this->cnic = cnic;
    }

    void getInfo(){
        cout<<"Name : "<<this->name<<endl;
        cout<<"Arid No : "<<this->aridNo<<endl;
        cout<<"CNIC : "<<this->cnic<<endl;
    }
};
int main(){
    student alien;
    alien.name = "Shuban ALi";
    alien.aridNo = "24-Arid-848";
    alien.setCnic("42301-4048217-9");
    cout<<endl<<endl<<endl;
    alien.getInfo();
    cout<<endl<<endl<<endl;
return 0;
}