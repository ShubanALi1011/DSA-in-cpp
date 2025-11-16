#include<iostream>
using namespace std;
class HERO{
    private:
    int health;
    public:
    string name;
    char level;

    // setter
    void setHealth(int h){
        health = h;
    }

    // getter getHealth
    int getHealth(){
        return health;
    }
    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Level : "<<level<<endl;
        cout<<"Health : "<<health<<endl;
    }
};
int main(){
    cout<<"Statically .........."<<endl;
    HERO Alien;
    Alien.name = "Shuban ALi";
    Alien.level = 'A';
    Alien.setHealth(89);
    cout<<endl<<endl<<endl;
    Alien.getInfo();
    cout<<endl<<endl;
    cout<<"Dynamically.............."<<endl;

    HERO *hadia = new HERO;
    hadia->name = "Hadia Batool";
    hadia->level = 'A';
    hadia->setHealth(90);
    hadia->getInfo();
    cout<<endl<<endl;
return 0;
}