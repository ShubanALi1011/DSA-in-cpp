#include<iostream>
using namespace std;
class Programer{
    public:
    string language;
    string specialization = "OOPS & DSA";
    string dataBase = "MySQL";

    void fun(){
        cout<<"I'm Programer ! "<<endl;
    }

};
class Designer{
    public:
    string software = "Adobe Photoshop";
    int level;
    string focusArea;

    void fun(){
        cout<<"I'm Designer ! "<<endl;
    }
};
class Alien : public Programer, public Designer{
    public:
    string name;
    string edu = "BS-CS (AI)";
    
    void getInfo(){
        cout<<endl<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Edu : "<<edu<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Software : "<<software<<endl;
        cout<<"Level : "<<level<<endl;
        cout<<"Focus Area : "<<focusArea<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Language : "<<language<<endl;
        cout<<"Specialization : "<<specialization<<endl;
        cout<<"Data Base : "<<dataBase<<endl;
        cout<<endl<<endl<<endl;
    }

};
int main(){
    Alien shuban;
    shuban.name = "Shuban ALi";
    shuban.level = 6;
    shuban.focusArea = "Social Media";
    shuban.language = "C++";

    shuban.getInfo();
    cout<<"-----------------------------"<<endl;

    // shuban.fun(); // cant understand which parent class fun() ?
    shuban.Programer::fun();
    cout<<endl<<"-----------------------------"<<endl;
    shuban.Designer::fun();
    cout<<endl<<"-----------------------------"<<endl;
return 0;
}