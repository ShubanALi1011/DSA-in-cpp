#include<iostream>
using namespace std;
class Programer{
    public:
    string language;
    string specialization = "OOPS & DSA";
    string dataBase = "MySQL";

};
class Designer{
    public:
    string software = "Adobe Photoshop";
    int level;
    string focusArea;
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
return 0;
}