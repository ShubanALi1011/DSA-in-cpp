#include<iostream>
using namespace std;
class HERO{
    public:
    string name ;
    char level ;
    static int timeToComplete ;
};
int HERO::timeToComplete = 0;
int main(){
    cout<<"Time to Complete : "<<HERO::timeToComplete<<endl;
    HERO::timeToComplete = 10;
    cout<<"Time to Complete : "<<HERO::timeToComplete<<endl;
    HERO shuban;
    cout<<"Time to Complete : "<<shuban.timeToComplete<<endl;
    shuban.timeToComplete = 40;
    cout<<"Time to Complete : "<<shuban.timeToComplete<<endl;
return 0;
}