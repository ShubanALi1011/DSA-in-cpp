#include<iostream>
using namespace std;
class Abs{
    private:
    double Salary = 20000;
    protected:
    string aridNo = "24-Arid-848";
    public:
    string name = "Shuban ALi";

    string getAridNo(){
        return aridNo;
    }

    double getSalary(){
        return Salary;
    }
};
class alpha : public Abs{
    public:
    void print(){
        cout<<"Protected : "<<aridNo<<endl;
    }
};
int main(){
    Abs alien;
    cout<<"=============================="<<endl;
    cout<<"Name : "<<alien.name<<endl;
    cout<<"Arid No : "<<alien.getAridNo()<<endl;
    cout<<"Salary : "<<alien.getSalary()<<endl;
    alpha obj;
    obj.print();
    cout<<"=============================="<<endl;
return 0;
}