#include<iostream>
using namespace std;
class UIIT{
    public:
    string department = "CS-IT";
};
class BSCS : public UIIT{
    public:
    string degree = "BSCS";
    string core = "DSA";
};
class BSCS_AI : public BSCS{
    public:
    string domain = "Mechine Learning";

    void getInfo(){
        cout<<"Department : "<<department<<endl;
        cout<<"Degree : "<<degree<<endl;
        cout<<"Core : "<<core<<endl;
        cout<<"Domain : "<<domain<<endl;
    }
};
int main(){
    BSCS_AI alien;
    cout<<endl<<endl;
    alien.getInfo();
    cout<<endl<<endl;
return 0;
}