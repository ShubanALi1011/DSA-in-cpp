#include<iostream>
using namespace std;
class Human{
    public:
    int height;
    int weight;
};
class Female : public Human{
    public:
    string color;

    void getInfo(){
        cout<<"Height : "<<height<<endl;
        cout<<"Weight : "<<weight<<endl;
        cout<<"Color : "<<color<<endl;
    }
};
int main(){
    Female hania;
    hania.height = 5;
    hania.weight = 45;
    hania.color = "pink";
    cout<<endl<<endl<<"Hania's Properties......."<<endl;
    hania.getInfo();
    cout<<endl<<"-------------------------"<<endl<<endl;
return 0;
}