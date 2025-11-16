#include<iostream>
using namespace std;
class Alien{
    public:
    string dep = "CS";

    void print(){
        cout<<"Hello I'm Alien class."<<endl;
    }
};
class Shuban : public Alien{
    public:
    void print(){
        cout<<"Hello I'm Shuban class."<<endl;
    }
};
int main(){
    Shuban shubh;
    shubh.print();
    shubh.Alien::print();
return 0;
}